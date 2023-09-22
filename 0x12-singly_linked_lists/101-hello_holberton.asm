section .data
    hello db "Hello, Holberton",10  ; The string to be printed, followed by a newline character (10)
    format db "%s",0               ; The format specifier for printf

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, hello                 ; Load the address of the string
    mov rsi, format                ; Load the address of the format string
    call printf                    ; Call printf
    add rsp, 8                     ; Clean up the stack

    mov rax, 60                    ; syscall: exit
    xor rdi, rdi                   ; status: 0
    syscall

