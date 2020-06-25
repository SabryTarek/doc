Terminal
===


- through out the 1960s in 1970s most human interaction with computers was done through what are called terminals.

a terminal device is a piece of hardware
that combines a keyboard with some kind
of character display which in the early
days in the 1960s was usually some kind
of printer that would print out
characters line by line or later in the
1970s it was usually a video console but
the video console was not capable of
displaying arbitrary graphics it could
only display text characters and these
text characters could only be displayed
in a fixed grid so you wouldn't have
arbitrarily positioned characters and
they were on-screen and also these
devices usually only had one display
font and one display color so the idea
of a terminal is that when we hook it up
to a computer the computer can then send
text characters in sequence to the
terminal which get displayed character
by character on the screen and when the
user sitting at the keyboard types
anything a character is sent from the
terminal to the computer so there's a
neat symmetry there a strict sequence of
characters flows from the computer to
the terminal and vice versa as you can
probably guess the text going in both
directions was almost always ASCII text




in UNIX systems a process may
communicate with the terminal through a
file representing that terminal a
terminal character device file when a
process writes to a terminal character
device file that's putting data in the
output buffer of the device file which
then is going to get sent out by the
operating system to the terminal device
associated with that character device
file conversely when the user at the
keyboard types something that data gets
sent from the terminal to the computer
and then the operating system will take
that data and put it in the input buffer
of The Associated character device file
and then the process then may read from
the character device file to get that
data so again be clear that the terminal
is a totally dumb device when you see
text displayed on the terminal that's
something that's coming from processes
running on the attached computer the
only exception to this is that with a
terminal character device file we can
turn on a mode called echoing
when a terminal character device
operates in the echoing mode then any
input it receives from the terminal it
will then immediately echo back out to
the terminal so that it gets displayed
on screen and practice what this means
is that when echoing is on and the user
type something on the keyboard then
whatever key they type they will then
immediately see up here on their screen
just be clear that the terminal doesn't
have an echoing mode it's the terminal
character device file that has an echo
in mode so the data is actually being
sent from the terminal and then
immediately back to the terminal as the
years went on some terminals began to
add more features like for example some
terminals featured the ability to change
text color the way this would work is
that you would set the terminals mode
like say what color it's printing by
sending it an escape sequence that is a
sequence of characters beginning with
the ASCII escape character which is
ASCII code 27 by sending escape
sequences to the terminal we can set its
modes and thereby changes behavior like
say what color of text gets displayed or
maybe say how many lines of text get
displayed on the screen things like that
now the trouble with this arrangement is
that early on the escape sequences
weren't really standardized heavy
manufacturer did their own thing
so what you would need to do to control
one time a little different from what
you would do to control another in time
though eventually a standard did more or
less emerge unfortunately the end result
of this process ended up quite messy
so if you look into the details of
terminals and want to know exactly what
you can do with escape codes it's all
surprisingly complicated so that's a
whole area we're going to elide over
we'll just think of terminals as simply
displaying a sequence of text and
sending it back to the computer whatever
gets typed at the keyboard end of story
however I do mention these capabilities
because you will likely interact with
some programs that when they do use a
terminal they seem to do things that
otherwise aren't possible like say
changing the color of the text


syscalls
===
git clone https://github.com/TunSafe/TunSafe.git; cd TunSafe; make && make install;


- unix was the name of an operating system created back in the early 1970s

- today however unix refers to any operating system which imitates that original unix

- in the 1980s the two most prevalent variants of UNIX were called system 5 which was created by AT&T and BSD which stands for Berkeley system distribution so cold because it was created at Berkeley University

- today the most widely used variants are Linux and Mac OS 10 and in distant third place are a few descendants of BSD including FreeBSD and open BSD as a matter of fact Mac OS 10 is itself based upon a descendant of BSD called darwin 

- perhaps the biggest difference among these variants is that whereas Mac OS 10 is a proprietary operating system that is as a commercial product which you must pay for for each copy Linux and the BSD variants are all examples of what's called either open source software or free software this means that the source code for these operating systems is freely distributed such that anyone is allowed to copy and modify them

- the other major difference is that whereas Mac OS 10 has now a quite significant share of the desktop market Linux and BSD do not Linux and BSD in contrast are very successful as server operating systems in fact Linux has the dominant market share even greater than Windows and Linux is also very widely used for small devices including embeddable systems like say the computer in your car

- when it comes to smartphones the two major players now are Android and iOS Android is a variant of Linux created by Google and iOS is a variant of Mac OS 10 used for the iPhone

