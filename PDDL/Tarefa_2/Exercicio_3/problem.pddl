; *************************************************************
; Item: problem.pddl
;
; Descrição:  Tarefa 2. Exercício 3. Arquivo problema.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (problem P_Missoes_Drone_3)
 (:domain D_Missoes_Drone_3)
 
 (:objects 
    Drone_1 - Drone
    Regiao_1 Regiao_2 Regiao_3 Regiao_4 Regiao_5 Regiao_6 - Regiao
    Base_1 Base_2 Base_3 - Base
    Aspergir_Inseticida Tirar_Fotos - Missao    
 )
 
 (:init
    ; Intervalos
    (at 200.0 (Concluida  Aspergir_Inseticida Regiao_1))
    (at 500.0 (Concluida  Tirar_Fotos Regiao_2))

     
    ; Métricas
    (= (Distancia_Total) 0.0)
    ; Bug em total-time
    (= (Tempo_Total) 0.0)

    ; Constantes
    (= (Max_Bateria) 150.0)
    (= (Max_Insumo Aspergir_Inseticida) 30.0)
    ; São necessários 800MB para completar a maior missão de tirar fotos (40Km).
    (= (Max_Insumo Tirar_Fotos) 800.0)

    ; Predicados
    (Esta       Drone_1         Base_1)
    (Disponivel Drone_1)

    ; Consumíveis
    (= (Bateria Drone_1) 150.0)
    (= (Insumo Drone_1 Aspergir_Inseticida) 30.0)
    (= (Insumo Drone_1 Tirar_Fotos) 800.0)

    ; Taxas
    (= (Velocidade Drone_1) 0.5)

    ; Alta penalidade por recarregar bateria
    (= (Recarregar_Bateria_Por_Tempo) 0.5)
    (= (Recarregar_Insumo_Por_Tempo Aspergir_Inseticida) 1.0)
    (= (Recarregar_Insumo_Por_Tempo Tirar_Fotos) 10.0)

    (= (Custo_Bateria_Por_Km) 1.0)
    (= (Custo_Insumo_Por_Km Aspergir_Inseticida) 1.0)
    ; 1 foto = 10MB. 2 fotos por Km = 20MB por Km.
    (= (Custo_Insumo_Por_Km Tirar_Fotos) 20.0)
    
    ; Missões
    (Planejada  Aspergir_Inseticida Regiao_1)
    (Planejada  Tirar_Fotos Regiao_1)
    (Planejada  Aspergir_Inseticida Regiao_2)
    (Planejada  Tirar_Fotos Regiao_2)
    (Planejada  Aspergir_Inseticida Regiao_3)
    (Planejada  Tirar_Fotos Regiao_3)
    (Planejada  Aspergir_Inseticida Regiao_4)
    (Planejada  Tirar_Fotos Regiao_4)
    (Planejada  Aspergir_Inseticida Regiao_5)
    (Planejada  Tirar_Fotos Regiao_5)

    ; Distâncias das Missões
    ; R1
    (= (Distancia_Missao Aspergir_Inseticida Regiao_1) 30.0)
    (= (Distancia_Missao Tirar_Fotos Regiao_1) 40.0)
    ; R2
    (= (Distancia_Missao Aspergir_Inseticida Regiao_2) 20.0)
    (= (Distancia_Missao Tirar_Fotos Regiao_2) 30.0)
    ; R3
    (= (Distancia_Missao Aspergir_Inseticida Regiao_3) 10.0)
    (= (Distancia_Missao Tirar_Fotos Regiao_3) 10.0)
    ; R4
    (= (Distancia_Missao Aspergir_Inseticida Regiao_4) 15.0)
    (= (Distancia_Missao Tirar_Fotos Regiao_4) 15.0)
    ; R5
    (= (Distancia_Missao Aspergir_Inseticida Regiao_5) 25.0)
    (= (Distancia_Missao Tirar_Fotos Regiao_5) 35.0)

    ; Distâncias do Mapa
    ; R1 - R2
    (= (Distancia_Mapa Regiao_1 Regiao_2) 5.0)
    (= (Distancia_Mapa Regiao_2 Regiao_1) 5.0)
    ; R1 - R3
    (= (Distancia_Mapa Regiao_1 Regiao_3) 30.0)
    (= (Distancia_Mapa Regiao_3 Regiao_1) 30.0)
    ; R1 - R4
    (= (Distancia_Mapa Regiao_1 Regiao_4) 40.0)
    (= (Distancia_Mapa Regiao_4 Regiao_1) 40.0)
    ; R1 - R5
    (= (Distancia_Mapa Regiao_1 Regiao_5) 50.0)
    (= (Distancia_Mapa Regiao_5 Regiao_1) 50.0)
    ; R1 - R6
    (= (Distancia_Mapa Regiao_1 Regiao_6) 70.0)
    (= (Distancia_Mapa Regiao_6 Regiao_1) 70.0)
    ; R1 - B1
    (= (Distancia_Mapa Regiao_1 Base_1) 10.0)
    (= (Distancia_Mapa Base_1 Regiao_1) 10.0)
    ; R1 - B2
    (= (Distancia_Mapa Regiao_1 Base_2) 25.0)
    (= (Distancia_Mapa Base_2 Regiao_1) 25.0)
    ; R1 - B3
    (= (Distancia_Mapa Regiao_1 Base_3) 75.0)
    (= (Distancia_Mapa Base_3 Regiao_1) 75.0)
    ;
    ; R2 - R3
    (= (Distancia_Mapa Regiao_2 Regiao_3) 1.0)
    (= (Distancia_Mapa Regiao_3 Regiao_2) 1.0)
    ; R2 - R4
    (= (Distancia_Mapa Regiao_2 Regiao_4) 20.0)
    (= (Distancia_Mapa Regiao_4 Regiao_2) 20.0)
    ; R2 - R5
    (= (Distancia_Mapa Regiao_2 Regiao_5) 40.0)
    (= (Distancia_Mapa Regiao_5 Regiao_2) 40.0)
    ; R2 - R6
    (= (Distancia_Mapa Regiao_2 Regiao_6) 60.0)
    (= (Distancia_Mapa Regiao_6 Regiao_2) 60.0)
    ; R2 - B1
    (= (Distancia_Mapa Regiao_2 Base_1) 1.0)
    (= (Distancia_Mapa Base_1 Regiao_2) 1.0)
    ; R2 - B2
    (= (Distancia_Mapa Regiao_2 Base_2) 30.0)
    (= (Distancia_Mapa Base_2 Regiao_2) 30.0)
    ; R2 - B3
    (= (Distancia_Mapa Regiao_2 Base_3) 75.0)
    (= (Distancia_Mapa Base_3 Regiao_2) 75.0)
    ;
    ; R3 - R4
    (= (Distancia_Mapa Regiao_3 Regiao_4) 1.0)
    (= (Distancia_Mapa Regiao_4 Regiao_3) 1.0)
    ; R3 - R5
    (= (Distancia_Mapa Regiao_3 Regiao_5) 15.0)
    (= (Distancia_Mapa Regiao_5 Regiao_3) 15.0)
    ; R3 - R6
    (= (Distancia_Mapa Regiao_3 Regiao_6) 30.0)
    (= (Distancia_Mapa Regiao_6 Regiao_3) 30.0)
    ; R3 - B1
    (= (Distancia_Mapa Regiao_3 Base_1) 20.0)
    (= (Distancia_Mapa Base_1 Regiao_3) 20.0)
    ; R3 - B2
    (= (Distancia_Mapa Regiao_3 Base_2) 30.0)
    (= (Distancia_Mapa Base_2 Regiao_3) 30.0)
    ; R3 - B3
    (= (Distancia_Mapa Regiao_3 Base_3) 35.0)
    (= (Distancia_Mapa Base_3 Regiao_3) 35.0)
    ;
    ; R4 - R5
    (= (Distancia_Mapa Regiao_4 Regiao_5) 5.0)
    (= (Distancia_Mapa Regiao_5 Regiao_4) 5.0)
    ; R4 - R6
    (= (Distancia_Mapa Regiao_4 Regiao_6) 20.0)
    (= (Distancia_Mapa Regiao_6 Regiao_4) 20.0)
    ; R4 - B1
    (= (Distancia_Mapa Regiao_4 Base_1) 25.0)
    (= (Distancia_Mapa Base_1 Regiao_4) 25.0)
    ; R4 - B2
    (= (Distancia_Mapa Regiao_4 Base_2) 35.0)
    (= (Distancia_Mapa Base_2 Regiao_4) 35.0)
    ; R4 - B3
    (= (Distancia_Mapa Regiao_4 Base_3) 40.0)
    (= (Distancia_Mapa Base_3 Regiao_4) 40.0)
    ;
    ; R5 - R6
    (= (Distancia_Mapa Regiao_5 Regiao_6) 15.0)
    (= (Distancia_Mapa Regiao_6 Regiao_5) 15.0)
    ; R5 - B1
    (= (Distancia_Mapa Regiao_5 Base_1) 25.0)
    (= (Distancia_Mapa Base_1 Regiao_5) 25.0)
    ; R5 - B2
    (= (Distancia_Mapa Regiao_5 Base_2) 20.0)
    (= (Distancia_Mapa Base_2 Regiao_5) 20.0)
    ; R5 - B3
    (= (Distancia_Mapa Regiao_5 Base_3) 20.0)
    (= (Distancia_Mapa Base_3 Regiao_5) 20.0)
    ;
    ; R6 - B1
    (= (Distancia_Mapa Regiao_6 Base_1) 65.0)
    (= (Distancia_Mapa Base_1 Regiao_6) 65.0)
    ; R6 - B2
    (= (Distancia_Mapa Regiao_6 Base_2) 35.0)
    (= (Distancia_Mapa Base_2 Regiao_6) 35.0)
    ; R6 - B3
    (= (Distancia_Mapa Regiao_6 Base_3) 1.0)
    (= (Distancia_Mapa Base_3 Regiao_6) 1.0)
    ;
    ; B1 - B2
    (= (Distancia_Mapa Base_1 Base_2) 35.0)
    (= (Distancia_Mapa Base_2 Base_1) 35.0)
    ; B1 - B3
    (= (Distancia_Mapa Base_1 Base_3) 70.0)
    (= (Distancia_Mapa Base_3 Base_1) 70.0)
    ;
    ; B2 - B3
    (= (Distancia_Mapa Base_2 Base_3) 40.0)
    (= (Distancia_Mapa Base_3 Base_2) 40.0)
 )

(:constraints
  (and 
    (forall (?drone - Drone) (always (and (> (Bateria ?drone) 0.0)
                                          (<= (Bateria ?drone) (Max_Bateria))
                                     )
                             )
    )
    (forall (?drone - Drone ?missao - Missao) 
              (always (and (>= (Insumo ?drone ?missao) 0.0)
                           (<= (Insumo ?drone ?missao) (Max_Insumo ?missao))
                      )
              )
    )
  )
)
 
(:goal (and (Esta       Drone_1 Base_2)
            (Concluida  Aspergir_Inseticida Regiao_1)
            (Concluida  Tirar_Fotos Regiao_1)
            (Concluida  Aspergir_Inseticida Regiao_2),
            (Concluida  Tirar_Fotos Regiao_2)
            (Concluida  Aspergir_Inseticida Regiao_3)
            (Concluida  Tirar_Fotos Regiao_3)
            (Concluida  Aspergir_Inseticida Regiao_4)
            (Concluida  Tirar_Fotos Regiao_4)
            (Concluida  Aspergir_Inseticida Regiao_5)
            (Concluida  Tirar_Fotos Regiao_5)
      )
)


(:metric minimize (Tempo_Total) 
                  ; Bug
                  ;(total-time)                   
)

)