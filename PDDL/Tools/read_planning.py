import re
import sys

PONTO_A = "ponto_a"
PONTO_B = "ponto_b"
PONTO_C = "ponto_c"
PONTO_D = "ponto_d"
PONTO_E = "ponto_e"

MOVE_VAZIO = "move_vazio"
MOVE_PASSAGEIRO_1 = "move_passageiro_1"
MOVE_PASSAGEIRO_2 = "move_passageiro_2"

D = {}
D[PONTO_A, PONTO_C] = 20.0
D[PONTO_C, PONTO_A] = 20.0

D[PONTO_A, PONTO_E] = 40.0
D[PONTO_E, PONTO_A] = 40.0

D[PONTO_C, PONTO_E] = 30.0
D[PONTO_E, PONTO_C] = 30.0

D[PONTO_C, PONTO_D] = 15.0
D[PONTO_D, PONTO_C] = 15.0

D[PONTO_C, PONTO_B] = 30.0
D[PONTO_B, PONTO_C] = 30.0

D[PONTO_B, PONTO_D] = 20.0
D[PONTO_D, PONTO_B] = 20.0

D[PONTO_D, PONTO_E] = 35.0
D[PONTO_E, PONTO_D] = 35.0

distancia_total = 0.0
distancia_p_1 = 0.0
distancia_p_2 = 0.0
distancia_vazio = 0.0

f = open(sys.argv[1], "r")

for line in f:
  target_string = line
  
  # two groups enclosed in separate ( and ) bracket
  result = re.search(r"\S+ \((\S+) \S+ (\S+) (\S+)\)  +\S+", target_string)
  
  print(line, end='')

  if result is not None:
    # Extract matching values of all groups
    acao = result.group(1)
    de = result.group(2)
    para = result.group(3)

    if (acao == MOVE_PASSAGEIRO_1):
      distancia_p_1 += D[de, para]
    elif (acao == MOVE_PASSAGEIRO_2):
      distancia_p_2 += D[de, para]
    elif (acao == MOVE_VAZIO):
      distancia_vazio += D[de, para]


f.close()

print("\n\nDistância Vazio: ", distancia_vazio, "\nDistância 1 Passageiro: ", distancia_p_1, "\nDistância 2 Passageiros: ", distancia_p_2, "\nDistância TOTAL: ", (distancia_vazio + distancia_p_1 + distancia_p_2))
print("\nLUCRO: ", - distancia_vazio * 3.0 + distancia_p_1 * 4.0 + distancia_p_2 * 5.0)

