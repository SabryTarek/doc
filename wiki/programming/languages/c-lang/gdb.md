GDB (GNU Debugger )
=======================
Create a file "~/.gdbinit" with the text "set disassembly-flavor intel" to avoid typing the command to switch syntax everytime
disassemble <function_name> -> EX: disassemble main
si
ni

info registers








if we want gdb to be able to tell us what each line of code is doing we have to include the symbol table when we compile the program => g++ -g 