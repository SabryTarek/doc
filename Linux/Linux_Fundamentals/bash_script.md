---
modified: 2020-06-27T23:57:37+02:00
---

Bash Script
============

Bash is a Unix shell and command language written by Brian Fox for the GNU Project as a free software replacement for the Bourne shell. Released in 1989, it has been distributed widely as the shell for the GNU operating system and as a default shell on Linux and OS X

- man test


* shell: /etc/shell
  - sh -> for unix
  - bash -> for linux
  - fish
  - zsh + oh my zsh (framework or package manager for it)
  - dash
  - csh
  - ksh

----------------------------------------------------------------------------------------------------------
* variable types:
  - local
  - environment

----------------------------------------------------------------------------------------------------------

shell types :-
- inreactive -> read from keyboard : bash; ls -la
	- login
	- non-login
- non-interactive -> read from file : bash script.sh


----------------------------------------------------------------------------------------------------------

login shell configrations files :-

 1- /etc/profile

2- ~/.bash_profile
3- ~/.bash_login
4- ~/.profile




non-login shell configrations files :-

1- /etc/bash.bashrc
2- ~/.bashrc
----------------------------------------------------------------------------------------------------------
source ~/.bashrc
----------------------------------------------------------------------------------------------------------

!#/bin/bash

- echo "Hello, World! ^_^";
- # comment
- <<ANYWORD

for i in A B C D; do
  echo $i;
done

ANYWORD
- bash -x script.sh
- bash -n script.sh

!#/bin/bash -x

- set -x

environment:
- aliases
- shell functions

- set +x


BASH_VERSION
عرض اصدارة BASH
echo $BASH_VERSION
HOSTNAME
عرض اسم الكمبيوتر
echo $HOSTNAME
CDPATH
يبحث عن مسار الامر cd
echo $CDPATH
HISTFILE
اسم ملف التأريخ الخاص المخزنه به الاوامر المنفذة مؤخرا
echo $HISTFILE
HISTFILESIZE
العدد الاقصى للاسطر المسجلة في ملف التأريخ
echo $HISTFILESIZE
HOME
مجلد المنزل للمستخدم الحالي
echo $HOME
PATH
للبحث عن مسارات الاوامر
echo $PATH
TERM
نوع دخولك للطرفية
echo $TERM
SHELL
مسار الشل
echo $SHELL
DISPLAY
عرض وضبط اسم الشاشة X
echo $DISPLAY
EDITOR
المحرر الافتراضي وتعديلة
export EDITOR=/usr/bin/nano
echo $EDITOR

varibles :-
	- small or capital
	-$
	- ${}
	- sleep #second






variable == const
local 
cat <<- _EOF_



	_EOF_







#!/bin/bash
#####################################################
# Name: Bash CheatSheet for Mac OSX
# 
# A little overlook of the Bash basics
#
# Usage:
#
# Author: J. Le Coupanec
# Date: 2014/11/04
#####################################################

A
B
C
D
E
F
G
  H
  I
J
K
L
M
N
O 
P
  Q 
R
S
T
U
V 
W
X 
Y
Z
# 0. Shortcuts.


CTRL+A  # move to beginning of line
CTRL+B  # moves backward one character
CTRL+C  # halts the current command
CTRL+D  # deletes one character backward or logs out of current session, similar to exit
CTRL+E  # moves to end of line
CTRL+F  # moves forward one character
CTRL+G  # aborts the current editing command and ring the terminal bell
CTRL+J  # same as RETURN
CTRL+K  # deletes (kill) forward to end of line
CTRL+L  # clears screen and redisplay the line ->clear
CTRL+M  # same as RETURN
CTRL+N  # next line in command history
CTRL+O  # same as RETURN, then displays next line in history file
CTRL+P  # previous line in command history
CTRL+R  # searches backward
CTRL+S  # searches forward
CTRL+T  # transposes two characters
CTRL+U  # kills backward from point to the beginning of line
CTRL+V  # makes the next character typed verbatim
CTRL+W  # kills the word behind the cursor
CTRL+X  # lists the possible filename completefions of the current word
CTRL+Y  # retrieves (yank) last item killed
CTRL+Z  # stops the current command, resume with fg in the foreground or bg in the background

DELETE  # deletes one character backward
!!      # repeats the last command
exit    # logs out of current session


# 1. Bash Basics.


export              # displays all environment variables

echo $SHELL         # displays the shell you're using
echo $BASH_VERSION  # displays bash version

bash                # if you want to use bash (type exit to go back to your normal shell)
whereis bash        # finds out where bash is on your system

clear               # clears content on window (hide displayed lines)


# 1.1. File Commands.


