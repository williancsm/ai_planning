(define (problem problemDroneV1)
 (:domain droneV1)
 
 (:objects 
    quad - drone
    xwing - asafixa
    casaA casaB casaC base - local
    n0 n1 n2 n3 n4 n5 n6 n7 n8 n9 n10
    n11 n12 n13 n14 n15 n16 n17 n18 n19 n20 - item
 )
 
 (:init 
    (carrega quad n20) (carrega xwing n20)
    (esta quad base) (esta xwing base)
    (demanda_item1 casaA n15) (demanda_item2 casaA n10)
    (demanda_item1 casaB n0) (demanda_item2 casaB n3)
    (demanda_item1 casaC n4) (demanda_item2 casaB n5)
    (mais_um n0 n1) (mais_um n1 n2)(mais_um n2 n3)(mais_um n3 n4)(mais_um n4 n5)
    (mais_um n5 n6) (mais_um n6 n7)(mais_um n7 n8)(mais_um n8 n9)(mais_um n9 n10)
    (mais_um n10 n11) (mais_um n11 n12)(mais_um n12 n13)(mais_um n13 n14)(mais_um n14 n15)
    (mais_um n15 n16) (mais_um n16 n17)(mais_um n17 n18)(mais_um n18 n19)(mais_um n19 n20)
 )
 
 (:goal (and (demanda_item1 casaA n0) (demanda_item2 casaA n0)
        (demanda_item1 casaB n0) (demanda_item2 casaB n0)
        (demanda_item1 casaC n0) (demanda_item2 casaB n0)
        (esta quad base) (esta xwing base)
        )
 )
)