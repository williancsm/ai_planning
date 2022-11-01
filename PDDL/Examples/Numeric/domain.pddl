(define (domain droneV1)

(:requirements :typing :fluents)

(:types
    drone local item - objects
)

(:functions
    (demanda ?l - local ?i - item)
    (carrega ?d - drone ?i - item)
)

(:predicates
    (esta ?d - drone ?l - local)
)

(:action entrega
    :parameters (?d - drone ?l - local ?i - item)
    :precondition (and (esta ?d ?l)
                       (>= (carrega ?d ?i) 0)
                       (> (demanda ?l ?i) 0)
                  )
    :effect (and (decrease (carrega ?d ?i) 1)
                 (decrease (demanda ?l ?i) 1)
            )
)

(:action voa
    :parameters (?d - drone ?origem ?destino - local)
    :precondition (esta ?d ?origem)
    :effect (and (not(esta ?d ?origem))
                 (esta ?d ?destino))
)

(:action regarrega
    :parameters (?d - drone ?l - local ?i - item)
    :precondition (and (esta ?d ?l)
                       (= (demanda ?l ?i) -1)
                       (< (carrega ?d ?i) 0)
                  )
    :effect (and (increase (carrega ?d ?i) 1)
            )
)

)