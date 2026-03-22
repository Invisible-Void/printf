
.section .text

.globl sys_write

sys_write:
    mov $1, %rax
    syscall
    ret