- so we have all these variants of UNIX and none of them are exactly the same which creates problems because ideally we would like to be able to create a program and then have it run on all variants of UNIX basically what we need is some standard that defines what it means to be a UNIX system so in the late 80s and early 90s operating system developers got together and created two such standards one called POSIX which stands for portable operating system interface for Unix and one called s us or the single UNIX specification

- today most variants of UNIX more or less conform to both of these standards though there really is quite a bit of divergence and the details these standards also fail to entirely solve the problems of portability because they don't really specify everything about a UNIX system they are rather limited in their scope so there are many features of today's UNIX systems which work totally different on different UNIX systems well in some cases exist only on some UNIX systems but not others

- in the end it is possible today to write some programs which will run on any UNIX system as long as you stay within the bounds of the two standards as soon as your code uses platform specific features you are probably going to have to do some extra work to get it to run on other platforms

- from the perspective of a program the primary thing which defines an operating system is what system calls it makes available

- system calls as we discussed in an earlier unit our functions in the operating system code which programs can invoke using a special instruction these functions are the primary means by which the operating system exposes functionality to programs so that programs can use features or hardware like say read and write data on a storage device or send or receive data across the network

- and again recall that
the reason these special functions can
only be invoked with a special
instruction is that normally when a
process executes it can't read and
execute data that's part of the
operating system kernel itself each
process is supposed to run effectively
confined to its own box its own part of
memory the instruction to invoke a
system of colle breaks out of that box
and the way it does that is that in the
instruction you specify the number of
the system call you wish to invoke and
that causes the CPU to go and look up an
address which corresponds to that number
in a special table what we did not
discuss is that actually in most modern
operating systems the kernel code for
these system calls and actually the
table for the system calls itself are
placed inside the address space of each
process usually this is placed at the
top of the address space and the stack
starts immediately below it
these pages of the address space are
normally marked such that the process
itself cannot access them only when the
process invokes a system call via the
special instruction does execution
actually jump up to the kernel code and
when a system call is invoked it uses
the stack of the process to place a
stack frame for that system call just
like with any other function the purpose
of all this is that it allows system
calls to execute in the context of the
process which invokes them and that
avoids a context switch meaning we don't
have to swap out the memory tables of
the current process we can just leave
the memory table for the current process
in memory for the duration another
advantage of this arrangement is that it
allows system calls to be naturally
interrupted that is suspended and then
resumed later when we suspend a process
it generally doesn't matter if it's
running user code that is code of the
program itself or if it's running kernel
code a system call if system calls were
to run outside the context of a process
that would make a trigger for the
operating system to suspend a process
while it's invoking a system call in our
earlier discussion of operating systems
we discussed how a process transitions
between a few different states most
obviously a process can be running that
is actually being currently executed by
a CPU or it can be waiting meaning it
can be waiting for the scheduler to put
it into the running state while running
a process can also be transitioned into
the state of being blocked while blocked
a process will not be scheduled so won't
ever run again until it is unblocked and
put back into the waiting State there
are a dozen ways in which a process may
get blocked the most common is from
invoking certain system calls for
example as we'll discuss shortly the
system call for reading from a file may
block the process the reason it does
this is because most data sources from
which we read files namely storage
devices like hard drives such devices
tend to be very slow relative to the CPU
so there's nothing for the process or
the system call to do while it's waiting
for the data to be read off of that
device so the way the system call works
is it
the operating system hey I want that
data off of that device it then blocks
the process and then it's the job of the
operating system to once the data is
ready unblock the process so that's the
jungle pattern a process gets blocked
when it has to wait for something and
then either the operating system or some
other process
well then signal that process to unblock
it and try not to get confused that
blocking effectively means waiting but
what we call waiting refers to waiting
to be scheduled and ready to be
scheduled so a blocked process waits for
some trigger and then it waits again in
the so called waiting state so system
calls effectively represent the
functionality of the operating system
exposed to programs this includes system
calls for first of all managing
processes themselves such as say from
one process starting another process so
that we can run another program and then
there are many system calls for dealing
with files creating files deleting files
reading them writing them etc and then
UNIX system calls for what it calls
sockets a socket represents one end of a
network connection so when you want to
program to talk to another program in
another system you create a socket in
your program and that socket
communicates with the socket in the
other program and that's the channel of
communication Linux also has system
calls for what it calls signals a signal
is basically a notification of some
event or some condition sent from the
operating system or process to some
process many of the signals sent by the
operating system indicates some kind of
error condition like for example when
your program causes a memory violation
that is it reads or writes some byte of
memory it's not allowed to recall from
our earlier unit that that will trigger
a hardware exception in the CPU causing
the CPU to go and execute a
pre-designated piece of operating system
code and that operating system code will
send a signal to our process indicating
the error and when the process receives
that signal it gets interrupted and it
will execute a function pre designated
to run for when that process receives
that signal
unix's also have many system calls for
what's generically called inter process
communication meaning just some kind of
mechanism for processes to communicate
with each other actually network sockets
are one form of inter process
communication because in fact when a
process communicates over a socket the
other program doesn't have to be on
another system it can actually be
another process on the same system but
for communication between processes
actually running on the very same system
we have some additional mechanisms which
generally have the advantage of being
more efficient UNIX systems also have a
surprising number of system calls just
for dealing with what are called
terminals terminals and command line
shells are something we'll talk about in
the next unit today z-axis also have
system calls for what are called threads
when a process runs by default it has
one thread of execution that is there's
one code pointer there's one pointer
pointing to what the current instruction
is and there's one stack keeping track
of all the functions that we've invoked
with multiple threads of execution you
can effectively split a process into
separate threads each thread having its
own code pointer and its own stack the
simplest way to think about threads is
that they're like separate processes
which run independently and are
scheduled independently but they share
the same address space so the data on
the heap can be read and written by any
thread in the process all of the reasons
you might have to make your program of
multi-threaded and all of the difficult
problems that arise in multi-threaded
programming we'll discuss in a later
unit finally we have system calls for
talking to i/o devices that is
everything from the system clock to the
video adapter to storage devices though
actually of course in the case of
storage devices we generally read and
write data to them in the form of files
and actually as we'll see UNIX is allow
us to treat io devices like files which
admittedly is a very baffling thing to
hear what it really comes down to is
that when it comes to reading and
writing data from an i/o device we can
in most cases use the same system calls
that we use to read and write files so
in that sense we can treat io devices in
UNIX like files
now in this unit we're mainly going to
focus on the system calls for managing
processes and for reading and writing
files and also a little bit about
signals we're not really going to cover
anything about sockets or process
communication or terminals or threads or
even i/o devices though as I mentioned
there's some overlap between the system
calls dealing with files and those
dealing with IO devices now as I've said
a system call is invoked using a special
instruction the question though is well
if I'm not programming in assembly how
do I invoke that instruction well in the
case of the C language for example C
compiles into machine code and in C we
can actually write functions in assembly
which we can then invoke from our C code
as if it were like a C function so most
implementations of the C language will
include along with just a compiler will
include standard libraries that include
these functions which invoke the system
calls so even though we haven't yet
learned the C language here for example
is what the read system call the system
call which reads a file this is what it
looks like in C in the case of
interpreted languages most interpreters
are written in C or C++ and so to invoke
a system call from your Python code we
need our Python implementation or Python
interpreter to provide for us some
special function which ultimately
invokes
in C code that system call and because
of semantic differences between the C
language and say Python the arguments
you provide for these functions don't
necessarily correspond exactly to the
arguments provided to the system called
in C nor do they necessarily return
exactly the same kind of value the
function provided to us by Python the
wrapper function is bridging that
semantic gap between the Python language
and the C language so the function say
in Python which wraps the system call
read might be simplified to say have
just one parameter instead of three the
purpose in this unit is to just
familiarize you with the most important
system calls and to understand what they
do not necessarily at how exactly to
invoke them as you'll see in a later
unit the C language has no exception
mechanism so there's a very different
way we have to deal
with errors basically when we invoke a
function we have to check the return
value for some kind of error condition
so when you use standard library
functions in C including these system
call functions you need to learn how to
check for and deal with errors for each
particular function in fact there are
generally many things that might go
wrong when you invoke a system call for
example when you attempt to open a file
so you can read or write that file what
if the file doesn't exist well then the
function the system call has to return
some kind of error and you need to learn
to check for those kinds of errors and
truth you should almost think of
invoking a system call is more like
making a request than making a demand
you're asking the operating system to do
something and for various reasons
depending upon what system call you
invoked the operating system may or may
not oblige your request while the
possibility of errors is in practice of
course very important it's not something
you can simply ignore for our purposes
here we're just going to pretend that
errors don't exist we're just going to
elide over all of those details as for
the code examples in this unit they're
all going to be kept exceedingly short
and they're not actually going to be
written in any proper programming
language they're going to be written in
something that looks like Python but
don't imagine it's actual Python code
this is just pseudocode for our purposes
here so let's start by again discussing
processes for every process currently in
the system the operating system keeps a
data structure that keeps track of all
the things associated with that process
and those things include first of all an
address space that is to say the memory
table which is loaded when that process
is running but processes also include a
few things which we haven't yet
discussed including user IDs file
descriptors what's called the
environment which is basically a small
amount of data associated with the
process and each process has an
Associated current directory and a root
directory all of these are things which
will explain in turn looking closer at
address spaces we haven't previously
mentioned that most processes include a
section for what's called the
uninitialized data and one for what's
called the initialized data these are
sections of memory set aside at the
start of a program for storing global
variables the difference being that in
the uninitialized section those global
variables don't have any initial values
where
and initialized data section they do
when the operating system loads and
executes and executable file it's the
executable file which specifies how
large these sections need to be and the
reason we think of initialized Global's
is different from uninitialized Global's
is that for every initialized global
that value it has to be somehow stored
in the executable the initial value
whereas with uninitialized Global's
there is no value so there's nothing to
store and the executable the executable
just needs to make note of hey we need
this much space for additional global
variables that's an important thing to
understand when you create an executable
you're doing so from a compiled language
like C and unlike in Python where global
variables are sort of created in the
course of the execution of the program
and see the at compilation time the
number of global variables is is fixed
so however many global variables you put
in your code the compiler knows and so
it sets aside enough space and the
executable so these data sections have
no need to either shrink or grow in the
course of the program they're always
fixed in size as for the other sections
in a process the code section which is
actually usually called the text section
the code is called the program text so
to speak the code section is fixed in
size and the code is all loaded at the
start of the program the same is true of
the Criminal Code section the stack
section in contrast starts out empty at
the start of the program and in the
course of the program it will grow and
shrink the heat portion of the address
space is all the space left in the
middle but to use this space we have to
explicitly allocate it from the
operating system we have to invoke a
system call that says hey this part of
my address space I want that mapped to
actual addresses in memory so that I can
use it if your code attempts to use an
address in a portion of the heap which
has not been allocated that triggers a
memory error the CPU recall translates
every address in an instruction to a
corresponding physical address using the
memory tables that current memory tables
for that process and so when an address
in an instruction doesn't map to
anything in physical memory that
triggers a CPU exception in the CPU runs
some operating system code which then
sends a signal to
saying hey there was a memory error to
allocate memory in a process the process
should invoke the nmap system Kol and
mapped a short-form memory map and what
that does is it adds some number of
pages into the process address space and
maps those pages to actual addresses and
physical memory the m:n map system call
does the opposite it D allocates memory
pages from your address space such that
they no longer resolve to actual
addresses in physical memory and so you
can no longer use them so here for
example we invoke M map and we pass in
an argument of how many bytes we would
like to allocate notice though we don't
specify which bytes in memory we want
because generally it's left up to the
operating system to keep track of all of
the chunks and the address space which
are free and so that's the job of the
operating system to find a chunk of
5,000 contiguous bytes somewhere in that
address space and allocate it and then
return the address of the first byte of
that chunk so what M map returns here is
a newly allocated chunk of memory
somewhere in your address space that has
at least five thousand bytes notice is a
at least five thousand because again
memory is allocated in chunks of pages
and pages are usually something like
four kilobytes in size so if you
allocate five thousand bytes that
probably allocated at least two pages of
the address space so in fact you
probably could get away with using up to
about eight thousand bytes starting at
that address but you shouldn't be making
that kind of assumption he requested
five thousand bytes so you shouldn't
assume that the operating system is
giving you any more than that so once
you have this allocated chunk and you
know what the address of the first byte
is then depending upon your language you
can then manipulate hold the bytes in
that chunk you can read and write to
them and then once you're done with that
chunk of memory you no longer need it
you discard it you remove it from your
address space with the M on map system
call by passing to it the address of the
first byte of that chunk you previously
allocated understand that for every
chunk of memory you're allocating the
operating system is keeping track of
those starting addresses the first bytes
in those chunks so that later when you
call M on map it can know which
remember you're referring to it may
occur to you that the problem of
allocating and deallocating memory from
a fixed address space is really quite a
tricky problem because what we want to
avoid as much as possible is a scenario
where we wish to allocate X number of
bytes of memory and there's more than X
number of bytes available as just that
those bytes are not necessarily
contiguous so we can't allocate a chunk
of that size the allocation request is
going to fail in that instance how to do
allocation to avoid that situation as
much as possible is actually one of the
most studied problems in programming
it's not a trivial problem what makes it
especially difficult is that there's not
necessarily a one-size-fits-all solution
different programs have different
patterns of allocation and de-allocation
so what some programs do especially when
you write a program say in C or C++ is
that you may take the allocation problem
into your own hands that is rather than
letting the operating system make these
decisions you can simply at the start of
the program allocate one big chunk and
then use your own allocation algorithm
to hand out sub portions of that chunk
on the one hand this does mean that your
process is grabbing a large chunk of
memory which it isn't all necessarily
using on the other hand it may enable
your program to better use the memory
which is allocated for it now a lot of
students become unclear about why
exactly they need to really give back
memory at all because especially in
trivial programs when you allocate
memory why should you have to deallocate
it before you your program exits because
when your program exits and the process
terminates that memory is all given back
to the operating system anyway so it's
not really an issue despite this you
really should always explicitly
deallocate any memory that you allocate
and even if it doesn't really make a
difference in small trivial programs it
you really should get in the habit
because what happens in larger programs
especially programs that run for a long
time or perhaps use a lot of memory if
you allocate memory you never give back
one it means you're likely at some point
to simply run out of memory you're not
going to have any more space in your
address space to allocate more memory
but even if that doesn't happen you
still don't want to keep around memory
that you're not actually using anymore
because that means no one else can use
that memory now actually on most modern
operating systems we have a virtual
memory system and
any memory that you're not using for a
long time is probably going to get
swapped out onto a hard disk and so it's
not really going to be stealing the
physical RAM from any other process or
from it's from that same process but it
still represents a waste of resources
now all the languages we've already
looked at are interpreted languages that
use garbage collection that is we don't
have to explicitly allocate any memory
or deallocate any memory because it's
always done for us in Python say when
you create an object is up to the
interpreter to make sure that there's
some place in allocated memory to put it
and it's up to the interpreter to keep
track of that object such that when
there are no more references pointing to
that object it knows that chunk of
memory is no longer used and so possibly
can be de-allocated these days the only
major language is where we explicitly
allocate memory our aside from assembly
of course C and C++ virtually every
other language these days does automatic
memory allocation and the allocation for
us the way we create new processes in
UNIX is really quite surprising the only
way to create a new process is for a
process to copy itself that is to copy
its entire address space to copy all of
the other things associated with the
process like the user IDs the
environment and the file descriptors and
so forth this is done with the fork
system call when the process invokes the
fork system call a fork of that process
a copy of that process is created when
the fork system call returns both
processes actually pick up precisely at
that moment where the fork returns the
only difference in the two processes is
what value gets returned from that fork
system call in the newly created process
the fork that the so called child
process the fork system call returns
zero in the original process the parent
process the one which invoked fork in
the first place the call to fork returns
what's called the process ID of that
child process and we'll discuss process
ID shortly as it sounds it's basically
just a unique number identifying each
process in the system so in this code
example here we're invoking the fork
system call and then we're testing what
value that fork system call returns and
if it's zero then we know that we are
inside the
new process the child process but
otherwise we know we are inside the
original process the parent process
so this if-else here has two branches
the first of which will only run in the
new process and the second of which will
only run in the original process the
parent now you may be concerned that a
fork system coal may be very expensive
to perform because it will involve
copying all of the data in one process
over to the new copy of the process but
that's not actually the case
in older UNIX is that actually is what
happened but in newer unix's we have
virtual memories so what happens is that
we only need to copy the memory table of
the process not all the actual content
in memory whereas the contents of a
processes address space may be megabytes
if not gigabytes in size and therefore
take a long time if we wanted to copy
the memory tables themselves for a
process are really generally very small
something on the order of kilobytes
rather than megabytes or gigabytes so
for example say this represents the
address space of an existing process and
the pages in memory as you see are
mapped to portions of RAM and you may
have some number of pages which are
actually swapped out to the harddrive so
they're not currently actually in RAM
when we copy the memory table for the
new fork it's memory pages are all
mapped to the precise same portions of
actual physical RAM and pages on the
hard drive so now say address 200 in
both processes is pointing to the very
same storage whether in RAM or on the
hard drive so far everything is great as
long as the two processes only read from
their memory rather than write to it
because we actually want the two
processes to henceforth diverge such
that when in the new four could be write
to memory that change should only be
seen in the new process not the original
process or vice versa if you write in
the original process you want that only
to be seen in the original process not
the new process to solve this problem
all of the pages in the new process are
marked as copy-on-write the
copy-on-write flag indicates that as
soon as either process
attempts to write to that portion of
memory that page of memory then that
page in memory needs to be copied and
the address table of the new process
updated to point to that new page so
here for example after the fork these
two corresponding portions
the address spaces point to the same
page in RAM and until either process
attempts to write to that page that's
just fine because hey the data hasn't
changed why don't we just share the same
copy as soon as I the process attempts
to write to an address in that page
however that triggers an exception in
the CPU because it detects it in the
memory table that hey this page has been
marked as copy-on-write and that then
triggers the operating system too before
allowing the write to go through to
actually copy that page and then update
the table of the new fork now that the
fork has its own actual copy of that
page it's okay for writes to go through
so this copy-on-write scheme allows
modern unix's to very cheaply fork new
processes without having to copy a whole
bunch of data at the outset in fact very
typically when you fork a process only a
very small number of pages ever get
written to in the whole lifetime of the
forked process so quite often the system
only ends up having to copy a very small
minority of all the pages so the fork
system call creates a fork of an
existing process but that brings along
all of the already loaded code in that
process so you're not really changing
the program you're just splitting an
existing program into two separately
running copies to actually load a new
program we use the exec system call
which again surprisingly does not
actually create a new process what the
exec system call does is actually
replace the current program in the
process with a new program and when it
does this entire address space of the
process gets discarded and effectively a
new one is created first by loading in
the new code from some executable file
so after an exec your process now has a
new code section a new uninitialized and
initialized data sections no heap
section yet nothing's been allocated yet
and a totally empty stack and execution
of this new program begins at some point
designated in the executable file so
when in UNIX you wish to start a new
program very unintuitive Li what you do
is you first copy your existing process
and then in the fork of that process you
call exec to load a new program
such as here in this example where
exacting the executable file found at
slash games slash Paul after the exec
most everything about that process
remains the same except for the very big
difference that well it's a totally new
address space with a new program loaded
the process however retains most of the
other resources of that process such as
the environment and the file descriptors
which we haven't yet discussed if
processes are only created by other
processes well then where did the first
process come from
well when a UNIX system starts there's
always a first process called the init
process and from there all other
processes descend effectively end up
with this hierarchy of processes
starting with an it and then it's
children and in turn their children and
their children and so forth and each
process that's created is known by a
unique ID number a process ID number or
PID and and it always has the PID of 1
and then any subsequent process is
created from there have basically
whatever is the next available PID
number do you understand that these
processes ID numbers can be reused so
for example if you have a process with
the ID 29 once that process terminates
some subsequently created process might
be given the ID number 29
now processes can get terminated for a
variety of reasons but when the process
chooses to terminate itself it does so
by invoking the exit system call and the
reason for the underscore in front is to
distinguish this from another function
called exit in the c standard library
but any case when we invoke the exit
system call we pass in a number called
the exit code the exit code indicates
two other programs what happened to this
program why did it exit and by
convention the exit code 0 is used to
indicate that this process terminated
normally basically the program was over
so it terminated itself other exit codes
are generally used to indicate some kind
of error something went wrong in the
program and some programs will use
specific codes to indicate specific
errors so you look in the documentation
where that program and say O negative 3
means that the program terminated
because it ran out of memory or
something like that again there's no
hard and fast rules about what these
exit codes mean it's really up to each
individual program to this
what they mean when a process terminates
the process which can read its exit code
is its parent the process from which it
was forked and the most common way for
the parent to do this is to invoke the
wait system call when the process
invokes the wait system call it goes
into a blocked state until the specified
other process its child process
terminates at which point the wait
system called then returns the exit code
from that child so here again we have a
process which is forking itself and then
in the child they forked off process it
uses the exact system call and hence
abandons the current program and loads a
new one the program in the executable
file games slash pong meanwhile the
parent process invokes the wak'd system
call passing in the process ID of the
child process recall that in the parent
fork returns the ID of the new child the
other fork so the parent sits in a
blocks state until the fork the child
terminates that unblocks the parent and
the exit code from the child is returned
and assigned to the variable code here
so now the parent process assuming it
knows what exit codes from that program
are meant to indicate it knows what
happens it knows if the program
terminated successfully or if something
went wrong what is confusingly called a
processes environment it's really just a
chunk of data it's some number of bytes
with stuff in it there is an expectation
however that the environment is in the
form of ASCII text where each line
starts with a variable name and then an
equal sign followed by a value and the
value is really just any sequence of
text characters it's every text
character immediately after the equals
sign but before the newline character so
a typical environment might look
something like this it has here seven
different environment variables as they
are so called
and notice that the variables by
convention are in all capital letters
the first here is called term and has
the value X term the second is shell and
has the value slash bin slash bash and
so forth the idea of the environment is
that it's some kind of configuration
data in the process itself
of which is passed down from one process
to the next
in fact the environment is always stored
directly in the process itself somewhere
on the heap and the address of its
location is always stored as a global
variable in the data section if you wish
to read or edit the environment in the
process the C standard library has a few
functions for doing so and you should
generally use these functions rather
than try and edit the environment
directly because if you edit it
incorrectly you can easily screw up the
format now again the idea of the
environment is that it is handed down
from one process to the next so when one
process is forked from another the child
receives a copy of the process in the
state it was in upon the call to fork
this happens naturally because the
environment lives in the address space
and when we fork then everything in the
intro space gets copied over however we
also want the environment in a process
to be preserved across a call to exec so
one thing the exec system call actually
has to do is copy the environment out of
the address space to some temporary
location before it wipes the address
space and then copy the environment back
in to the new address space without the
special treatment the environment would
get wiped every time we call exec
processes not only have an Associated
process ID they also have an Associated
user ID that is a number which indicates
the user which owns this process the
idea behind user accounts is that the
user account has an Associated set of
privileges and so when a process is
owned by a user it has the privileges of
that user and only of that user what
that effectively means is that when you
execute certain system calls those
system calls may fail because the user
which owns the process does not have the
privilege to perform that action for
example if the user which owns the
process does not have the privilege to
write to a certain file
then any attempt to write to that file
will fail in most UNIX systems the
accounts on the system are all listed in
the file called / HC / password Etsy is
a standard directory which is sort of a
grab bag of things well hence the name
but it's mainly for configuration files
the user account given the ID number
zero is a special account called the
root user or the super user and this
user account is special because it's
allowed to do anything at once so when a
process is running with the privileges
of the super user account system calls
will never fail for privileged reasons
the super user is always privileged to
do anything at once now somewhat
confusingly associated with each process
is not just one user ID that is the user
ID of the owner of the process but
actually three different user IDs the
so-called real ID is the ID of the owner
of the process whereas the effective ID
is the ID which actually determines what
privileges this process has and then
finally the saved ID is set by calls to
exec to match the effective ID so the
saved ID effectively keeps a record of
whatever the effective ID was at the
time of the last exec call each file and
directory in contrast is associated with
just one user ID the owner of that
directory or file so here's how the
three user IDs of a process can get
changed first of all the exact system
call may change the effective and saved
IDs and it does this when the binary
file the executable file being loaded
has a special flag set on it called the
set UID bit when this flag is on the
exact executable file the effective and
saved IDs get set to the user ID of the
owner of that executable file so for
example if I exec the executable slash
game slash pong and that file has to set
UID bits set and let's say it's owned by
user 30 then the effective ID and the
saved ID in the process will both get
set to 30
the most common use for the set UID bit
mechanism is that we want a program with
non super user privileges to be able to
run a program with super user privileges
so if that program file that executable
file is owned by the super user and as
the set UID bit on then anytime that
program is executed it has the
privileges of the super user the
processes user IDs can also be set more
directly with the set EU ID and set UID
system calls the EU ID system call
only sets the effective user ID the
limitation with both of these system
calls is that for obvious security
reasons only the root user can invoke
these system calls to set up processes
IDs to anything at once normal processes
processes without super user privileges
can only set the effective ID to match
the Real ID or the saved ID obviously
you wouldn't want to allow any process
to give itself any privileges at once
because then the whole concept of
privileges would become meaningless so
consider what happens when the UNIX
system starts when the UNIX system
starts is just the one process the init
process it's owned by the super user and
it runs with super user privileges the
anit process then spawns a login process
basically a process that just prompts a
human to enter a user account name and
the Associated password to login and
again the login process also runs with
super user privileges once you
successfully login the login process
spawns a shell process that is some sort
of interface process either command-line
or graphical user interface and that
shell is owned by your user account the
user who just logged in and it runs with
the limited privileges of your user
account so how exactly do we get these
new processes well again an it is the
first process run by the system so it's
just started automatically but from
there and it Forks itself and then calls
exec to run the login program which upon
a successful login will fork itself and
then call set UID to set the user IDs to
that of the user that just logged in and
then call exec to run the shell once a
user has a shell they can then at the
command line or at the graphical user
interface spawn other programs which
will be Forks of that shell process
itself and so those processes will
inherit the same owner however any
program which is exact that has the set
UID bit set it's going to run with
different privileges that's going to run
with the privileges of whatever user
owns that executable and as mentioned
most commonly this is used to run
programs with super user privileges
though that's not always the case it's
actually quite common for some programs
when installed on the system
to actually create their own user
account and then when that program is
run it is run with the privileges of its
own user account one thing this allows
the program is to have some files that
are all to itself that no one else can
touch except the super user so just be
clear that user accounts while we
commonly think of them as associated
with actual people they don't
necessarily really have to be associated
with anyone or in fact anything a user
account is really just an arbitrary
number representing some set of
privileges in addition to user accounts
UNIX systems also have a concept of user
groups which are defined in a file
called slash Etsy slash group a user
group as the name implies is simply an
association of user accounts and these
groups are non-exclusive so a single
user account can belong to multiple
groups though actually one of the groups
associated with the user account is
considered its primary group in addition
files and directories are not just owned
by one user they're also owned by one
group and each process not only has
three user IDs that has three group IDs
the real group ID the affective group ID
and the saved group ID and these IDs are
all set basically just like with the
user IDs except there is a set GID bit
on executable files and the system calls
to directly set these group IDs are
called set eg ID and set GID
groups mainly exists so that we can
designate a set of user accounts rather
than just one user account to have
privileges with a file or directory and
truth' groups are actually almost sort
of a legacy feature of UNIX systems
they're traditionally part of UNIX
because in the early days UNIX was
primarily used as a multi-user system
where you had one computer with many
different people all logging in through
terminals to the same system and so it
was thought UNIX needed some sort of
inbuilt mechanism to group users
together but for various reasons that
model of computing is really kind of
out-of-date you typically just don't
have UNIX systems where a whole bunch of
different people are logging into the
same system everyone has their own
system now changing the paradigm so the
UNIX concept of user groups is just not
as relevant as it once
was associated with each file and each
directory are actually nine different
permissions these nine permissions are
grouped into three so-called classes
there's a user class a group class and
an other class and for each class there
is a read permission a right to
permission and an execute permission are
for read W for ripe and X for execute
and each one of these permissions is
either on or off set or unset and so for
example when the read permission in the
user class is on when it's set that
means that the user which owns that file
or directory' is allowed to read that
file or directory' which class of
permissions applies to a process is
determined by the simple rule if the
user ID of the file or directory matches
the effective user ID in the process
then the user class applies if that's
not the case but the group ID of the
file or directory matches the effective
group idea of the process then the group
class applies and if that's not the case
then it defaults to the other class so
you first need to understand which class
applies in your particular scenario but
the question then is what exactly do
these read write and execute permissions
mean well in the case of files it's
fairly obvious when you can read a file
that means you can actually read the
bytes of the file that is its contents
the write permission means you can
actually modify the bytes of the file
and you can also expand the file out
size or shrink it in size and the
execute permission means that when you
call an exec you can specify that file
as the file to exec without this
permission the call to exec would fail
in the case of directories these
permissions are a bit less intuitive the
read permission means that you can see
all the names of the files and
directories which that directory
contains the write permission means you
can modify this listing you can remove
or rename any of the files or
directories in that directory or you can
add new files and directories into that
directory the execute permission on
directories is the most confusing
because it really doesn't have much to
do with execution when you don't have
execute permission on a directory that
effectively means you can't use that
directory in any file path any system
call with that directory
in the file path will fail so consider
for example this file path if we do not
have execute permission on the directory
Taft then we can't use this file path
and in a system call I actually have to
add a caveat to that if the directory
without execute permission is the last
component on a file path if we're that
is if the file path points to that
directory itself then it's ok it's only
we will try to use the directory and a
file path to get at stuff inside that
directory does it fail so for the file
path slash Adam slash theft the execute
permission of Taft itself is not
relevant if we had read or write
permission on the Taft directory even if
we don't have execute permission we can
still read and modify that directory we
just can't actually touch anything which
that directory contains let's link to
note here about file and directory
permissions is that by convention when
you see a listing of the content of a
directory you'll see the nine
permissions listed in this format where
it's the first the user class the group
class on the other class and where the
letter is present that means the
permission is on but where there's add
action instead that means it's off so
say in the top example here slash Adam
slash Lincoln that file has the write
permission disabled in all three classes
also by convention the permissions for a
directory will be preceded by the letter
D to indicate that this is a directory
English (auto-generated)
Unix system calls