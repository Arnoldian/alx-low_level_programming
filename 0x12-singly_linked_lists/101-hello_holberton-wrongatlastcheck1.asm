
section .data
    message db 'Hello, Holberton', 10

section .text
    global main
    extern printf

main:
    ; write message to stdout
    mov rax, 1
    mov rdi, 1
    mov rsi, message
    mov rdx, 16
    syscall

    ; exit program
    mov rax, 60
    xor rdi, rdi
    syscall
