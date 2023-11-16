
section .data
    msg db "Hello, Holberton", 10

section .text
    global _start

_start:
    mov rdi, msg
    call printf
    mov rax, 60
    xor edi, edi
    syscall
