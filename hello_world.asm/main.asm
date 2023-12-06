SYSCALL_PRINT equ 1
STDOUT equ 1
SYSCALL_EXIT equ 60
EXIT_CODE_OK equ 0


section .data
msg db "Hello World", 10
len db 12

section .text

global _start
_start:
; system call to print 'Hello World'
mov rax, SYSCALL_PRINT
mov rdi, STDOUT
mov rsi, msg
mov rdx, [len]
syscall

; system call to exit the program gracefully
mov rax, SYSCALL_EXIT
mov rdi, EXIT_CODE_OK
syscall

