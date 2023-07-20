segment .data
    LF          EQU 0XA
    NULL        EQU 0X0
    EXIT_SUCESS EQU 0X0

    ;RDI
    STD_IN      EQU 0X0
    STD_OUT     EQU 0X1
    STDERR      EQU 0X2

    ;RAX
    SYS_READ    EQU 0X0
    SYS_WRITE   EQU 0X1
    SYS_EXIT    EQU 0X3C

segment .text

_END:
    MOV EAX,    SYS_EXIT
    MOV RDI,    EXIT_SUCESS
    syscall

MST_SAIDA:
    CALL TAMSTR
    MOV EAX,        SYS_WRITE
    MOV RDI,        STD_OUT
    syscall
    RET

TAMSTR:
    MOV EDX,        ESI
PROXCHAR:
    CMP BYTE[ESI],  NULL
    JZ TERMINEI
    INC ESI
    JMP PROXCHAR
TERMINEI:
    SUB EDX,    ESI
    RET