ls                            # lists your files
ls -l                         # lists your files in 'long format', which contains the exact size of the file, who owns the file and who has the right to look at it, and when it was last modified
ls -a                         # lists all files, including hidden files
ln -s <filename> <link>       # creates symbolic link to file
touch <filename>              # creates or updates your file
cat > <filename>              # places standard input into file
more <filename>               # shows the first part of a file (move with space and type q to quit)
head <filename>               # outputs the first 10 lines of file
tail <filename>               # outputs the last 10 lines of file (useful with -f option)
emacs <filename>              # lets you create and edit a file
mv <filename1> <filename2>    # moves a file
cp <filename1> <filename2>    # copies a file
rm <filename>                 # removes a file
diff <filename1> <filename2>  # compares files, and shows where they differ
wc <filename>                 # tells you how many lines, words and characters there are in a file
chmod -options <filename>     # lets you change the read, write, and execute permissions on your files
gzip <filename>               # compresses files
gunzip <filename>             # uncompresses files compressed by gzip
gzcat <filename>              # lets you look at gzipped file without actually having to gunzip it
lpr <filename>                # print the file
lpq                           # check out the printer queue
lprm <jobnumber>              # remove something from the printer queue
genscript                     # converts plain text files into postscript for printing and gives you some options for formatting
dvips <filename>              # print .dvi files (i.e. files produced by LaTeX)
grep <pattern> <filenames>    # looks for the string in the files
grep -r <pattern> <dir>       # search recursively for pattern in directory


# 1.2. Directory Commands.


mkdir <dirname>  # makes a new directory
cd               # changes to home
cd <dirname>     # changes directory
pwd              # tells you where you currently are


# 1.3. SSH, System Info & Network Commands.


ssh user@host            # connects to host as user
ssh -p <port> user@host  # connects to host on specified port as user
ssh-copy-id user@host    # adds your ssh key to host for user to enable a keyed or passwordless login

whoami                   # returns your username
**passwd**                   # lets you change your password
quota -v                 # shows what your disk quota is
date                     # shows the current date and time
cal                      # shows the month's calendar
uptime                   # shows current uptime
w                        # displays whois online
finger <user>            # displays information about user
uname -a                 # shows kernel information
man <command>            # shows the manual for specified command
df                       # shows disk usage
du <filename>            # shows the disk usage of the files and directories in filename (du -s give only a total)
last <yourUsername>      # lists your last logins
ps -u yourusername       # lists your processes
kill <PID>               # kills (ends) the processes with the ID you gave
killall <processname>    # kill all processes with the name
top                      # displays your currently active processes
bg                       # lists stopped or background jobs ; resume a stopped job in the background
fg                       # brings the most recent job in the foreground
fg <job>                 # brings job to the foreground

ping <host>              # pings host and outputs results
whois <domain>           # gets whois information for domain
dig <domain>             # gets DNS information for domain
dig -x <host>            # reverses lookup host
wget <file>              # downloads file


# 2. Basic Shell Programming.


# 2.1. Variables.


varname=value                # defines a variable
varname=value command        # defines a variable to be in the environment of a particular subprocess
echo $varname                # checks a variable's value
echo $$                      # prints process ID of the current shell
echo $!                      # prints process ID of the most recently invoked background job
echo $?                      # displays the exit status of the last command
export VARNAME=value         # defines an environment variable (will be available in subprocesses)

array[0] = val               # several ways to define an array
array[1] = val
array[2] = val
array=([2]=val [0]=val [1]=val)
array(val val val)

