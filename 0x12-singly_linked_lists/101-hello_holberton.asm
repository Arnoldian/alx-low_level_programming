
section .data
	message db 'Hello, Holberton', 10

section .text
	global main
	extern printf

main:
	; write message to stdout
	mov eax, 4
	mov ebx, 1
	mov ecx, message
	mov edx, 16

	; exit program
	mov eax, 1
	xor ebx, ebx
