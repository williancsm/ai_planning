; *************************************************************
; Item: problem.pddl
;
; Descrição:  Tarefa 2. Exercício 1. Arquivo problema.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (problem P_Missoes_Drone_1)
 (:domain D_Missoes_Drone_1)
 
 (:objects 
    Drone_1 - Drone
    Regiao_1 Regiao_2 Regiao_3 Regiao_4 Regiao_5 Regiao_6 - Regiao
    Base_1 Base_2 Base_3 - Base
 )
 
 (:init
    (Esta       Drone_1         Base_1)

    (= (Bateria Drone_1) 50.0)
    (= (Velocidade Drone_1) 5.0)
    (= (Max_Bateria) 50.0)
    (= (Custo_Por_Km) 1.0)

    ; R1 - R2
    (= (Distancia Regiao_1 Regiao_2) 5.0)
    (= (Distancia Regiao_2 Regiao_1) 5.0)
    ; R1 - R3
    (= (Distancia Regiao_1 Regiao_3) 30.0)
    (= (Distancia Regiao_3 Regiao_1) 30.0)
    ; R1 - R4
    (= (Distancia Regiao_1 Regiao_4) 40.0)
    (= (Distancia Regiao_4 Regiao_1) 40.0)
    ; R1 - R5
    (= (Distancia Regiao_1 Regiao_5) 50.0)
    (= (Distancia Regiao_5 Regiao_1) 50.0)
    ; R1 - R6
    (= (Distancia Regiao_1 Regiao_6) 70.0)
    (= (Distancia Regiao_6 Regiao_1) 70.0)
    ; R1 - B1
    (= (Distancia Regiao_1 Base_1) 10.0)
    (= (Distancia Base_1 Regiao_1) 10.0)
    ; R1 - B2
    (= (Distancia Regiao_1 Base_2) 25.0)
    (= (Distancia Base_2 Regiao_1) 25.0)
    ; R1 - B3
    (= (Distancia Regiao_1 Base_3) 75.0)
    (= (Distancia Base_3 Regiao_1) 75.0)
    ;
    ; R2 - R3
    (= (Distancia Regiao_2 Regiao_3) 1.0)
    (= (Distancia Regiao_3 Regiao_2) 1.0)
    ; R2 - R4
    (= (Distancia Regiao_2 Regiao_4) 20.0)
    (= (Distancia Regiao_4 Regiao_2) 20.0)
    ; R2 - R5
    (= (Distancia Regiao_2 Regiao_5) 40.0)
    (= (Distancia Regiao_5 Regiao_2) 40.0)
    ; R2 - R6
    (= (Distancia Regiao_2 Regiao_6) 60.0)
    (= (Distancia Regiao_6 Regiao_2) 60.0)
    ; R2 - B1
    (= (Distancia Regiao_2 Base_1) 1.0)
    (= (Distancia Base_1 Regiao_2) 1.0)
    ; R2 - B2
    (= (Distancia Regiao_2 Base_2) 30.0)
    (= (Distancia Base_2 Regiao_2) 30.0)
    ; R2 - B3
    (= (Distancia Regiao_2 Base_3) 75.0)
    (= (Distancia Base_3 Regiao_2) 75.0)
    ;
    ; R3 - R4
    (= (Distancia Regiao_3 Regiao_4) 1.0)
    (= (Distancia Regiao_4 Regiao_3) 1.0)
    ; R3 - R5
    (= (Distancia Regiao_3 Regiao_5) 15.0)
    (= (Distancia Regiao_5 Regiao_3) 15.0)
    ; R3 - R6
    (= (Distancia Regiao_3 Regiao_6) 30.0)
    (= (Distancia Regiao_6 Regiao_3) 30.0)
    ; R3 - B1
    (= (Distancia Regiao_3 Base_1) 20.0)
    (= (Distancia Base_1 Regiao_3) 20.0)
    ; R3 - B2
    (= (Distancia Regiao_3 Base_2) 30.0)
    (= (Distancia Base_2 Regiao_3) 30.0)
    ; R3 - B3
    (= (Distancia Regiao_3 Base_3) 35.0)
    (= (Distancia Base_3 Regiao_3) 35.0)
    ;
    ; R4 - R5
    (= (Distancia Regiao_4 Regiao_5) 5.0)
    (= (Distancia Regiao_5 Regiao_4) 5.0)
    ; R4 - R6
    (= (Distancia Regiao_4 Regiao_6) 20.0)
    (= (Distancia Regiao_6 Regiao_4) 20.0)
    ; R4 - B1
    (= (Distancia Regiao_4 Base_1) 25.0)
    (= (Distancia Base_1 Regiao_4) 25.0)
    ; R4 - B2
    (= (Distancia Regiao_4 Base_2) 35.0)
    (= (Distancia Base_2 Regiao_4) 35.0)
    ; R4 - B3
    (= (Distancia Regiao_4 Base_3) 40.0)
    (= (Distancia Base_3 Regiao_4) 40.0)
    ;
    ; R5 - R6
    (= (Distancia Regiao_5 Regiao_6) 15.0)
    (= (Distancia Regiao_6 Regiao_5) 15.0)
    ; R5 - B1
    (= (Distancia Regiao_5 Base_1) 25.0)
    (= (Distancia Base_1 Regiao_5) 25.0)
    ; R5 - B2
    (= (Distancia Regiao_5 Base_2) 20.0)
    (= (Distancia Base_2 Regiao_5) 20.0)
    ; R5 - B3
    (= (Distancia Regiao_5 Base_3) 20.0)
    (= (Distancia Base_3 Regiao_5) 20.0)
    ;
    ; R6 - B1
    (= (Distancia Regiao_6 Base_1) 65.0)
    (= (Distancia Base_1 Regiao_6) 65.0)
    ; R6 - B2
    (= (Distancia Regiao_6 Base_2) 35.0)
    (= (Distancia Base_2 Regiao_6) 35.0)
    ; R6 - B3
    (= (Distancia Regiao_6 Base_3) 70.0)
    (= (Distancia Base_3 Regiao_6) 70.0)
    ;
    ; B1 - B2
    (= (Distancia Base_1 Base_2) 35.0)
    (= (Distancia Base_2 Base_1) 35.0)
    ; B1 - B3
    (= (Distancia Base_1 Base_3) 70.0)
    (= (Distancia Base_3 Base_1) 70.0)
    ;
    ; B2 - B3
    (= (Distancia Base_2 Base_3) 40.0)
    (= (Distancia Base_3 Base_2) 40.0)
    
 )
 
 (:goal (and (Esta       Drone_1 Base_1)
             (Fotos     Regiao_1)     
             (Fotos     Regiao_2)  
             (Fotos     Regiao_3)     
             (Fotos     Regiao_4)     
             (Fotos     Regiao_5)     
             (Fotos     Regiao_6)     

             (Inseticida     Regiao_1)     
             (Inseticida     Regiao_2)  
             (Inseticida     Regiao_3)     
             (Inseticida     Regiao_4)     
             (Inseticida     Regiao_5)     
             (Inseticida     Regiao_6)     
        )
 )

(:metric minimize (total-time))

)