; *************************************************************
; Item: Problem_2.pddl
;
; Descrição:  Exercício 2. Arquivo problema 2.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (problem P_Uber_Autonomo_2)
 (:domain D_Uber_Autonomo)
 
 (:objects 
    Carro_1 - Carro
    Ponto_A Ponto_B Ponto_C Ponto_D Ponto_E - Local
    Passageiro_1 Passageiro_2 Passageiro_3 - Passageiro
 )
 
 (:init
    (Disponivel Carro_1                )
    (Esta       Carro_1         Ponto_A)
    (Esta       Passageiro_1    Ponto_E)
    (Esta       Passageiro_2    Ponto_B)
    (Esta       Passageiro_3    Ponto_D)
    (Aguardando Passageiro_1    Ponto_E Ponto_A)
    (Aguardando Passageiro_2    Ponto_B Ponto_E)
    (Aguardando Passageiro_3    Ponto_D Ponto_A)
    (= (Custo_Total) 0.0)
    ; A - C
    (= (Distancia Ponto_A Ponto_C) 20.0)
    (= (Distancia Ponto_C Ponto_A) 20.0)
    ; A - E
    (= (Distancia Ponto_A Ponto_E) 40.0)
    (= (Distancia Ponto_E Ponto_A) 40.0)
    ; C - E
    (= (Distancia Ponto_C Ponto_E) 30.0)
    (= (Distancia Ponto_E Ponto_C) 30.0)
    ; C - D
    (= (Distancia Ponto_C Ponto_D) 15.0)
    (= (Distancia Ponto_D Ponto_C) 15.0)
    ; C - B
    (= (Distancia Ponto_C Ponto_B) 30.0)
    (= (Distancia Ponto_B Ponto_C) 30.0)
    ; B - D
    (= (Distancia Ponto_B Ponto_D) 20.0)
    (= (Distancia Ponto_D Ponto_B) 20.0)
    ; D - E
    (= (Distancia Ponto_D Ponto_E) 20.0)
    (= (Distancia Ponto_E Ponto_D) 20.0)
    (= (Custo_Por_Km) 5.00)
 )
 
 (:goal (and (Disponivel Carro_1)
             (Esta       Passageiro_1    Ponto_A)
             (Esta       Passageiro_2    Ponto_E)     
             (Esta       Passageiro_3    Ponto_A)
             (Esta       Carro_1         Ponto_C)
        )
 )

(:metric minimize (Custo_Total))

)