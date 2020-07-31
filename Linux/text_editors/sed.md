
- sed‏ (Stream EDitor)
- sed [options] commands [file-to-edit]
- sed '' <file_name> === cat <file_name>
- sed "s/#.*//g" script -> Remove all comments from a file



The name comes from the program ed, as in editor. Ed uses special regex for editing. Sed is the same as ed but it ONLY uses regex for editing. Vi, the text editor, is built ON TOP of ed so you can use all the commands from sed in vi. Vim is BASED ON the idea of vi and all the commands work there too. 
Then there's acme/sam and vis. Regex is a big part of acme and sam because you have to use the mouse otherwise. It uses special regex called plan9 regex. Vis is basically a cut down version of vim that uses the plan9 regex (which is superior). I recommend trying to write scripts in ed instead of using awk, if you learn the sed syntax!﻿The name com












l'd just like to interject for a moment. What you’re referring to as Linux, is in fact, GNU/Linux, or as I’ve recently taken to calling it, GNU plus Linux. Linux is not an operating system unto itself, but rather another free component of a fully functioning GNU system made useful by the GNU corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX.
Many computer users run a modified version of the GNU system every day, without realizing it. Through a peculiar turn of events, the version of GNU which is widely used today is often called “Linux”, and many of its users are not aware that it is basically the GNU system, developed by the GNU Project. There really is a Linux, and these people are using it, but it is just a part of the system they use.
Linux is the kernel: the program in the system that allocates the machine’s resources to the other programs that you run. The kernel is an essential part of an operating system, but useless by itself; it can only function in the context of a complete operating system. Linux is normally used in combination with the GNU operating system: the whole system is basically GNU with Linux added, or GNU/Linux. All the so-called “Linux” distributions are really distributions of GNU/Linux.﻿












I learned computing on Plan 9. And by that I mean, I of course had Linux for like five years before I had Plan 9, but can't for the life of me say I "'learned computing" on it.  (But I did know how to write shell scripts...)

Just go and get Introduction to Operating Systems Abstractions using Plan 9 From Bell Labs ("Nemo's book"). You can probably read it on Linux if you just skip the bits that obviously don't apply to Linux ("do this and this to create a new window with a shell in it...") and stop short of the last chapters which are all about libthread, lib9p, Plan 9 security...﻿I learned co





awk > sed > vi > emacs

fite me irl﻿





"sed 11q" actually prints the 11th line. To quit before the 11th line gets printed you would need to use GNU extension 'Q' ( "sed 11Q" ), or actually use "sed 10q". ( try "seq 20 | sed 10q" vs "seq 20 | sed 11Q" ).﻿






https://www.perl.org
https://perl6.org