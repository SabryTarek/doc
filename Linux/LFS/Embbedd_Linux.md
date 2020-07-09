Embedded Systems
================
In This series we look over Linux File-systems, boot loaders and basic boot processes as well as different ways to do system installs for different CPU architectures.
-----------------------------------------------------------------------------------------------------------
- Auto Motive
- Communication
-----------------------------------------------------------------------------------------------------------
> Embedded Systems:
- Software/Firmware
- Hardware
  - Digital
  - Analog
-----------------------------------------------------------------------------------------------------------
> Skills:
- Soft
  - self learning === self study
- Hard/Technical
  - C Programming Language
  - Microcontroller
    - MicroChip/PIC
    - Atmel/AVR
    - ARM/Cortex M
  - MicroProcessors/Computer Architecture
  - OS Concepts
    - RTOS (Real Time Operating System)
    - Embedded Linux
-----------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------

kernal 
- Hurd (in GNU Project)
- first multi threading kernel
-----------------------------------------------------------------------------------------------------------



Gnome -> GTK
KDE -> QT 

QT -> more simple - milti cross

-----------------------------------------------------------------------------------------------------------
building | compiling
- static -> kernel
- dynamic depend om linker


kernel -> static compilation
-----------------------------------------------------------------------------------------------------------
> Reference:
- https://www.embedded.com
- https://www.designnews.com
- Linkedin
-----------------------------------------------------------------------------------------------------------
ARM is less
- chips
- power
- instractions


(native - cross) compiler


cross compiler: compile your code to anther target 
-----------------------------------------------------------------------------------------------------------

toolchain = GCC Compiler + Kernel Headers = C/C++ libs + binutils + GDB (optional)
toolchain :- compiler + linker + assembler + debugger + 
            === IDE + Programmer + Memory Inspector + Hardware Debugger
- SDK -> android

host
target



Hard Disk -> EEPROM
RAM -> SRAM





# unix was written on a 16 bit DEC PDP-11 at bell laboratories

used to execute the arguments as a shell command on unix or linux system
$ COMMAND="ls -lrt"

$ eval $COMMAND










> Linux Utilities:
- GNU Programs
    - Coreutiles
    - Binutiles

> Embedded Linux:
- Yocto
- Buildroot
- OpenWRT

Debian Woody shipped with the fileutils, shellutils, and textutils packages. Sarge shipped with coreutils. In Sarge and Etch the fileutils, shellutils, and textutils were dummy transition packages to facilitate uggrades. In Etch and later they may be safely removed.
----------------------------------------------------------------------------------------------------------------
> File utilities:
GNU file utilities

The tools supplied with this package are:

chgrp - Changes file group ownership.

?chown - Changes file ownership.

?chmod - Changes file permissions.

?cp - Copies files.

?dd - Copies and converts a file.

?df - Shows disk free space on filesystems.

?dir - Gives a brief directory listing.

?dircolors - Setup program for the color output of GNU ls.

?du - Shows disk usage on filesystems.

?install - Copies file and sets its permissions.

?link - Creates a single file hardlink

ln - Creates file links.

?ls - Lists directory contents.

?mkdir - Creates directories.

?mkfifo - Creates FIFOs (named pipes).

?mknod - Creates special files.

?mv - Moves files.

?rm - Removes (deletes) files.

?rmdir - Removes empty directories.

?shred - Destroy data in files.

?sync - Synchronizes filesystem buffers and disk.

?touch - Changes file timestamps.

?unlink - Removes a single file or a hardlink

?vdir - Long directory listing.
----------------------------------------------------------------------------------------------------------------
> Shell utilities:
The tools supplied with this package are:

