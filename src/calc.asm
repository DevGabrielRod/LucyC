%include 'lib.inc'
section .text

global soma
soma:
    
    CMP EDX,    1
    JL ERREXIT
    JE .SOMA
    CMP EDX,    2
    JE .SUBT
    ;CMP EDX,    3
    ;JE .MULT
    ;CMP EDX,    4
    ;JE .DIVI
    CMP EDX,    4
    JG ERREXIT


.SOMA:
    MOV ECX,    EDI
    MOV EAX,    ESI
    ADD ECX,    EAX
    MOV EAX,    ECX
    RET

.SUBT:
    MOV ECX,    EDI
    MOV EAX,    ESI
    SUB ECX,    EAX
    MOV EAX,    ECX
    RET

ERREXIT:
    MOV EAX,    0
    RET

