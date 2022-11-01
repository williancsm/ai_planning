; *************************************************************
; Item: Domain.pddl
;
; Descrição:  Exercício 1. Arquivo domínio.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (domain D_Guindaste_Robotico)

(:requirements :typing)

(:types
    Guindaste Caminhao Prioridade - objects
    Container Ponto - Prioridade
)

(:predicates
    (Disponivel ?y - Prioridade)
    (Aguardando ?t - Caminhao  ?p - Ponto)
    (Carregado  ?t - Caminhao  ?c - Container)
    (Parado     ?g - Guindaste ?c - Container)
    (Movimento  ?g - Guindaste ?c - Container)
    (Base       ?p - Ponto)
    (Sucessor   ?y_1 ?y_2 - Prioridade)    
    (Antecessor ?y_1 ?y_2 - Prioridade)
)

; Carregar - O Guindaste carrega o caminhão quando disponível de Container.
(:action Carregar
    :parameters (?g - Guindaste ?t - Caminhao ?c_1 ?c_2 ?c_3 ?c_4 - Container ?p - Ponto)
    :precondition (and (Disponivel ?c_4)
                       (Sucessor   ?c_2 ?c_1)
                       (Antecessor ?c_3 ?c_4)
                       (Parado     ?g ?c_4)
                       (Aguardando ?t ?p)
                       (Base       ?p)
                       (Carregado  ?t ?c_1)
                  )
    :effect (and (not (Parado ?g ?c_4))
                 (Carregado  ?t ?c_2)
                 (not (Carregado  ?t ?c_1))
                 (not (Disponivel ?c_4))
                 (Movimento ?g ?c_4)
            )
)

; Retornar - Após entrega o Guindaste retorna ao próximo Container.
(:action Retornar
    :parameters (?g - Guindaste ?c_1 ?c_2 - Container)
    :precondition (and (Disponivel ?c_1)
                       (Antecessor ?c_1 ?c_2)
                       (Movimento ?g ?c_2)
                  )
    :effect (and (Parado ?g ?c_1)
                 (not (Movimento ?g ?c_2))
            )
)

; Abastecer - O Guindaste se abastece de Containers.
(:action Abastecer
    :parameters (?g - Guindaste ?c_1 ?c_2 - Container)
    :precondition (and (Parado   ?g   ?c_1)
                       (Sucessor ?c_2 ?c_1)
                  )
    :effect (and (not (Parado     ?g   ?c_1))
                      (Parado     ?g   ?c_2)
                      (Disponivel ?c_2     )
            )
)

; Andar - Os caminhões só andam em fila Ponto B -> Ponto A -> Ponto C.
; O Ponto A pode conter apenas um caminhão.
(:action Andar_Dentro_Base
    :parameters (?t - Caminhao ?p_1 ?p_2 - Ponto)
    :precondition (and (Aguardando  ?t    ?p_1)
                       (Sucessor    ?p_2  ?p_1)
                       (Base        ?p_2      )
                       (Disponivel  ?p_2      )
                  )
    :effect (and (not (Aguardando  ?t  ?p_1))
                      (Aguardando  ?t  ?p_2)
                 (not (Disponivel  ?p_2    ))
            )
)

(:action Andar_Fora_Base
    :parameters (?t - Caminhao ?p_1 ?p_2 - Ponto)
    :precondition (and (Aguardando  ?t    ?p_1)
                       (Sucessor    ?p_2  ?p_1)
                       (Disponivel  ?p_2      )
                  )
    :effect (and (not (Aguardando  ?t  ?p_1))
                      (Aguardando  ?t  ?p_2)
                      (Disponivel  ?p_1    )
            )
)

)