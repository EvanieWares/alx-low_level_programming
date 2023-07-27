extern printf

section .text
	global main

main:
	MOV rdi, msg ; set 1st argument (msg string)
	MOV rax, 0 ; printf()
	call printf

	MOV rax, 60 ; syscall for exit
	MOV rdi, 0 ; exit code 0
	SYSCALL

section .data
	msg: DB "Hello, Holberton", 10 ; string to print