[ - Check file types and compare values
?basename - Removes the path prefix from a given pathname.

chroot - Changes the root directory.

date - Prints/sets the system date and time.
dirname - Removes the last level or filename from a given pathname.
echo - Prints a line of text.
env - Displays/modifies the environment.
expr - Evaluates expressions.
factor - Prints prime factors.
false - Returns an unsuccessful exit status.
groups - Print the groups that the user is a member of.
hostid - Print the numeric identifier for the current host
hostname - Print or set the machine name.
id - Print real/effective ?uid/?gid.

logname - Print current login name.
nice - Modify scheduling priority.
nohup - Allows a command to continue running after logging out.
pathchk - Check file name portability.
pinky - Lightweight finger
printenv - Prints environment variables.
printf - Formats and prints data.
pwd - Print the current working directory.
seq - Print numeric sequences.
sleep - Suspends execution for a specified time.
stty - Print/change terminal settings.
su - Allows you to adopt the id of another user or superuser.
tee - Sends output to multiple files.
test - Evaluates an expression.
true - Returns a successful exit status.
tty - Print terminal name.
uname - Print system information.
users - Print current user names.
who - Print a list of all users currently logged in.
whoami - Print effective user id.
yes - Print a string repeatedly.

----------------------------------------------------------------------------------------------------------------
> Text utilities:
The tools supplied with this package are:

- cat - concatenate files and print to the standard output
- cksum - checksum and count the bytes in a file
- comm - compare two sorted files line by line
- csplit - split a file into sections determined by context lines
- cut - remove sections from each line of files
- expand - convert tabs to spaces
- fmt - simple optimal text formatter
- fold - wrap each input line to fit in specified width
- head - output the first part of files
- join - join lines of two files on a common field
- md5sum - compute and check MD5 message digest
- nl - number lines of files
- od - dump files in octal and other formats
- paste - merge lines of files
- pr - convert text files for printing
- ptx - produce a permuted index of file contents
- sort - sort lines of text files
- split - split a file into pieces
- sum - checksum and count the blocks in a file
- tac - concatenate and print files in reverse
- tail - output the last part of files
- tr - translate or delete characters
- tsort - perform topological sort
- unexpand - convert spaces to tabs
- uniq - remove duplicate lines from a sorted file
- wc - print the number of bytes, words, and lines in files
----------------------------------------------------------------------------------------------------------------
Package: moreutils (0.62-1)
additional Unix utilities
This is a growing collection of the Unix tools that nobody thought to write long ago, when Unix was young.

So far, it includes the following utilities:

 - chronic: runs a command quietly unless it fails
 - combine: combine the lines in two files using boolean operations
 - errno: look up errno names and descriptions
 - ifdata: get network interface info without parsing ifconfig output
 - ifne: run a program if the standard input is not empty
 - isutf8: check if a file or standard input is utf-8
 - lckdo: execute a program with a lock held
 - mispipe: pipe two commands, returning the exit status of the first
 - parallel: run multiple jobs at once
 - pee: tee standard input to pipes
 - sponge: soak up standard input and write to a file
 - ts: timestamp standard input
 - vidir: edit a directory in your text editor
 - vipe: insert a text editor into a pipe
 - zrun: automatically uncompress arguments to command
----------------------------------------------------------------------------------------------------------------
> BASH_BUILTINS(1):
  - bash
  - :
  - .
  - [
  - alias
  - bg
  - bind
  - break
  - builtin
  - caller
  - cd
  - command
  - compgen
  - complete
  - compopt
  - continue
  - declare
  - dirs
  - disown
  - echo
  - enable
  - eval
  - exec
  - exit
  - export
  - false
  - fc
  - fg
  - getopts
  - hash
  - help
  - history
  - jobs
  - kill
  - let
  - local
  - logout
  - mapfile
  - popd
  - printf
  - pushd
  - pwd
  - read
  - readonly
  - return
  - set
  - shift
  - shopt
  - source
  - suspend
  - test
  - times
  - trap
  - true
  - type
  - typeset
  - ulimit
  - umask
  - unalias
  - unset
  - wait


built-in commands
- see bash(1)
----------------------------------------------------------------------------------------------------------------
> GNU Diffutils:
• Invoking cmp:	  	    Compare two files byte by byte.
• Invoking diff:	  	Compare two files line by line.
• Invoking diff3:	  	Compare three files line by line.
• Invoking patch:	  	Apply a diff file to an original.
• Invoking sdiff:	  	Side-by-side merge of file differences.

----------------------------------------------------------------------------------------------------------------
> busybox:
λ busybox64 --list
[
[[
ar
arch
ash
awk
base64
basename
bash
bunzip2
busybox
bzcat
bzip2
cal
cat
chmod
cksum
clear
cmp
comm
cp
cpio
cut
date
dc
dd
df
diff
dirname
dos2unix
dpkg
dpkg-deb
du
echo
ed
egrep
env
expand
expr
factor
false
fgrep
find
fold
fsync
ftpget
ftpput
getopt
grep
groups
gunzip
gzip
hd
head
hexdump
httpd
iconv
id
inotifyd
ipcalc
kill
killall
less
link
ln
logname
ls
lzcat
lzma
lzop
lzopcat
man
md5sum
mkdir
mktemp
mv
nc
nl
od
paste
patch
pgrep
pidof
pipe_progress
pkill
printenv
printf
ps
pwd
readlink
realpath
reset
rev
rm
rmdir
rpm
rpm2cpio
sed
seq
sh
sha1sum
sha256sum
sha3sum
sha512sum
shred
shuf
sleep
sort
split
ssl_client
stat
strings
su
sum
tac
tail
tar
tee
test
time
timeout
touch
tr
true
truncate
ts
ttysize
uname
uncompress
unexpand
uniq
unix2dos
unlink
unlzma
unlzop
unxz
unzip
usleep
uudecode
uuencode
vi
watch
wc
wget
which
whoami
whois
xargs
xxd
xz
xzcat
yes
zcat
----------------------------------------------------------------------------------------------------------------

# /etc/motd



- MTK"media tech": SP flash tool
- ARM: ARM Download
- Sumsoung (xilian): AUDION
- SnapDragon(Xami):
- karen Huawi

- w3m with w3m-image -> view actual pictures in your terminal instead of just ascii ones
- eog ' eye of GNOME
- FISH (Friendly Interactive Shell) by Bash

- Room
- flashing
- root
- Stock Room
- Custom Room

smsony.com -> Sumsoung - sony
- Data
- NVRam -> serial - mac adress - imei ->
- Boot




magicplus -> lenovo

mobile: pro | lite
--------------------------------
- Xami -> mi ui
    - a
        - a1
        - a2
        - a2 lite
    - note
    - x

    - mix
    - max
    - s -> 
        - s2
    - pocho
        - pocho
    - redmi
- meizu -> flyme
--------------------------------
> : -> Koria
sony -> 
Sumsoung -> tool wizard
--------------------------------
> traction: -> china
- techo -> Hi os
    - c -> camera
- infinx -> xui -> xos
    - s -> camera
- itel
--------------------------------
> :
- oppo -> clor os -> apple توكيل
    - a
    - f
        - f1 
        - f2
        - f3 
        - f4 
        - f5 
        - f7 
        - f9
        - f11
    - 
- oneplus
- relme

--------------------------------
> : -> china
- Huawi
    - mate
        - mate 10
        - mate 10 lite
    - nova
    - p
        - p9
        - p9 lite
        - p10
- honor
--------------------------------
- lenovo -> lenovo
- Moto => motorella

--------------------------------
lava -> india
--------------------------------
- HTC
--------------------------------

> Google: -> USA
- Pixel -> Row android
- Nexus -> Row android
--------------------------------
Apple: -> USA
- iPad
- iPod
- iPhone -> IOS
    - iPhone
    - iPhone
    - iPhone
    - iPhone
    - iPhone
    - iPhone
    - iPhone
    - iPhone
    - iPhone 8 plus
    - iPhone X
    - iPhone ten s max

- Mac
    - Mac Book
    - Mac BookAir
- AirPods
--------------------------------
> system UI:
- Row android
-  -> 
- emojon UI -> - Huawi, honor
- 
 




- Nova luncher
- uluncher




--------------------------------
- Dell
--------------------------------
- Lenovo
    - ThinkPad
    - Legion

--------------------------------
- MSI
--------------------------------
- Alian ware
--------------------------------
- HP
    - EliteBook
    - Pavilion
    - OMEN
--------------------------------
- asus
--------------------------------
- aser
--------------------------------
- fejetsu
--------------------------------
- Sary
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- 
--------------------------------
- [jumia](https://www.jumia.com.eg/ar/)
- [2B](https://www.jumia.com.eg/ar/)
- [souq](https://egypt.souq.com/eg-ar/)
--------------------------------
- 
--------------------------------
- 
--------------------------------
> Screen
--------------------------------
> CPU
--------------------------------

--------------------------------
- 
--------------------------------
- 

- bash built-in function/utility
- tac -> reversre test lines (first being last and last being first)














An intensive Embedded Linux workshop
Embedded System Foundation and Life Makers "صناع الحياة"

Instructor:
Eng\ Sherif Mousa
- Application Developer at IBM
- Embedded Linux instructor at ITI 2014.

Workshop Material
https://drive.google.com/folderview?i...

Workshop contents:
- How Linux OS was built.
- Linux terminal & commands.
- Understand the difference between desktop versions of Linux & embedded ones.
- Learn new expressions (Cross-Compiling, Tool-Chain, .....).
- How to deal with Linux source code programs.
- Get and compile Linux kernel from scratch.
- Build a custom root file-system for Linux.
- Work with H.W. emulators for other architectures (qemu)
- Build your own full Linux distribution for any computer architecture.
- How to work with development kits "Porting".
- Build full embedded Linux distro using automated tools (Buildroot, Yocto ...)
And more ..........

Embedded System Foundation:
Facebook Page: www.facebook.com/esfEg
Facebook Group: www.facebook.com/groups/ESF.FEE
E-mail: esf.egy.2013@gmail.com



sys calls

24 precor wiki shearch
150 arch




configer GCC to 


every precessor arch has:
- resister:
  - name
  - address
- assembly instraction table


create your own "Minimal Linux Distribution" on a USB Flash memory
> X86:
- MiniOS
  - kernel -> ready-made (compiled)
    - vmlinux
- linux command
  - source code
  - busybox





------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1. create Root FileSystem /
- mkdir -vp ~/MiniOS/{tools,rootfs/{boot/{grub},root,dev,etc/{init.d},bin,sbin,lib,proc,media,sys,tmp,var,usr/{bin,sbin,lib}}}
- chmod 1777 tmp
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
2. Configuration Files & Startup Scripts
- cd /etc
- touch passwd shadow group inittab rc profile
- cat root:x:0: >> group
- cat root:x:0:0:root:/root:/bin/sh >> passwd
- cat root::10:0:0:0::: >> shadow
- cat 
    null::sysinit:/bin/mount -t proc proc /proc
    null::sysinit:/bin/mkdir -p /dev/pts
    null::sysinit:/bin/mount –a
    null::sysinit:/sbin/ifconfig lo 127.0.0.1 up
    ::sysinit:/etc/rc
    tty1::respawn:/sbin/getty 38400 tty1
    null::shutdown:/bin/umount -a -r
>rootfs> inittab


- cat
    #!/bin/sh
    PATH=/sbin:/bin:/usr/sbin:/usr/bin
    export PATH
    /sbin/hwclock -s
    /bin/hostname EmbeddedLinuxMiniOS
    /bin/echo " "
    /bin/echo " Y A T T A "
    /bin/echo " My First Embedded Linux "
    /bin/echo " "
>> rc

- chmod +x rc

- cat
    export PS1='EmbeddedLinuxMiniOS #'
    export USER=`id -un`
    export HISTSIZE=1000
    echo "ya welcome ya welcome ^__^"
    echo " "
>> profile

- cd .
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
3. copy the kernel & initrd files from /boot => cp /boot/vmlinuz<> /boot/initrd<> MiniOS/rootfs/boot/
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
4. Linux Basic Common Commands

• Any Linux distribution need some basic commands to operate correctly, like (mount, ls, pwd, ifconfig, cd, mkdir, touch, file, rm, vi) and more. We need these commands, so there    are two ways to get them:
    - Getting the source code for each command needed, compile it separately and copy it to any bin directory inside the distribution.
    - Using [BusyBox](https://busybox.net/): combines tiny versions of many common UNIX utilities into a single small executable. It provides replacements for most of the utilities you usually find in GNU fileutils, shellutils, etc. The utilities in BusyBox generally have fewer options than their full-featured GNU cousins; however, the options that are included provide the expected functionality and behave very much like their GNU counterparts. BusyBox provides a fairly complete environment for any small or embedded system.

- download from [busybox.net](https://busybox.net/)
- tar xvf busybox
- cd busybox
- make defconfig
- make menuconfig
- make CONFIG_PREFIX=/home/shatrix/minios/rootfs install
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
5. BootLoader

- mkdir /boot/grub
- touch grub.cfg
- cat
    set menu_color_normal=yellow/red
    set menu_color_highlight=black/light-gray
    menuentry 'LINUX MiniOS FOR X86' {
    set root=(hd0,1)
    linux /boot/vmlinuz-3.2.0-57-generic-pae
    root=UUID=<disk-uuid> rw
    initrd /boot/initrd.img-3.2.0-57-generic-pae
    }
>> grub.cfg
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
6. putting system on flash

umount 
mkfs.ext2 /dev/sd[X]1
- mkdir /media/flash/
- mount /dev/sdb1 /media/flash/

- cd /MiniOS/system
- cp -a * /media/flash/

- sudo grub-install --root-directory=/media/flash /dev/sdb



blkid
sed 's/<disk-uuid>/word2/g' /media/flash/boot/grub/grub.cfg
------------------------------------------------------------------------------------------------------------------------------------------------------------------------


real time:
    - soft real time -> limited with start time only
    - hard real time -> limited with both start time and end time



PowerPC -> Apple 1997 (BSD-based) -> intel # reason for hackntosh
kernel doesn't support real time by defalt but you can extend it by adding some modules
initrd -> contain device driver which add to kernel after system starting



karem:
- building embedded linux systems
- device driver for linux









LAIN-chan

buildroot -> configration to custumize your tool chain (like busybox) -> build:
- download selected packages
- build every package
- integrate=combin all packages
- 







diff
- diff -u --color <file1> <file2>
- you can diff 2 directories too, using the -r flag (for recursive diffing) and -N (to treat absent files as empty)
- uses the longest common subsequence problem algorithm
comm
patch




Hi I have a lan turtle and bash bunny. My question is... I am sick of scammers calling my home for remote access via team viewer. So I desided that I want to set a trap so that it reverses the process and in turn do them over. I think it's  about time they got a taste of there own meds. So I am going to setup a raspberry pi based trap any tips on how I could  reverse the remote access on to there pc. I know I will have to limit what they can do but, I was thinking  about  setting a few other traps, like an exe that looks like a zip file that says bank details. We will see when time comes. Any advice on any of the above will be much appreciated and thanks.








staggered release distro like Ubuntu
"WHY CAN'T YOU HAVE AN AUTOMATIC INSTALLER!?"
manual instliation  














matthew cooper
2 years ago
Could you please make a tutorial on how to connect  to wifi? Should i use nm-applet (network manager and systray) or stick with command line?﻿




---------------------------------------------------------------------------------------------------------------------------------------------------------
Emmbedd diploma:
    - C/DS
    - interfacing
    - rtos
    - testing -> ISTQB
    - tooling
    - sw
    - automotive (conniction between micro controller)
        - CAN
        - LIN


DSP -> rasp PI










computing system


limited tasks
limited resources




------------------------------------------------------------------------------------------------------------------------------------------------------
crosstool-ng -> a tool i used it to configure and build cross toolchain



- git clone https://github.com/crosstool-ng/crosstool-ng/
- 

------------------------------------------------------------------------------------------------------------------------------------------------------
[Buildroot](https://buildroot.org/)
===================================



- make defconfing => copy defult configration to /.config file
- make menuconfig NCURSES || make xconfig => QT4 version of menuconfig















kernel-like menuconfig (configuration interfaces) 
- menuconfig -> NCURSES version of menuconfig
- gconfig -> GTK version of menuconfig
- xconfig -> QT version of menuconfig





- make savedefconfig




busybox
buildroot
yocto
linux kernel
    - compiling
    - patching



[BUILDING MINIMAL DOCKER IMAGES WITH BUILDROOT](https://slides.com/aukewillem/minimal-docker/fullscreen#/)


 Buildroot is a set of Makefiles and patches that [...] can generate any or all of a cross-compilation toolchain, a root filesystem, a kernel image and a bootloader image


 ------------------------------------------------------------------------------------------------------------------------------------------------------
[Yocto](https://www.yoctoproject.org/)
======================================

Ubutnu dev packages for Yocto development 

apt­ install -y gawk wget git­core diffstat unzip texinfo gcc­-multilib build­-essential chrpath socat libsdl1.2­dev xterm minicom vim gparted


git clone -b zeus git://git.yoctoproject.org/poky.git


> Yocto First Shot


1. Download Yocto source => https://www.yoctoproject.org/downloads
    – Current final release: YP Core - Jethro 2.0
Untar the downloaded file
$ tar xvf poky­jethro­14.0.0.tar.bz2

Source the poky default environment script
–

$ vim conf/local.conf
Start the build process (and wait ....)
–

build
Configure (if you want) your conf file:
–

$ source poky­jethro­14.0.0/oe­init­build­env
$ bitbake core­-image-­minimal
Run Qemu emulator with output image
–
$ runqemu qemux86













$ source oe-init-build-env first-build

    You had no conf/local.conf file. This configuration file has therefore been
    created for you with some default values. You may wish to edit it to, for
    example, select a different MACHINE (target hardware). See conf/local.conf
    for more information as common configuration options are commented.

    You had no conf/bblayers.conf file. This configuration file has therefore been
    created for you with some default values. To add additional metadata layers
    into your configuration please add entries to conf/bblayers.conf.

    The Yocto Project has extensive documentation about OE including a reference
    manual which can be found at:
        http://yoctoproject.org/documentation

    For more information about OpenEmbedded see their website:
        http://www.openembedded.org/


    ### Shell environment set up for builds. ###

    You can now run 'bitbake <target>'

    Common targets are:
        core-image-minimal
        core-image-sato
        meta-toolchain
        meta-ide-support

    You can also run generated qemu images with a command like 'runqemu qemux86'

    Other commonly useful commands are:
    - 'devtool' and 'recipetool' handle common recipe tasks
    - 'bitbake-layers' handles common layer tasks
    - 'oe-pkgdata-util' handles common target package tasks
