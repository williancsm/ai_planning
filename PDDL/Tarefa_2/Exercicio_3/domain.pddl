; *************************************************************
; Item: domain.pddl
;
; Descrição:  Tarefa 2. Exercício 2. Arquivo domínio.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (domain D_Missoes_Drone_2)

(:requirements :typing :action-costs :durative-actions :constraints :quantified-preconditions)

(:types
    Drone Missao Local - objects
    Regiao Base - Local
)

(:functions
    (Max_Bateria)
    (Max_Insumo ?missao - Missao)
    (Distancia_Total)

    (Bateria    ?drone - Drone)
    (Insumo    ?drone - Drone ?missao - Missao)
    (Velocidade ?drone - Drone)
    
    (Distancia_Mapa     ?local_1 ?local_2 - Local)
    (Distancia_Missao   ?missao - Missao ?regiao - Regiao)     
    
    (Custo_Bateria_Por_Km)
    (Custo_Insumo_Por_Km ?missao - Missao)

    (Recarregar_Bateria_Por_Tempo)
    (Recarregar_Insumo_Por_Tempo ?missao - Missao)
)

(:predicates
    (Esta       ?drone - Drone  ?local - Local)
    (Planejada  ?missao - Missao ?regiao - Regiao)
    (Concluida  ?missao - Missao ?regiao - Regiao)
    (Disponivel  ?drone - Drone)
)

; A penalidade de recarregar é o tempo
(:durative-action Recarregar_Bateria
    :parameters (?drone - Drone ?base - Base)
    :duration (= ?duration (/ (- (Max_Bateria) (Bateria ?drone)) (Recarregar_Bateria_Por_Tempo))  
              )
    :condition (and  (over all (Esta   ?drone ?base))
                     ; Não executar duas recargas ao mesmo tempo
                     (at start (Disponivel ?drone))
              )
    :effect (and   (at start (not (Disponivel ?drone)))
                   (at end   (Disponivel ?drone))
                   (at end (assign (Bateria ?drone) (Max_Bateria)))
            )
)

; A penalidade de recarregar é o tempo
(:durative-action Recarregar_Insumo
    :parameters (?drone - Drone ?missao - Missao ?base - Base)
    :duration (= ?duration (/ (- (Max_Insumo ?missao) (Insumo ?drone ?missao)) (Recarregar_Insumo_Por_Tempo ?missao))  
              )
    :condition (and  (over all (Esta   ?drone ?base))
                     ; Não executar duas recargas ao mesmo tempo
                     (at start (Disponivel ?drone))
              )
    :effect (and   (at start (not (Disponivel ?drone)))
                   (at end   (Disponivel ?drone))
                   (at end (assign (Insumo ?drone ?missao) (Max_Insumo ?missao)))
            )
)

; A penalidade de voar é a distância e o tempo
(:durative-action Voa
    :parameters (?drone - Drone ?origem ?destino - Local)
    :duration   (= ?duration (/ (Distancia_Mapa ?origem ?destino) (Velocidade ?drone)) 
                ) 
; Se a bateria ficar em menos de 30% da capacidade total, o drone deve recarregar em uma das bases.
    :condition  (and (at start (> (Bateria ?drone) (* (Max_Bateria) 0.3)))               
                     (over all (> (Distancia_Mapa ?origem ?destino) 0.0))
                     (at start (Esta ?drone ?origem))
                )                                
    :effect     (and (at start (decrease (Bateria ?drone) (* (Distancia_Mapa ?origem ?destino) (Custo_Bateria_Por_Km))))
                     (at start (not (Esta ?drone ?origem)))
                     (at end (Esta ?drone ?destino))                     
                     (at end (increase (Distancia_Total) (Distancia_Mapa ?origem ?destino)))
                )
)

; A penalidade de executar uma missão é o tempo
; As missões devem ser executadas e tem distâncias fixas, logo o tempo de exeução é sempre o mesmo. Há decisão da melhor escolha?
(:durative-action Executar
    :parameters (?drone - Drone ?missao - Missao ?regiao - Regiao)
    :duration   (= ?duration (/ (Distancia_Missao ?missao ?regiao) (Velocidade ?drone)) 
                ) 
    :condition  (and (over all (Esta ?drone ?regiao))
                     (at start (Planejada ?missao ?regiao))
                     ; Não executar duas tarefas ao mesmo tempo
                     (at start (Disponivel ?drone))
                )                                
    :effect     (and (at start (decrease (Bateria ?drone) (* (Distancia_Missao ?missao ?regiao) (Custo_Bateria_Por_Km))))
                     (at start (decrease (Insumo ?drone ?missao) (* (Distancia_Missao ?missao ?regiao) (Custo_Insumo_Por_Km ?missao))))
                     (at start (not (Disponivel ?drone)))
                     (at start (not (Planejada ?missao ?regiao)))
                     (at end   (Disponivel ?drone))              
                     (at end (Concluida ?missao ?regiao))
                )
)

)