/* File: 101-hello_holberton.asm
   This program prints "Hello, Holberton" with new line */

/* .text section */
.section .rodata
.LC0:
	.string "Hello, Holberton"  /* Define the string to be printed */

/* main function */
.globl main
.type main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq %rsp, %rbp
	.cfi_def_cfa_register 6
	leaq .LC0(%rip), %rdi  /* Load the address of the string into rdi */
	call puts@PLT  /* Call the puts function to print the string */
	movl $0, %eax  /* Set the return value to 0 */
	popq %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size main, .-main
	.ident "GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section .note.GNU-stack,"",@progbits
	.section .note.gnu.property,"a"
	.align 8
	.long 1f - 0f
	.long 4f - 1f
	.long 5
0:
	.string "GNU"
1:
	.align 8
	.long 0xc0000002
	.long 3f - 2f
2:
	.long 0x3
3:
	.align 8
4

