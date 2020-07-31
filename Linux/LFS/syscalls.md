

- syscalls is a communication between kernel space(kernel mode) and user space(user mode) through the kernel interface(ABI: application binary interface)
- syscalls different from OS to other
- system calls are the primary way that programs interface with the operating system.
- basic understanding of system calls is a requirement for any serious Linux user.
- syscall interface includes a number of functions that the operating system exports to the applications running on top of it.
- These functions allow actions like opening files, creating network connections, reading and writing from files, and so on. In practice, most of the things that happen on any machine involve going through a system call. As a consequence, observing system calls can offer great insight into what a program is doing, and can be invaluable for troubleshooting, monitoring, and bottleneck identification.



> How system calls work in Linux:
    - Wikipedia definition for system call: In computing, a system call is how a program requests a service from an operating system’s kernel.
    - This may include hardware related services (e.g. accessing the hard disk), creating and executing new processes, and communicating with integral kernel services (like scheduling). System calls provide an essential interface between a process and the operating system. *

System calls look like function calls to programs using them, but in practice they are a bit more complicated than a function call, because they require a transaction from user mode to kernel mode.





objdump -d <binary_file> -> disassemble
objdump -s -j <section_name> <binary_file> -> disassemble specific section

ABI(Application Binary Interface)




syscall instruction



linux
x32
older kernel -> int 0x10
new kernel ->sysenter

x64
syscall




#include <stdio.h> -> <unistd.h> [wri] -> <sys/syscall.h> [syscall(SYS_<>, <Params>)]


core components of the Linux operating system:
- glibc



kernel space(kernel mode) and
- Linux kernel
- Device Drivers

user space(user mode)
- web browser


kernel interface

> old linux kernel version vs new one
- x86: int 0x10 => sysenter
- x86_64: int 0x10 => syscall







#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main() {
    int fd;
    char buffer[80];
    char msg[50] = "hello ifocus institute";

    fd = open ("check.txt", O_RDWR);
    printf("fd %d", fd);

    if (fd != -1) {
        printf("\n check.txt opened with read write access\n");
        write(fd, msg , sizeof(msg));
        lseek(fd, 0,SEEK_SET);
        read(fd, buffer, sizeof(msg));
        printf("\n %s was written to my file\n", buffer);
        close (fd);
    }
    return 0;
 } 





#include<stdio.h>
#include<unistd.h> 
int main() {
    pid t ret_value;
    printf("\nThe process id is gol\n", getpid());   
    ret value = if (ret valuer;) has failed 
    printf("\nFork Failure\n"); 
else if (ret_value == ) 
{ 
printf('\nChild Process\n");
printf("The process id is %d\n", getpid());
sleep( 0); 
} else 
//nlrent process wait(); printf("Parent Process\n"); printf("The process id is %d\n", getpid()); sleep( u); 
} 
return 0;
}










wget = curl -o
tar
make defconfig
make





file hello
ldd hello
objdump -d hello
objdump -s -j hello


push        %rbp
mov         %rsp %rbp

to preserve these registers and refer to local variables this is not necessary because we don't have local variables in the main function

























--------------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main(void)
{
    printf("Hello, World\nfrom printf function\n");

    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------
#include <unistd.h>

int main(void)
{
    write(1, "Hello, World!\nfrom write function\n", 34);

    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------
#include <unistd.h>
#include <sys/syscall.h>

int main(void)
{
    syscall(SYS_write, 1, "Hello, World\nfrom syscall function\n", 35);

    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------------

# ----------------------------------------------------------------------------------------
# helloworld.s. Hello world in assembly!
# ----------------------------------------------------------------------------------------

     .global _start

    .text
_start:
# write(1, message, 13)
    mov     $1, %rax                # system call ID. 1 is write
    mov     $1, %rdi                # file handle 1 is stdout
    mov     $message, %rsi          # address of string to output
    mov     $14, %rdx               # string length
    syscall                         # system call invocation!

# exit(0)
    mov     $60, %rax               # system call ID. 60 is exit
    xor     %rdi, %rdi              # we want return code 0
    syscall                         # system call invocation!
message:
    .ascii  "Hello, world!\n"


















system softwate development