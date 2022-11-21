; *************************************************************
; Item: domain.pddl
;
; Descrição:  Tarefa 2. Exercício 1. Arquivo domínio.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (domain D_Missoes_Drone)

(:requirements :typing :fluents)

(:types
    Local Drone - objects
    Regiao Base - Local
)

(:functions
    (Unidade_Bateria ?d - Drone)
    (Min_Bateria)
    (Max_Bateria)
    (Distancia   ?l_1 ?l_2 - Local)
    (Unidade_Por_Km)
    (Distancia_Percorrida)
)

(:predicates
    (Esta       ?d - Drone      ?l             - Local)
    (Tarefa     ?r             - Regiao)
)

(:action Move
    :parameters (?d - Drone ?l_1 ?l_2 - Local)
    :precondition (and (> (Distancia ?l_1 ?l_2) 0.0)
                       (Esta   ?d   ?l_1)
                       (>  (- (Unidade_Bateria ?d) (* (Distancia ?l_1 ?l_2) (Unidade_Por_Km))) 0.0)
                  )
    :effect (and (Esta ?d ?l_2)
                 (not (Esta ?d ?l_1))
                 (decrease (Unidade_Bateria ?d) (* (Distancia ?l_1 ?l_2) (Unidade_Por_Km)))
                 (increase (Distancia_Percorrida) (Distancia ?l_1 ?l_2))
            )
)

(:action Executar_Tarefa
    :parameters (?d - Drone ?r - Regiao)
    :precondition (and (Esta   ?d ?r)
                  )
    :effect (and (Tarefa ?r)
            )
)

(:action Recarregar
    :parameters (?d - Drone ?b - Base)
    :precondition (and (Esta   ?d ?b)
                  )
    :effect (and (assign (Unidade_Bateria ?d) (Max_Bateria))
            )
)

)