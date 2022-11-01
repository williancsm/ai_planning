(define (domain droneV1)

(:requirements :typing )

(:types
    drone local item - objects
    asafixa - drone
)

(:predicates
    (carrega ?d - drone ?qtd - item)
    (demanda_item1 ?c - local ?dem - item)
    (demanda_item2 ?c - local ?dem - item)
    (esta ?d - drone ?l - local)
    (mais_um ?qtd1 ?qtd2 - item)
)

(:action entrega_item1
    :parameters (?d - drone ?l - local ?x ?x-1 ?y-1 ?y - item)
    :precondition (and (esta ?d ?l)
                       (carrega ?d ?x)
                       (demanda_item1 ?l ?y)
                       (mais_um ?x-1 ?x)
                       (mais_um ?y-1 ?y)
                       )
    :effect (and (not(carrega ?d ?x))
                  (carrega ?d ?x-1)
                  (not(demanda_item1 ?l ?y))
                  (demanda_item1 ?l ?y-1))
)

(:action entrega_item2
    :parameters (?d - drone ?l - local ?x ?x-1 ?y-1 ?y - item)
    :precondition (and (esta ?d ?l)
                       (carrega ?d ?x)
                       (demanda_item2 ?l ?y)
                       (mais_um ?x-1 ?x)
                       (mais_um ?y-1 ?y)
                       )
    :effect (and (not(carrega ?d ?x))
                  (carrega ?d ?x-1)
                  (not(demanda_item2 ?l ?y))
                  (demanda_item2 ?l ?y-1))
)

(:action voa
    :parameters (?d - drone ?origem ?destino - local)
    :precondition (esta ?d ?origem)
    :effect (and (not(esta ?d ?origem))
                 (esta ?d ?destino))
)

)