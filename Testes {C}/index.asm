section .data
    msg1 db 'Digite o primeiro numero: ',0
    msg2 db 'Digite o segundo numero: ',0
    msg3 db 'A soma dos numeros eh: ',0

section .bss
    num1 resd 1
    num2 resd 1

section .text
    global _start

_start:
    ; imprimir msg1
    mov eax, 4
    mov ebx, 1
    mov ecx, msg1
    mov edx, 31
    int 80h

    ; ler num1
    mov eax, 3
    mov ebx, 0
    mov ecx, num1
    mov edx, 4
    int 80h

    ; imprimir msg2
    mov eax, 4
    mov ebx, 1
    mov ecx, msg2
    mov edx, 28
    int 80h

    ; ler num2
    mov eax, 3
    mov ebx, 0
    mov ecx, num2
    mov edx, 4
    int 80h

    ; somar
    mov eax, [num1]
    add eax, [num2]

    ; imprimir msg3
    mov eax, 4
    mov ebx, 1
    mov ecx, msg3
    mov edx, 24
    int 80h

    ; imprimir resultado
    mov eax, 1
    mov ebx, 1
    mov ecx, eax
    mov edx, 1
    int 80h

    ; encerrar programa
    mov eax, 1
    xor ebx, ebx
    int 80h
