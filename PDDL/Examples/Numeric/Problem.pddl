(define (problem problemDroneV1)
 (:domain droneV1)
 
 (:objects 
    quad - drone
    casaA casaB casaC base - local
    i1 i2 - item
 )
 
 (:init 
    (= (carrega quad i1) 5)
    (= (carrega quad i2) 5)
    (esta quad base)
    (= (demanda casaA i1) 15)
    (= (demanda casaA i2) 10)
    (= (demanda casaB i1) 0)
    (= (demanda casaB i2) 3)
    (= (demanda casaC i1) 4)
    (= (demanda casaC i2) 5)
    (= (demanda base i1) -1)
    (= (demanda base i2) -1)

 )

 
 (:goal (and (= (demanda casaA i1) 0)
             (= (demanda casaA i2) 0)
             (= (demanda casaB i1) 0)
             (= (demanda casaB i2) 0)
             (= (demanda casaC i1) 0)
             (= (demanda casaC i2) 0)
             (esta quad base)
        )
 )
)