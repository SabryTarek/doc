Linux phlosphy
- every thing is a file
- small units and cpmpose them
Redirection
============
I/O redirection
input -> processing -> output OR -> error

default :-
- stdin: input : keyboard
- stdout: output : screen
- stderr: error : screen

/usr/share/backgrounds/


- file : file type
Q: how bash know the file type
A: there is a header at the begin of every file to define a file type

ls /var | tee output

xargs





- here document <<
- here string <<< : contain one line string only

- mkfifo pipe1
- ls -l > pipe1
- cat < pipe1
blocked pipe

wh command
===========
- who , whoami , who am i
- whatis
- whereis
- w
- last , lastlog





head -n 5
tail -f



__TTY vs PTS__


- you can use pipes and xargs. A pipe passes the output from one command into the input of another while xargs allows you to provide this input as argument

in .bashrc file:
alias xclip='xargs echo -n | xclip -selection clipboard'


less 