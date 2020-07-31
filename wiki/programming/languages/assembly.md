Assembly
========

most common arch in pc:X86
most common arch in embedded-systems: ARM, ATmega

- assmbler: convert assembly to machine code depend on your precosser arch and your OS

another great reason why learning assembly on an arm chip is a good idea is because the are in arm stands for reduced instruction set computing and that means that there is a limited number of instructions so I thought it would be great to work with a low cost computer like this and I thought this would be the cheapest and easiest way to dive into the world of assembler

assemblyfile extention: .s | .asm -> project.s | project.asm
---------------------------------------------------------------------------------------------------------------
> comments

- @ single comment
- /* multi line comment */
---------------------------------------------------------------------------------------------------------------
as file.s -o file.o
ld file.o -o file
./file & echo $
---------------------------------------------------------------------------------------------------------------
setting up stack frame


Architecture === Instruction Set Architecture(ISA)
==================================================
X86_32
X86_64
RISC-V
MIPS
AVR


Intel Syntax
============
AT&T Syntax
===========
register prefix: %
immediate prefix: $
source			destination



address offset




---------------------------------------------------------------------------------------------------------------

int test(int x) {
    return x;
}

X86 assembly
test(int):
    mov eax, edi
    ret


simple move instruction on the right hand side
on x86 arch at least the parameters coming into
the function
the first parameter goes into the EDI register but the return value was expected in the EAX register




int test(int x) {
    return x * 4677;
}

X86 assembly
test(int):
    imul eax, edi, 4677
    ret


int test(int x) {
    return x * 7;
}

X86 assembly
test(int):
    lea eax, [0+ rdi*8]
    sub eax, rdi
    ret
---------------------------------------------------------------------------------------------------------------




blast from the past
abacus
slide rule

pascaline
curta(1948)

half adder vacuum tube
eniac electronic numerical integrator and computer
transistor

punched card -> (arduino punched card reader)


Atanasoff-Berry computer in operation



ascii


drivers written in asm


https://godbolt.org/
http://quick-bench.com/

https://www.nand2tetris.org/



program
control flow in x86 assembly

- binary exploitation: is the process of taking compiled executable and making them do what you want them to do 


operation code = op code


every C
program has four main components:
- heep
    is an area in memory designed
    for the purpose of manual memory
    allocation the inner workings of the
    heap are incredibly complicated and
    learning every aspect of how the heap
    works would take a tutorial series of
    its own for now all you need to know is
    that memory is allocated on the heap
    whenever functions such as:
        - malloc
        - calloc are called as well as when:
        - global
        - static variables are declared

- stack
- registers
- instructions


# at this time there are two main architectures that dictate how our program is compiled and executed 32-bit and 64-bit



registers are essentially small storage areas in your processor they can be used to store memory addresses values or anything that can be represented with eight bytes or less in the x86 architecture there are 6 general-purpose registers:
- eax
- ebx
- ecx
- edx
- 
- esi
- edi

these registers are generally used on an as-needed basis there are also three registers reserved for specific purposes:
- ebp => base pointer -> address of base of stack
- esp => stack pointer -> address of top of stack
- eip



32 bit = 8 byte | 64 bit = 16 byte


# there are two syntaxes that assembly is normally written in AT&T; and Intel while the instructions themselves are the same regardless of the syntax the way the instructions are presented differ we will be covering the Intel syntax





# instruction format every instruction has 2 parts :=>  operation	[arg...]


- MOV       arg, arg
- ADD       arg, arg
- SUB       arg, arg
- MUL       arg, arg
- DIV       arg, arg
- MOD       arg, arg
- LEA       arg, arg


- POP       arg
- PUSH      arg



LEA stands for (Load Effective Address)
it places the address specified by its second operand into the register specified by its first operand this instruction is usually used for obtaining a pointer into a memory region

control flow graphs (CFG)



assembly language is
basically just a human readable form of
machine code













> assembler
as: portable GNU Assembler -> linux preinstalled software to create assembly but it's only for Unix-like OS

nasm: netwide assembler
masm: microsoft assembler
fasm 
> disassembler
ndisasm


