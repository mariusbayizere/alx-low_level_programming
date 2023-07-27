section .data
    hello db 'Hello, Holberton', 0xA
    hello_len equ $ - hello

section .text
    global _start

_start:
    ; Write "Hello, Holberton" to stdout (file descriptor 1)
    mov rax, 1              ; syscall number for sys_write
    mov rdi, 1              ; file descriptor 1 (stdout)
    mov rsi, hello         ; pointer to the message
    mov rdx, hello_len     ; length of the message
    syscall

    ; Exit the program
    mov rax, 60             ; syscall number for sys_exit
    xor rdi, rdi            ; exit code 0
    syscall
