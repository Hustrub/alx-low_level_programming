global   main
	extern    printf
main:
	mov   edi, format
	xor   eax, eax
	call  printf
	mov   eax, 0
	ret
format: db `Hello, Holberton\n`,0



=====================================. 
If 11-hello failed to check
You can try the code below



global main
extern printf

	section .text
main:
	push rbp
	mov rdi, format
	mov rsi, message
	mov rax, 0
	call printf
	pop rbp
	mov rax, 0
	ret
message: db "Hello, Holberton", 0
format:	db "%s", 10, 0