${array[i]}                  # displays array's value for this index. If no index is supplied, array element 0 is assumed
${#array[i]}                 # to find out the length of any element in the array
${#array[@]}                 # to find out how many values there are in the array

declare -a                   # the variables are treaded as arrays
declare -f                   # uses funtion names only
declare -F                   # displays function names without definitions
declare -i                   # the variables are treaded as integers
declare -r                   # makes the variables read-only
declare -x                   # marks the variables for export via the environment

${varname:-word}             # if varname exists and isn't null, return its value; otherwise return word
${varname:=word}             # if varname exists and isn't null, return its value; otherwise set it word and then return its value
${varname:?message}          # if varname exists and isn't null, return its value; otherwise print varname, followed by message and abort the current command or script
${varname:+word}             # if varname exists and isn't null, return word; otherwise return null
${varname:offset:length}     # performs substring expansion. It returns the substring of $varname starting at offset and up to length characters

${variable#pattern}          # if the pattern matches the beginning of the variable's value, delete the shortest part that matches and return the rest
${variable##pattern}         # if the pattern matches the beginning of the variable's value, delete the longest part that matches and return the rest
${variable%pattern}          # if the pattern matches the end of the variable's value, delete the shortest part that matches and return the rest
${variable%%pattern}         # if the pattern matches the end of the variable's value, delete the longest part that matches and return the rest
${variable/pattern/string}   # the longest match to pattern in variable is replaced by string. Only the first match is replaced
${variable//pattern/string}  # the longest match to pattern in variable is replaced by string. All matches are replaced

${#varname}                  # returns the length of the value of the variable as a character string

*(patternlist)               # matches zero or more occurences of the given patterns
+(patternlist)               # matches one or more occurences of the given patterns
?(patternlist)               # matches zero or one occurence of the given patterns
@(patternlist)               # matches exactly one of the given patterns
!(patternlist)               # matches anything except one of the given patterns

$(UNIX command)              # command substitution: runs the command and returns standard output


# 2.2. Functions.
# The function refers to passed arguments by position (as if they were positional parameters), that is, $1, $2, and so forth.
# $@ is equal to "$1" "$2"... "$N", where N is the number of positional parameters. $# holds the number of positional parameters.

functions and variables live in separate namespaces so if we have a variable named foo we can also have a function named foo and there's no interference there


functname() {
  shell commands
}

unset -f functname  # deletes a function definition
declare -f          # displays all defined functions in your login session


export PS1='\e[1m\e[31m[\h] \e[32m($(docker-prompt)) \e[34m\u@$(hostname -i)\e[35m \w\e[0m\n$ '
alias vi='vim'
export PATH=$PATH:/root/go/bin
export DOCKER_HOST=""
cat /etc/motd
echo $BASHPID > /var/run/cwd

# 2.3. Flow Control.


statement1 && statement2  # and operator
statement1 || statement2  # or operator

-a                        # and operator inside a test conditional expression
-o                        # or operator inside a test conditional expression

str1=str2                 # str1 matches str2
str1!=str2                # str1 does not match str2
str1<str2                 # str1 is less than str2
str1>str2                 # str1 is greater than str2
-n str1                   # str1 is not null (has length greater than 0)
-z str1                   # str1 is null (has length 0)

-a file                   # file exists
-d file                   # file exists and is a directory
-e file                   # file exists; same -a
-f file                   # file exists and is a regular file (i.e., not a directory or other special type of file)
-r file                   # you have read permission
-r file                   # file exists and is not empty
-w file                   # your have write permission
-x file                   # you have execute permission on file, or directory search permission if it is a directory
-N file                   # file was modified since it was last read
-O file                   # you own file
-G file                   # file's group ID matches yours (or one of yours, if you are in multiple groups)
file1 -nt file2           # file1 is newer than file2
file1 -ot file2           # file1 is older than file2

-lt                       # less than
-le                       # less than or equal
-eq                       # equal
-ge                       # greater than or equal
-gt                       # greater than
-ne                       # not equal

if condition
then
  statements
[elif condition
  then statements...]
[else
  statements]
fi

for x := 1 to 10 do
begin
  statements
end

for name [in list]
do
  statements that can use $name
done

for (( initialisation ; ending condition ; update ))
do
  statements...
done

case expression in
  pattern1 )
    statements ;;
  pattern2 )
    statements ;;
  ...
esac

select name [in list]
do
  statements that can use $name
done

while condition; do
  statements
done

until condition; do
  statements
done


# 3. Command-Line Processing Cycle.


# The default order for command lookup is functions, followed by built-ins, with scripts and executables last.
# There are three built-ins that you can use to override this order: `command`, `builtin` and `enable`.

command  # removes alias and function lookup. Only built-ins and commands found in the search path are executed
builtin  # looks up only built-in commands, ignoring functions and commands found in PATH
enable   # enables and disables shell built-ins

eval     # takes arguments and run them through the command-line processing steps all over again


# 4. Input/Output Redirectors.


cmd1|cmd2  # pipe; takes standard output of cmd1 as standard input to cmd2
> file     # directs standard output to file
< file     # takes standard input from file
>> file    # directs standard output to file; append to file if it already exists
>|file     # forces standard output to file even if noclobber is set
n>|file    # forces output to file from file descriptor n even if noclobber is set
<> file    # uses file as both standard input and standard output
n<>file    # uses file as both input and output for file descriptor n
<<label    # here-document
n>file     # directs file descriptor n to file
n<file     # takes file descriptor n from file
n>>file    # directs file description n to file; append to file if it already exists
n>&        # duplicates standard output to file descriptor n
n<&        # duplicates standard input from file descriptor n
n>&m       # file descriptor n is made to be a copy of the output file descriptor
n<&m       # file descriptor n is made to be a copy of the input file descriptor
&>file     # directs standard output and standard error to file
<&-        # closes the standard input
>&-        # closes the standard output
n>&-       # closes the ouput from file descriptor n
n<&-       # closes the input from file descripor n


# 5. Process Handling.


# To suspend a job, type CTRL+Z while it is running. You can also suspend a job with CTRL+Y.
# This is slightly different from CTRL+Z in that the process is only stopped when it attempts to read input from terminal.
# Of course, to interupt a job, type CTRL+C.

myCommand &  # runs job in the background and prompts back the shell

jobs         # lists all jobs (use with -l to see associated PID)

fg           # brings a background job into the foreground
fg %+        # brings most recently invoked background job
fg %-        # brings second most recently invoked background job
fg %N        # brings job number N
fg %string   # brings job whose command begins with string
fg %?string  # brings job whose command contains string

kill -l      # returns a list of all signals on the system, by name and number
kill PID     # terminates process with specified PID

ps           # prints a line of information about the current running login shell and any processes running under it
ps -a        # selects all processes with a tty except session leaders

trap cmd sig1 sig2  # executes a command when a signal is received by the script
trap "" sig1 sig2   # ignores that signals
trap - sig1 sig2    # resets the action taken when the signal is received to the default

disown <PID|JID>    # removes the process from the list of jobs

wait                # waits until all background jobs have finished


# 6. Tips and Tricks.


# set an alias
cd; nano .bash_profile
> alias gentlenode='ssh admin@gentlenode.com -p 3404'  # add your alias in .bash_profile

# to quickly go to a specific directory
cd; nano .bashrc
> shopt -s cdable_vars
> export websites="/Users/mac/Documents/websites"

source .bashrc
cd websites


# 7. Debugging Shell Programs.


bash -n scriptname  # don't run commands; check for syntax errors only
set -o noexec       # alternative (set option in script)

bash -v scriptname  # echo commands before running them
set -o verbose      # alternative (set option in script)

bash -x scriptname  # echo commands after command-line processing
set -o xtrace       # alternative (set option in script)

trap 'echo $varname' EXIT  # useful when you want to print out the values of variables at the point that your script exits

function errtrap {
  es=$?
  echo "ERROR line $1: Command exited with status $es."
}

trap 'errtrap $LINENO' ERR  # is run whenever a command in the surrounding script or function exists with non-zero status 

function dbgtrap {
  echo "badvar is $badvar"
}

trap dbgtrap DEBUG  # causes the trap code to be executed before every statement in a function or script
# ...section of code in which the problem occurs...
trap - DEBUG  # turn off the DEBUG trap

function returntrap {
  echo "A return occured"
}

trap returntrap RETURN  # is executed each time a shell function or a script executed with the . or source commands finishes executing












--------------------------------------------------------------------------------------------------------------

# 2.3. Flow Control.


statement1 && statement2  # and operator
statement1 || statement2  # or operator

-a                        # and operator inside a test conditional expression
-o                        # or operator inside a test conditional expression

str1=str2                 # str1 matches str2
str1!=str2                # str1 does not match str2
str1<str2                 # str1 is less than str2
str1>str2                 # str1 is greater than str2
-n str1                   # str1 is not null (has length greater than 0)
-z str1                   # str1 is null (has length 0)

-a file                   # file exists
-d file                   # file exists and is a directory
-e file                   # file exists; same -a
-f file                   # file exists and is a regular file (i.e., not a directory or other special type of file)
-r file                   # you have read permission
-r file                   # file exists and is not empty
-w file                   # your have write permission
-x file                   # you have execute permission on file, or directory search permission if it is a directory
-N file                   # file was modified since it was last read
-O file                   # you own file
-G file                   # file's group ID matches yours (or one of yours, if you are in multiple groups)
file1 -nt file2           # file1 is newer than file2
file1 -ot file2           # file1 is older than file2


--------------------------------------------------------------------------------------------------------------
	if condition
then
  statements
[elif condition
  then statements...]
[else
  statements]
fi

--------------------------------------------------------------------------------------------------------------
case expression in
  pattern1 )
    statements ;;
  pattern2 )
    statements ;;
  ...
esac
--------------------------------------------------------------------------------------------------------------

for x := 1 to 10 do
begin
  statements
end



for name [in list]
do
  statements that can use $name
done


for (( initialisation ; ending condition ; update ))
do
  statements...
done



select name [in list]
do
  statements that can use $name
done



while condition; do
  statements
done

until condition; do
  statements
done

--------------------------------------------------------------------------------------------------------------
watch -n <period_in_seconds> <command>
--------------------------------------------------------------------------------------------------------------
#!/bin/bash
while[1]; do 
	notify-send "`lynx --dump "https://www." | grep -A 10 -e "B6 67 Flight Status" | taail -n 6`"
	sleep 5m
done;
--------------------------------------------------------------------------------------------------------------
`$#` is a special variable which returns the number of parameters given to a script, e.g.:

```shell
#!/bin/bash
# saved as demo.sh
echo $#
```

```shell
./demo.sh       # will return 0
./demo.sh a     # will return 1
./demo.sh a b   # will return 2
```


















--------------------------------------------------------------------------------------------------------------
> Stampa:

#!/bin/bash
--------------------------------------------------------------------------------------------------------------
> Comments:

#
--------------------------------------------------------------------------------------------------------------
> Variables:

> Constants:
--------------------------------------------------------------------------------------------------------------
> Output:

echo
-n
--------------------------------------------------------------------------------------------------------------
> Iutput:

read <variable_or_constant_name_or_env_REPLAY>
-s -> password
-t <sec> -> timer
-p "<prompet>" EX-> read -p "what's your name ? " name; echo "my name is $name"
--------------------------------------------------------------------------------------------------------------
> operators:
  > Arithmatic operators:
  - +
  - -
  - *
  - /
j  - %
  - **

  > Logical operators:
  -lt                       # less than
  -le                       # less than or equal
  -eq                       # equal
  -ge                       # greater than or equal
  -gt                       # greater than
  -ne                       # not equal
-----------------------

#!/bin/bash

seconds=0

echo -n "Enter number of seconds > "
read seconds

hours=$((seconds / 3600))
seconds=$((seconds % 3600))
minutes=$((seconds / 60))
seconds=$((seconds % 60))

echo "$hours hour(s) $minutes minute(s) $seconds second(s)"---------------------------------------------------------------------------------------
- bc
- w
- yes
$(command) in bash=== `command` in sh

bash = bash + sh

exit status ($?)
[0-255]
0 -> sucssesful # return 0;
[1-255] -> faild
- true
- false
special parameters


# الشكل الأول
test expression

# الشكل الثاني
[ expression ]
--------------------------------------------------------------------------------------------------------------
#!/bin/bash -x  # -> tracing
-----------------------


set -x
if [ $number = "1" ]; then
    echo "Number equals 1"
else
    echo "Number does not equal 1"
fi
set +x
--------------------------------------------------------------------------------------------------------------
number=1
إلى:

number=



#!/bin/bash

if [ "$1" != "" ]; then
    echo "Positional parameter 1 contains something"
else
    echo "Positional parameter 1 is empty"
fi

#!/bin/bash

if [ $# -gt 0 ]; then
    echo "Your command line contains $# arguments"
else
    echo "Your command line contains no arguments"
fi

--------------------------------------------------------------------------------------------------------------
> bash GUI:

- Zenity
- x dialogue
- k dialogue
- g dialogue
--------------------------------------------------------------------------------------------------------------
[LearnLinux.tv](https://www.youtube.com/user/JtheLinuxguy/playlists)



- /dev/random
- /dev/urandom

- echo $RANDOM
- echo $(( RANDOM%10 + 1 ))


# in BSD jot is equivelant shuf in GNU/Linux
shuf <file> -> shuffle lines randomly and output all of them
shuf -i 1-10 -> shuffle numbers from 1 to 10 randomly and output all of them
shuf -i 1-10 -n1 -> shuffle numbers from 1 to 10 randomly and output one of them
shuf <file> -n 1-> shuffle lines randomly and output one line of them




#/usr/bin/env bash
complete -W "now tomorrow never" dothis


> Programmable Completion Builtins:
- Static completion
- Dynamic completion
complete -A directory dothis


- echo "Please Enter an integer" -> by default echo command put \n at the end of file
- echo -n "Please Enter an integer" -> -n switch => no break line


--------------------------------------------------------------------------------------------


ls -l > output.txt
echo "Listing of foo.txt" >> output.txt
cat foo.txt >> output.txt

- group: { ls -l; echo "Listing of foo.txt"; cat foo.txt; } > output.txt
- subshell: (ls -l; echo "Listing of foo.txt"; cat foo.txt) > output.txt


-----------------------------------------------------------------------------------------------

read [-options] [variable...]

- read num
- read va1 val2 val3 val4 val5
    - if you send 3 argument only the last 2 parameters will be empty
    - if you send 7 argument the last one will contain other values
- read -> if you don't declare variabe name at read command the value while assigned to env variable called REPLY 


- read -p "Enter one or more values > "
- -t seconds
- -s silent mode like password
- -n num -> number of input characters
- -u <foo.txt> -> get your value from foo.txt file instead of stdin
- -e
- -i <string> -> defalt value

- (Internal Field Separator) IFS
- IFS=":" read user pw uid gid name home shell <<< "$file_info"
- OLD_IFS="$IFS" IFS=":" read user pw uid gid name home shell <<< "$file_info" IFS="$OLD_IFS"







fc command





history
=======

history
$HISTSIZE
~/.bash_history
history -c

!!
!
!^ === !:1
![number]
!$
!*
C-r => [reverse - inverse] search in history
C-s => search in history
up arrow
down arrow

history | grep <keyword>


^soud^sudo=== sudo !*







Alt + . 
========
mkdir test/
cd (Alt + .) === cd test/

Cycle through past arguments 
cycle through your history argument by argument 


======================
#RMBXZ
======================
تنفيذ أمر دون حفظه في التاريخ
# Execute a command without saving it in the history
<space>command

======================

تنفيذ أمر في وقت معين
# Execute a command at a given time
echo "ls -l" | at midnight

======================

اخراج الصوت من جهاز الكمبيوتر البعيد
# output your microphone to a remote computer's speaker
dd if=/dev/dsp | ssh -c arcfour -C username@host dd of=/dev/dsp

======================

حجز جزء من الرام على شكل مجلد
# Mount a temporary ram partition
mkdir /media/myram
mount -t tmpfs tmpfs /media/myram -o size=32m

======================

تحميل موقع كامل
# Download an entire website
wget --random-wait -r -p -e robots=off -U mozilla http://www.example.com

======================

عندما يعمل الايبي اعطني تنبيها وافحصه كل 10 ثوان.
# Set alarm when an IP address comes online,check every 10 sec.
ping -i 10 -a IP_address

======================

إغلاق جميع العمليات الفرعية التوالي للشل
# Close shell keeping all subprocess running
disown -a && exit

======================

محاكاة الكتابة
# Simulate typing
sudo apt-get install pv
echo "You can do it man " | pv -qL 10

======================

نظام التشغيل 32 ام 64
# 32 bits or 64 bits?
getconf LONG_BIT

======================

عرض العمليات العشرة الأوائل حسب استخدام الذاكرة
# Display the top ten running processes - sorted by memory usage
ps aux | sort -nk +4 | tail

======================

ضع وحدة التحكم على مدار الساعة في أعلى الزاوية اليمنى
# Put a console clock in top right corner
while sleep 1;do tput sc;tput cup 0 $(($(tput cols)-29));date;tput rc;done &

======================

عرض البرامج المتصلة بالشبكة في الوقت الحقيقي
# Watch Network Service Activity in Real-time
lsof -i

======================

مقارنة ملفين لم يتم فرزهما دون إنشاء الملفات المؤقتة
# diff two unsorted files without creating temporary files
diff <(sort file1.txt) <(sort file2.txt)

======================

إعادة استخدام كل معلمة من سطر الأوامر السابق
# Reuse all parameter of the previous command line
!*

======================

HTTP 80 تبادل الملفات عبر مشاركة
# Sharing file through http 80 port
nc -v -l 80 < file.txt

======================

مشاهدة التطبيقات التي تستخدم اتصال بالإنترنت في الوقت الراهن. (متعدد اللغات)
# Show apps that use internet connection at the moment. (Multi-Language)
lsof -P -i -n

======================

حذف كافة الملفات في مجلد التي لا تتطابق مع ملحق ملف معين
# Delete all files in a folder that don't match a certain file extension
rm !(*.foo|*.bar|*.baz)

======================

حفظ إخراج الأمر إلى صورة
# save command output to image
ifconfig | convert label:@- ip.png

======================
عرض نوع التوزيعة
# Display which distro is installed
cat /etc/issue

======================

إزالة المكرر في ملف غير مرتب.
# Remove duplicate entries in a file without sorting.
awk '!x[$0]++' <file>

======================

إضافة حماية كلمة المرور إلى ملف.
# Add Password Protection to a file your editing in vim.
vim -x <FILENAME>

======================

فيلم ماتريكس
# Matrix film
tr -c "[:digit:]" " " < /dev/urandom | dd cbs=$COLUMNS conv=unblock | GREP_COLOR="1;32" grep --color "[^ ]"

======================

نسخ المفتاح العام SSH الخاص بك على جهاز بعيد عن passwordless تسجيل الدخول - طريقة سهلة
# Copy your SSH public key on a remote machine for passwordless login - the easy way
ssh-copy-id username@hostname

======================

إدراج نتائج لتكملة في سطر الأوامر
# Inserts the results of an autocompletion in the command line
ESC *

======================

عرض محتويات الرام
# view a ram contents
sudo dd if=/dev/mem | cat | strings

======================

عرض الملفات المتشابهة استندادا لحجم الملف ثم للهاش
# Find Duplicate Files (based on size first, then MD5 hash)
find -not -empty -type f -printf "%s\n" | sort -rn | uniq -d | xargs -I{} -n1 find -type f -size {}c -print0 | xargs -0 md5sum | sort | uniq -w32 --all-repeated=separate

======================

استبدال المسافات في أسماء الملفات بحرف (_)
# replace spaces in filenames with underscores
rename 'y/ /_/' *

======================

إنشاء نسخة PDF
# Create a pdf version of a manpage
man -t manpage | ps2pdf - filename.pdf

======================

مشاهدة التطبيقات التي تستخدم اتصال بالإنترنت في الوقت الراهن.
# Show apps that use internet connection at the moment.
ss -pr
ss -pn

======================

اظهار الايبي العام
# show public ip
curl icanhazip.com

======================

قائمة جميع اختصارات الباش
# List all bash shortcuts
bind -P

======================

إزالة القيود الأمنية من وثائق PDF باستخدام غوستسكريبت
# Remove security limitations from PDF documents using ghostscript
gs -q -dNOPAUSE -dBATCH -sDEVICE=pdfwrite -sOutputFile=OUTPUT.pdf -c .setpdfwrite -f INPUT.pdf

======================

مشاركة شاشة محطة مع الآخرين
# Share a terminal screen with others
% screen -r someuser/

======================

تشغيل فحص نظام الملفات بعد اعادة التشغيل .
# Run a file system check on your next boot.
sudo touch /forcefsck

======================

عرض فقط الدلائل
# List only the directories
ls -d */

======================

نشر الشل من خلال البورتات 5000 . 5001 .5002
# Broadcast your shell thru ports 5000, 5001, 5002 ...
script -qf | tee >(nc -kl 5000) >(nc -kl 5001) >(nc -kl 5002)

======================

إزالة كافة الملفات المستخرجة سابقا من الملف المضغوط
# Remove all files previously extracted from a tar(.gz) file.
tar -tf <file.tar.gz> | xargs rm -r

======================

ابدء الامر ثم اقتله إذا كان لا يزال يعمل بعد 5 ثوان
# Start COMMAND, and kill it if still running after 5 seconds
timeout 7s COMMAND

======================

إزالة كافة الدلائل بشكل اذا كانت فارغة
# Recursively remove all empty directories
find . -type d -empty -delete

======================

نسخ احتياطية لجميع قواعد البيانات في ملفات فردية
# Backup all MySQL Databases to individual files
for I in $(mysql -e 'show databases' -s --skip-column-names); do mysqldump $I | gzip > "$I.sql.gz"; done

======================

قرع البورتات
# Port Knocking!
knock <host> 3000 4000 5000 && ssh -p <port> user@host && knock <host> 5000 4000 3000

======================

بحث متكرر للبحث عن كلمة أو عبارة في أنواع معينة من الملفات السي،
# Search recursively to find a word or phrase in certain file types, such as c files or h files
find . -name "*.[ch]" -exec grep -i -H "search pharse" {} \;

======================

تحميل جميع الصور من الموقع
# Download all images from a site
wget -r -l1 --no-parent -nH -nd -P/tmp -A".gif,.jpg" http://example.com/images

======================

إعادة المحاولة الأمر السابق حتى ينجح
# Retry the previous command until it exits successfully
until !!; do :; done

======================

البرنامج الذي ينتمي إلى هذا البورت في الوقت الحالي؟
# which program is this port belongs to at current time ?
lsof -i tcp:80

======================

انشاء مجلدات فرعية
# make directory tree
mkdir -p work/{d1,d2}/{src,bin,bak}

======================

منبه للتذكير بعد خمس دقائق
# Remind yourself to leave in 5 minutes (remind me)
sudo apt-get install leave
leave +5 &

======================

تحويل الفيديو إلى صوت MP3
# Convert Youtube videos to MP3
youtube-dl -t --extract-audio --audio-format mp3 YOUTUBE_URL_HERE

======================

اعرض كل شئ الا الملفات المضغوطة
# ls not pattern
ls !(*.gz)

======================

البحث عن الملفات التي تم تعديلها على النظام الخاص بعد ساعةمن الان
# Find files that have been modified on your system in the more than 60 minutes
sudo find / -mmin +60 -type f

======================

تحقق من خدمة DNS
# Get your outgoing IP address (check DNS)
dig www.yahoo.com
dig www.yahoo.com @8.8.8.8

======================

الذهاب إلى المجلد الأصلي الذي تم تحريره في الامر الاخيرر
# Go to parent directory of filename edited in last command
which !$:h

======================

الفرق بين متغيرين
# Diff on two variables
diff <(echo "$a") <(echo "$b")

======================

قائمة جميع الملفات التي تم فتحها بواسطة أمر معين
# List all files opened by a particular command
lsof -c dhcpd

======================

لعرض معلومات الجهاز
# Use file to view device information
file -s /dev/sd*

======================

البحث عن قطعة اذا تم توصيلها للحاسوب USB
# Find usb device
diff <(lsusb) <(sleep 3s && lsusb)

======================

العثور على كل ملف أكبر من 500 ميجا
# find all file larger than 500M
find / -type f -size +500M

======================

رقم عشوائي بين 1 و 8
# Random Number Between 1 And 8
echo $[RANDOM%8+1]

======================

ارسال داتا الى المقبس
# send echo to socket network
echo "hii" > /dev/tcp/192.168.1.2/25

======================

انشاء بروكسي
# Create a single-use TCP (or UDP) proxy
nc -l -p 2000 -c "nc example.org 3000"

======================

التقاطع بين ملفين
# intersection between two files
grep -Fx -f file1 file2

======================

الفرق بين صفحات الويب
# Diff remote webpages using wget
diff <(wget -q -O - URL1) <(wget -q -O - URL2)

======================

قائمة المشتركين في الشبكة
# List alive hosts in specific subnet
nmap -sP 192.168.1.0/24

======================
الحد من استخدام وحدة المعالجة المركزية في عملية معينة
# Limit the cpu usage of a process
sudo cpulimit -p pid -l 50

======================

تحويل المتصفح الى نوت باد
# Notepad in a browser (type this in the URL bar)
data:text/html, <html contenteditable>

======================

تشفير المجلد عبر اتصال ssl
# Encrypted archive with openssl and tar
tar --create --file - --posix --gzip -- <dir> | openssl enc -e -aes256 -out <file>

======================

عرض الوقت الحالي في اليابان
# Display current time in japan
zdump Japan

======================

انشاء بروكسي عبر البورت 7000
# Create a file server, listening in port 7000
while true; do nc -l 7000 | tar -xvf -; done

======================

استخراج الصوت من الفيديو فلاش
# Extract audio from Flash video (*.flv) as mp3 file
ffmpeg -i video.flv -vn -ar 44100 -ac 2 -ab 192k -f mp3 audio.mp3

======================

الحصول على جميع ملفات الكتب والملفات المضغوطة من الموقع
# get all pdf and zips from a website using wget
wget --reject html,htm --accept pdf,zip -rl1 url

======================

اضاءة الضوء في كرت الشبكة
# Blink LED Port of NIC Card
ethtool -p eth0

======================

متى اخر مرة عمل اعادة تشغيل
# Find last reboot time
who -b

======================

عرض سعة الشبكة
# Display current bandwidth statistics
ifstat -nt

======================

فحص مجموعة عناوين
# ping a range of IP addresses
nmap -sP 192.168.1.100-254

======================

استخدام مدخلات اخر امر مع الامر التالي
# Use last argument of last command
file !$

======================

تظهر جميع الأوامر
# show all commands
compgen -c

======================

تحويل ملف نيرو الي ايزو
# Convert a Nero Image File to ISO
dd bs=1k if=image.nrg of=image.iso skip=300

======================

تببه بالرنين عند اطقاء السيرفر
# beep when a server goes offline
while true; do [ "$(ping -c1W1w1 server-or-ip.com | awk '/received/ {print $4}')" != 1 ] && beep; sleep 1; done

======================

عرض سرعة الرام
# Check Ram Speed and Type in Linux
sudo dmidecode --type 17 | more

======================

النسخ الاحتياطي القرص الصلب الخاص بكد
# Backup your hard drive with dd
sudo dd if=/dev/sda of=/media/disk/backup/sda.backup

======================

استخراج الصوت من الفيديو
# Extract audio from a video
ffmpeg -i video.avi -f mp3 audio.mp3

======================

تغيير حجم صورة
# Resize an image to at least a specific resolution
convert -resize '1024x600^' image.jpg small-image.jpg

======================

مقارنة الملفات باستخدام الهاش
# Compare copies of a file with md5
cmp file1 file2

======================

الحصول على جميع اللنكات من الموقع
# Get all links of a website
lynx -dump http://www.domain.com | awk '/http/{print $2}'

======================

عرض المعلومات BIOS
# Display BIOS Information
dmidecode -t bios

======================

تحويل المجلد الى ملف ايزو
# Make ISO image of a folder
mkisofs -J -allow-lowercase -R -V "OpenCD8806" -iso-level 4 -o OpenCD.iso ~/OpenCD

======================

كم سرعة القراءة في القرص الصلب
# Testing hard disk reading speed
hdparm -t /dev/sda

reference :- commandlinefu.com




for x in `seq 0 25 11825`; do sleep 1 ; curl "http://www.commandlinefu.com/.../sort-by-votes/plaintext/$x" ; done > allcommands.txt



https://play-with-docker.com
  -redirect to-> https://labs.play-with-docker.com
    -start-> https://labs.play-with-docker.com/#
      -> https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0
        -add new instance-> https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8lndim9m000d63neg |
                                                                                                                   |-> diff=> _bra8lndi
          -ssh-> ssh ip172-18-0-8-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com                            |


https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8oflim9m000d63oo0
ssh ip172-18-0-67-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com
_bra8ofli






https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8pllim9m000d63osg
ssh ip172-18-0-68-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com


https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8pr5im9m000d63otg
ssh ip172-18-0-69-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com

https://labs.play-with-docker.com/p/bra8kjdim9m000d63mr0#bra8kjdi_bra8q0tim9m000d63oug
ssh ip172-18-0-64-bra8kjdim9m000d63mr0@direct.labs.play-with-docker.com






















https://labs.play-with-docker.com/p/br9dajdim9m000bp86eg#br9dajdi_br9e8mtim9m000bp8aa0
https://labs.play-with-docker.com/p/<50 char>




Shell Scripting
===============
- Bash => [B]ourne [a]gain [sh]ell
- sh   => Bourne [sh]ell
- dash
- ash
-  


playlist=https://web.microsoftstream.com/channel/41c96d80-a07d-4e58-a021-7de8a55f81b1 && youtube-dl --cookies /media/cookies.txt $playlist




py1

playlist=https://web.microsoftstream.com/channel/41c96d80-a07d-4e58-a021-7de8a55f81b1 && youtube-dl --cookies /media/cookies.txt 





$playlist




pages


DRY Don't Repeat Yourself
DRY Code
DRY Terminal Commands

mkdir -p $HOME/bin
export PATH=$PATH:$HOME/bin

Make bash excute any code