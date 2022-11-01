; *************************************************************
; Item: Problem_2.pddl
;
; Descrição:  
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (problem P_Frota_Uber_Autonomo_2)
 (:domain D_Frota_Uber_Autonomo_3)
 
 (:objects 
    Carro_1 Carro_2 Carro_3 Carro_4 - Carro
    Ponto_A Ponto_B Ponto_C Ponto_D Ponto_E - Local
    Passageiro_1 Passageiro_2 Passageiro_3 Passageiro_4 Passageiro_5 - Passageiro
 )
 
 (:init
    (Esta       Carro_1         Ponto_A)
    (Esta       Carro_2         Ponto_A)
    (Esta       Carro_3         Ponto_A)
    (Esta       Carro_4         Ponto_A)

    (Esta       Passageiro_1    Ponto_A)
    (Esta       Passageiro_2    Ponto_C)
    (Esta       Passageiro_3    Ponto_B)
    (Esta       Passageiro_4    Ponto_E)
    (Esta       Passageiro_5    Ponto_D)

    (Aguardando Passageiro_1    Ponto_E)
    (Aguardando Passageiro_2    Ponto_E)
    (Aguardando Passageiro_3    Ponto_C)
    (Aguardando Passageiro_4    Ponto_A)
    (Aguardando Passageiro_5    Ponto_B)

    (= (Distancia_Passageiro_1) 0.0)
    (= (Distancia_Passageiro_2) 0.0)
    (= (Distancia_Vazio) 0.0)

    (= (Lotacao Carro_1) 0.0)
    (= (Lotacao Carro_2) 0.0)
    (= (Lotacao Carro_3) 0.0)
    (= (Lotacao Carro_4) 0.0)

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
 )

(:constraints
  (and 
    (forall (?c - Carro) (always (<= (Lotacao ?c) 2.0)))
    (forall (?c - Carro) (always (>= (Lotacao ?c) 0.0)))
  )
)
 
(:goal (and (Esta       Passageiro_1    Ponto_E)
            (Esta       Passageiro_2    Ponto_E)     
            (Esta       Passageiro_3    Ponto_C)
            (Esta       Passageiro_4    Ponto_A)
            (Esta       Passageiro_5    Ponto_B)
            (Esta       Carro_1         Ponto_A)
            (Esta       Carro_2         Ponto_A)
            (Esta       Carro_3         Ponto_A)
            (Esta       Carro_4         Ponto_A)
       )
)

(:metric minimize (+
                      (* (Distancia_Vazio) 0.6)
                      (* (Distancia_Passageiro_1) 0.3)
                      (* (Distancia_Passageiro_2) 0.1)
                  ) 
)

)