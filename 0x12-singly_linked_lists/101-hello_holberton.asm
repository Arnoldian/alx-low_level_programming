
section .data
    msg db "Hello, Holberton", 10 ; Define message and include new line char

section .text
    global _start ; Start point of program

_start:
    mov rdi, msg ; Load addr of message into rdi
    call printf ; Call the printf func
    mov rax, 60
    xor edi, edi
    syscall ; Invoke the exit system call
