[GNU Compiler Collection](https://gcc.gnu.org/)
===============================================

- GCC (upper case) refers to the GNU Compiler Collection. This is an open source compiler suite which include compilers for C, C++, Objective C, Fortran, Ada, Go and Java.
- gcc (lower case) is the C compiler in the GNU Compiler Collection.
# Historically GCC and gcc have been used interchangeably, but efforts are being made to separate the two terms as GCC contains tools to compile more than C.



gcc(GNU C Compiler)
===================
gcc hello_world.c (minmal command) # output: a.out

options:
-o <output_file_name>
-Wall -> emitting warning
-g -> include debugging information


gcc can optimize the output so that the final executable produces the same result but has faster performance and may result in a smaller sized executable.
 The '-O' option enables optimization. 
 There are several recognized qualifiers to add after the O to specify the level of optimization.
  Each optimization level adds or removes a set list of command line options. '-O2', '-Os', '-O0' and '-Og' are the most common optimization levels.

-O2 is the most common optimization level for production-ready code. It provides an excellent balance between performance increase and final executable size.

-O0  disable all compiler optimizations -> GCC took all the pain to convert my code into assembly language verbatim.
-O3  the highest level of optimizations -> GCC understood that I was just doodling and doing nothing important with the variables and the loop. So it left me a blank stub with no code.


-v -> gcc Version


gcc Enable nearly all warnings
C -> gcc -Wall -Wextra -o main main.c
C++ -> g++ -Wall -Wextra -Wconversion -Woverloaded-virtual -o main main.cpp