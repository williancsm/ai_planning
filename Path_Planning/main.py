from gurobipy import *
import sys
import matplotlib.pyplot as plt
import random
from gurobipy import GRB

mdl = Model('LPCnLimitado')

# Parameters equação de dinâmica
deltaT = 1.0 
m = 2.0

# Rótulos para os wayponts
times = ['0', '1', '2', '3', '4','5','6','7','8','9', '10','11','12','13','14']
#times = ['0', '1', '2', '3', '4','5','6','7','8','9', '10', '11']
#times = ['0', '1', '2', '3', '4','5','6','7','8','9', '10']
#times = ['0', '1', '2', '3', '4','5','6','7']

nWP = len(times)-1

# Variáveis do modelo
x = mdl.addVars(times, name='x')
y = mdl.addVars(times, name='y')
vx = mdl.addVars(times, name='vx', lb=-1, ub=1)
vy = mdl.addVars(times, name='vy', lb=-1, ub=1)
Fx = mdl.addVars(times,name='Fx', lb=-1, ub=1)
Fy = mdl.addVars(times,name='Fy', lb=-1, ub=1)
obj = mdl.addVar(name='obj')

# Restrições de dinâmica do veículo
mdl.addConstrs((x[times[t+1]]==x[times[t]]+vx[times[t]]*deltaT+0.5*(deltaT**2)*Fx[times[t]]/m for t in range(len(times)) if times[t] != times[nWP]), name ='xpos')
mdl.addConstrs((y[times[t+1]]==y[times[t]]+vy[times[t]]*deltaT+0.5*(deltaT**2)*Fy[times[t]]/m for t in range(len(times)) if times[t] != times[nWP]), name ='ypos')
mdl.addConstrs((vx[times[t+1]]==vx[times[t]]+deltaT*Fx[times[t]]/m for t in range(len(times)) if times[t] != times[nWP]) , name='vx')
mdl.addConstrs((vy[times[t+1]]==vy[times[t]]+deltaT*Fy[times[t]]/m for t in range(len(times))if times[t] != times[nWP]), name='vy')

# Initial Position Constraints
mdl.addConstrs((x[times[t]]==1 for t in range(len(times)) if times[t] == times[0]), name='x0')
mdl.addConstrs((y[times[t]]==1 for t in range(len(times)) if times[t] == times[0]), name='y0')
mdl.addConstrs((vx[times[t]]==0.0 for t in range(len(times)) if times[t] == times[0]), name='vx0')
mdl.addConstrs((vy[times[t]]==0.0 for t in range(len(times)) if times[t] == times[0]), name='vy0')

#Goal Position Constraints
mdl.addConstrs((x[times[t]]==8 for t in range(len(times)) if times[t] == times[nWP]), name='xGoal')
mdl.addConstrs((y[times[t]]==10 for t in range(len(times)) if times[t] == times[nWP]), name='yGoal')
mdl.addConstrs((vx[times[t]]==0.0 for t in range(len(times)) if times[t] == times[nWP]), name='x0')
mdl.addConstrs((vy[times[t]]==0.0 for t in range(len(times)) if times[t] == times[nWP]), name='y0')

#Objective function

mdl.modelSense = GRB.MINIMIZE
mdl.setObjective(quicksum( Fx[times[t]]*Fx[times[t]] + Fy[times[t]]*Fy[times[t]] for t in range(len(times))))

mdl.optimize()

temp_X = []
temp_Y = []
temp_F = []
for t in range(len(times)):
    temp_X.append(float(x[times[t]].x))
    temp_Y.append(float(y[times[t]].x))
    temp_F.append([float(Fx[times[t]].x),float(Fy[times[t]].x)])
print(temp_X)
print(temp_Y)
print(temp_F)
plt.plot(temp_X,temp_Y, '-ro')
plt.plot(8,10,'bo') # destino em azul
plt.plot(1,1,'bo') # origem em azul
plt.plot(10,10) #área de plotagem (x,y)=(10,10)
plt.show()
