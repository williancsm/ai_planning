; *************************************************************
; Item: domain.pddl
;
; Descrição:  Tarefa 2. Exercício 1. Arquivo domínio 1.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (domain D_Missoes_Drone_1)

(:requirements :typing :fluents :action-costs :durative-actions)

(:types
    Local Drone - objects
    Regiao Base - Local
)

(:functions
    (Bateria ?drone - Drone)
    (Velocidade ?drone - Drone)
    (Max_Bateria)
    (Distancia   ?local_1 ?local_2 - Local)
    (Custo_Por_Km)
)

(:predicates
    (Esta       ?drone - Drone  ?local - Local)
    (Fotos      ?regiao - Regiao)
    (Inseticida ?regiao - Regiao)
)

(:action Tirar_Fotos
    :parameters (?drone - Drone ?regiao - Regiao)
    :precondition (and (Esta   ?drone ?regiao)
                  )
    :effect (and (Fotos ?regiao)
            )
)

(:action Aspergir_Inseticida
    :parameters (?drone - Drone ?regiao - Regiao)
    :precondition (and (Esta ?drone ?regiao)
                  )
    :effect (and (Inseticida ?regiao)
            )
)

(:action Recarregar_Bateria
    :parameters (?drone - Drone ?base - Base)
    :precondition (and (Esta   ?drone ?base)
                  )
    :effect (and (assign (Bateria ?drone) (Max_Bateria))
            )
)

(:durative-action Voa
    :parameters (?drone - Drone ?origem ?destino - Local)
    :duration   (= ?duration (/ (Distancia ?origem ?destino) (Velocidade ?drone)) 
                ) 
    :condition  (and (over all (> (Bateria ?drone) 0.0))
                     (over all (> (Distancia ?origem ?destino) 0.0))
                     (over all (Esta ?drone ?origem))
                )                                
    :effect     (and (at start (decrease (Bateria ?drone) (* (Distancia ?origem ?destino) (Custo_Por_Km))))
                     (at end (Esta ?drone ?destino))
                     (at end (not (Esta ?drone ?origem)))
                )
)   

)