; *************************************************************
; Item: Problem_1.pddl
;
; Descrição:  Exercício 1. Arquivo problema 1.
; 
; Nome: Willian Carlos
;
; *************************************************************

(define (problem P_Guindaste_Robotico_1)
 (:domain D_Guindaste_Robotico)
 
 (:objects 
    Guindaste_1 - Guindaste
    Ponto_A Ponto_C Ponto_B - Ponto
    Container_0 Container_1 Container_2 Container_3 - Container
    Caminhao_1 Caminhao_2 - Caminhao
 )
 
 (:init
    (Base       Ponto_A                )
    (Disponivel Container_0            )
    (Disponivel Container_1            )
    (Disponivel Container_2            )
    (Disponivel Container_3            )
    (Disponivel Ponto_A                )
    (Disponivel Ponto_B                )
    (Disponivel Ponto_C                )
    (Sucessor   Container_1 Container_0)
    (Sucessor   Container_2 Container_1)
    (Sucessor   Container_3 Container_2)
    (Antecessor Container_2 Container_3)
    (Antecessor Container_1 Container_2)
    (Antecessor Container_0 Container_1)
    (Sucessor   Ponto_A     Ponto_B    )
    (Sucessor   Ponto_C     Ponto_A    )
    (Aguardando Caminhao_1  Ponto_B    )
    (Aguardando Caminhao_2  Ponto_B    )
    (Carregado  Caminhao_1  Container_0)
    (Carregado  Caminhao_2  Container_0)
    (Parado     Guindaste_1 Container_3)
 )
 
 (:goal (and (Carregado  Caminhao_1  Container_3)
             (Carregado  Caminhao_2  Container_3)
             (Parado     Guindaste_1 Container_0)      
        )
 )
)