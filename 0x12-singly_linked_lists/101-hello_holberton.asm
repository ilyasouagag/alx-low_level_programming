section .data
    hello_msg db "Hello, Holberton", 0
    format db "Hello, Holberton", 0

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    call printf

    xor rax, rax  ; Clear RAX register
    pop rbp
    ret