"section .rodata" (read only data) instead of "section .data" because the message variable is a constant. ;)


Do you know that in vim you can use :set ft=nasm for better assembly highlighting.







Code -> compiler -> assembly
Assembly -> assembler -> object
Object -> linker -> executable
Executable -> loader -> memory


every character has assigned a number.
But there are numbers that don’t have a printable character assigned.



section .data
	text db "Hello, World!",10

section .text
	global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, 14
	syscall

	mov rax, 60
	mov rdi, 0
	syscall





You a trying to make a system call to the Linux kernel with this code. This will not work on Windows. The NT Kernel that Windows uses has different system calls.





it would be cool to it with GAS

=> Not really. The syntax would be 10x more cluttered with useless stuff, the order of operands would be backwards, etc.



I don't understand why 98% of assembly tutorials are "assembly used under an OS".
...totally ignoring the fact that THE FIRST ONE of the two unique upsides and points of assembly is that "IT DOESN'T NEED ANY OPERATING SYSTEM TO RUN UNDER".

=> Because the run time libraries differ for different operating systems. You can't use the run time libraries used by windows OS  on Linux or Unix like systems and vice versa. Also, the executable binaries although being same for X86-64, may be packaged differently( ELF linux vs PE on windows



That looks similar to the way it was done in MS-DOS a few decades ago...:

mov ah,9           ; DOS printstring subfunction
mov dx,offset hey  ; point to a '$'-terminated string
int 21h            ; trip the DOS interrupt
int 20h           ; Exit to DOS
hey db 'Hello from the distant past',13,10,'$'



bios development

instruction set your CPU uses

Glad to see you without a bloated OS , keep up this way and your productivity will boost 
I suggest polybar,sxhkd,bspwm and archstrike repository 
Also LukeSmith channel for arch wisdom 
And Kupala channel for low level wisdom


My eyes started to bleed cause of you white theme
=> if you really want to, you can download the videos and use VLC to invert the colors. Or if you want to make it permanent, open shot and tons of other video editors have that option


Some info on the $ interpretation by the assembler.   The $ is a multi use macro telling the assembler different things depending on the use.   The $ in front of a number indicates it is a hex number, and is especially useful in the example is $aa,  which is a tiny bit more concise than typing 0xaa, but more importantly tells the assembler that a hex number like "aa" is not a code label reference, but instead a literal value.   The $ is also heavily used as a pointer containing the current value of the instruction pointer.   That looks like how the assembler is interpreting your data definition, meaning $ being the current "address" of the data variable "message_len" minus the address your variable "message" refers to, which is simply pointer math, yielding the length of the string "message".




why use 32 bit assembly though...

Because the resulting binary works on 32- and 64-bit systems, while 64-bit code only works on 64-bit systems. And "Hello World" is not going to get a big performance boost from switching from 32- to 64-bit. As long as you don't need R-registers, there is just no reason to use them. Not sure, if you are aware of it, but there are still a ton of 32-bit systems out there. So limiting yourself to 64-bit systems without the need to do so is simply plain stupid.
Not to mention that the code itself is perfectly identical if you substitute the register names (e.g. eax with rax etc).




You can use AH and AL, not only EAX





 use gcc to compile it

ust calling gcc on the .asm file would of course be more convenient, but gcc uses per default as and thereafter ld and nasm uses (just like fasm or masm) a nasm specific syntax (especially iirc when it comes to preprocessing instructions and directives etc.) that is partially incompatible with that of as. So with more complex assembly programs you'll run into compatibility issues, because as != nasm



:set autoindent


PentersterAcademy



hello john  i have a question that how to extract data from zlib file you created a video of steagnography i follow the same i got good results 

but at last when i write command " file * "  then it shows the zlib compressed data please tell me sir how to extract that data.
And please make the video on challenges of hack the box my challenge is from stego and name is image processing





