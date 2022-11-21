import gurobipy as gp
from gurobipy import GRB
import matplotlib.pyplot as plt

mdl = gp.Model('LPCnLimitado')

# -------------------
# CONSTANTS
# -------------------
# Parameters equação de dinâmica
DELTA_T = 1.0 
MASS    = 2.0
START   = {'x' : 1.0, 
           'y' : 1.0}
GOAL    = {'x' : 8.0, 
           'y' : 10.0}

# Rótulos para os wayponts
INIT = 0
END = 13
TIMES = (END - INIT) + 1

# -------------------
# VARS
# -------------------
# Variáveis do modelo
x = {} 
y = {}
V_x = {}
V_y = {}
F_x = {}
F_y = {}

for t in range(TIMES):
  x[t]   = mdl.addVar(name='VAR_x[%i]' % t)
  y[t]   = mdl.addVar(name='VAR_y[%i]' % t)
  V_x[t] = mdl.addVar(name='VAR_V_x[%i]' % t, lb=-1.0, ub=1.0)
  V_y[t] = mdl.addVar(name='VAR_V_y[%i]' % t, lb=-1.0, ub=1.0)
  F_x[t] = mdl.addVar(name='VAR_F_x[%i]' % t, lb=-1.0, ub=1.0)
  F_y[t] = mdl.addVar(name='VAR_F_y[%i]' % t, lb=-1.0, ub=1.0)

# -------------------
# CONSTRAINTS
# -------------------
# Restrições de dinâmica do veículo
for t in range(TIMES - 1):
  mdl.addConstr(
    x[t + 1] == x[t] + V_x[t] * DELTA_T + 0.5 * (DELTA_T ** 2) * F_x[t] / MASS, 
    name ='CONSTR_x[%i]' % t
  )
  mdl.addConstr(
    y[t + 1] == y[t] + V_y[t] * DELTA_T + 0.5 * (DELTA_T ** 2) * F_y[t] / MASS, 
    name ='CONSTR_y[%i]' % t
  )
  mdl.addConstr(
    V_x[t + 1] == V_x[t] + DELTA_T * F_x[t] / MASS, 
    name ='CONSTR_V_x[%i]' % t
  )
  mdl.addConstr(
    V_y[t + 1] == V_y[t] + DELTA_T * F_y[t] / MASS, 
    name ='CONSTR_V_y[%i]' % t
  )

# Initial Position Constraints
mdl.addConstr(x[INIT]   == START['x'], name='CONSTR_x_0')
mdl.addConstr(y[INIT]   == START['y'], name='CONSTR_y_0')
mdl.addConstr(V_x[INIT] ==      0.0, name='CONSTR_V_x_0')
mdl.addConstr(V_y[INIT] ==      0.0, name='CONSTR_V_y_0')

# Goal Position Constraints
mdl.addConstr(x[END]   == GOAL['x'], name='CONSTR_x_Goal')
mdl.addConstr(y[END]   == GOAL['y'], name='CONSTR_y_Goal')
mdl.addConstr(V_x[END] ==     0.0, name='CONSTR_V_x_Goal')
mdl.addConstr(V_y[END] ==     0.0, name='CONSTR_V_y_Goal')

# Objective function
mdl.modelSense = GRB.MINIMIZE
mdl.setObjective(
  gp.quicksum(
    [F_x[t] ** 2.0 + F_y[t] ** 2.0 for t in range(TIMES)]
  )
)

mdl.optimize()

# -------------------
# PLOT
# -------------------
plt.plot(
  [x[t].x for t in range(TIMES)],
  [y[t].x for t in range(TIMES)],
  '-ro'
)

plt.plot(GOAL['x'], GOAL['y'],'bo') 
plt.plot(START['x'], START['y'],'bo') 
plt.show()


