; *************************************************************
; Item: domain.pddl
;
; Descrição:  Tarefa 2. Exercício 2. Arquivo domínio.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (domain D_Missoes_Drone_2)

(:requirements :typing :fluents :action-costs :durative-actions)

(:types
    Drone Missao Local - objects
    Regiao Base - Local
)

(:functions
    (Max_Bateria)
    (Max_Insumo ?missao - Missao)

    (Bateria    ?drone - Drone)
    (Insumo    ?drone - Drone ?missao - Missao)
    (Velocidade ?drone - Drone)
    
    (Distancia_Mapa    ?local_1 ?local_2 - Local)
    (Distancia_Missao   ?missao - Missao ?regiao - Regiao)     
    
    (Custo_Bateria_Por_Km)
    (Custo_Insumo_Por_Km ?missao - Missao)
)

(:predicates
    (Esta       ?drone - Drone  ?local - Local)
    (Planejada  ?missao - Missao ?regiao - Regiao)
    (Concluida  ?missao - Missao ?regiao - Regiao)
)

(:action Recarregar_Bateria
    :parameters (?drone - Drone ?base - Base)
    :precondition (and (Esta   ?drone ?base)
                  )
    :effect (and (assign (Bateria ?drone) (Max_Bateria))
            )
)

(:action Recarregar_Insumo
    :parameters (?drone - Drone ?missao - Missao ?base - Base)
    :precondition (and (Esta   ?drone ?base)
                  )
    :effect (and (assign (Insumo ?drone ?missao) (Max_Insumo ?missao))
            )
)

(:durative-action Voa
    :parameters (?drone - Drone ?origem ?destino - Local)
    :duration   (= ?duration (/ (Distancia_Mapa ?origem ?destino) (Velocidade ?drone)) 
                ) 
    :condition  (and (over all (> (Bateria ?drone) 0.0))
                     (over all (> (Distancia_Mapa ?origem ?destino) 0.0))
                     (over all (Esta ?drone ?origem))
                )                                
    :effect     (and (at start (decrease (Bateria ?drone) (* (Distancia_Mapa ?origem ?destino) (Custo_Bateria_Por_Km))))
                     (at end (Esta ?drone ?destino))
                     (at end (not (Esta ?drone ?origem)))
                )
)

(:durative-action Executar
    :parameters (?drone - Drone ?missao - Missao ?regiao - Regiao)
    :duration   (= ?duration (/ (Distancia_Missao ?missao ?regiao) (Velocidade ?drone)) 
                ) 
    :condition  (and (over all (> (Bateria ?drone) 0.0))                     
                     (over all (> (Insumo ?drone ?missao) 0.0))
                     (over all (Esta ?drone ?regiao))
                     (over all (Planejada ?missao ?regiao))
                )                                
    :effect     (and (at start (decrease (Bateria ?drone) (* (Distancia_Missao ?missao ?regiao) (Custo_Bateria_Por_Km))))
                     (at start (decrease (Insumo ?drone ?missao) (* (Distancia_Missao ?missao ?regiao) (Custo_Insumo_Por_Km ?missao))))
                     (at end (not (Planejada ?missao ?regiao)))
                     (at end (Concluida ?missao ?regiao))
                )
)   

)