To learn assembly language correctly, you need to have a good understanding of the CPU you are coding for. You need to understand what registers are, how many, thier specific (or general purpose), size of each register, how memory is layed out and if any operating system is present and thier unique system calls, BEFORE you can write any meaningful code in assembler. Some CPUs have privileged instructions that ONLY an o/s or other "supervisory" program can perform. For example every CPU has the ability to "output" its data someplace, or control other devices, but the instructions to do that are considered "privileged" and not available to an avg programmer. Your code must be in privileged mode in order to run properly.
Once you have an understanding of all that, you need to understand your assembler and linker programs. These usually come supplied with your operating system. These programs take your source code and assemble your instructions into binary "object" code. The linker will further refine your code, combining not only your code, but libraries or other object code to create an executable binary module.
I have beem teaching assembler for many decades on various CPUs from mainframes to microcontrollers. I have written complete o/s to applications that run in tiny memory spaces.
You can do things in assembler that you cant even dream about in any other language. For example I wrote a complete accounting system (A/P, A/R, G/L, PAYROLL) in under 32k! (Including the operating system)
Some of my assembly code written on a mainframe from 1972 is STILL running to this day.
If you followed this guy and wrote the "hello world" program. Look at how small the executable is. Cant do that even in C




The uname does not tells you about the architecture of your CPU, it only shows you what kernel are you running. You may be running a 32bit kernel on a 64bit CPU. What I use to check that it's "cat /proc/cpuinfo" and "lshw".


cpuinfo is detailed info about cpu and uname -a and uname -m CAN give you the architecture you are running, however if you run a 32bit kernel on a 64bit CPU uname will tell you 32bits while cpuinfo will correctly inform you the width of the bus as 64bit. Try it.






o show what was generated by ld, you could use objdump -D and compare with your asm file




 x86/x64, ARM/ARM64, MIPS, Java/JVM

What about bare metal programming without any libraries (not even statically linked libraries) without:
- sys calls
- bios calls

so writing a own kernel



cutter for radare which is a free graphical frontend for it


set the environment variable for the web graph to false. I think that helps.
[0x100001174]> e graph.web=false


Now get debug info starting. Also in C _start is still the routine that gets called but you don't normally use that because you will use the crt and that uses _start todo then stuff like init all static.




'$' sign: stands for "the current location"
- and may be used anywhere in the code => e.g. "jmp $" to make a jump-to-self infinite loop (so this is actually an address)
Additionally, specifying a symbol name means taking its address [not value]; so now it easy to see that when writing "$-some_symbol" it simply means "take the current address and subtract some_symbol's address from it". When this is put right after the some_symbol, it would result in its size because the assembler [the program that converts Assembly code to binary] doesn't optimize anything and keep the symbols in the order you specified.


Some info on the $ interpretation by the assembler.   The $ is a multi use macro telling the assembler different things depending on the use.   The $ in front of a number indicates it is a hex number, and is especially useful in the example is $aa,  which is a tiny bit more concise than typing 0xaa, but more importantly tells the assembler that a hex number like "aa" is not a code label reference, but instead a literal value.   The $ is also heavily used as a pointer containing the current value of the instruction pointer.   That looks like how the assembler is interpreting your data definition, meaning $ being the current "address" of the data variable "message_len" minus the address your variable "message" refers to, which is simply pointer math, yielding the length of the string "message".






0xD is the command for "carriage return", which acts like a carriage return on a typewriter. It moves the cursor to the beginning of the line, but doesn't erase anything that was already written. This is required on windows (in conjunction with 0xA, which advances to the next line), but not required on linux. In linux, 0xA has an implicit carriage return along with the newline


control GPIOs with assembly


How to do profiling on your application? Can you explain usage of valgrind or any other profiling tool?

# $ strings /dev/random

Next level is to write your own loader, so that you can strip out all those meaningless ELF headers... ;)



ghidra 



































> Resources:

Text Book: Assembly Language for x86 Processors, 6th edition
Text Book: Assembly Language for x86 Processors, 8th edition



https://www.geeksforgeeks.org/c-asm-declaration/



* Playlists
- https://www.youtube.com/playlist?list=PLan2CeTAw3pFOq5qc9urw8w7R-kvAT8Yb


