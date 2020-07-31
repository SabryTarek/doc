System initialistion (Boot)
----------------------------------
----------------------------------

Q: How a proccessor see memory
A: array of bites numberd with hexadicemal
#volatile: ذاكرة بتفتكر البيانات طالما كانت متصلة بالكهرباء و عند فصل الكهرباء تنسى تلك البيانات
#nanvolatile: ذاكرة بتفتكر البيانات سواء كانت متصلة بالكهرباءأو لا
Memory Concepts (Technologies) :-
- RAM & ROM
- EPROM
- E^2ROM
- FLASH MEMORY
- RDRAM
- SDRAM
- volatile & nanvolatile



983040 : 1028575 nanvolatile
firmware : program storage at nanvolatile
firmware tytpes :
- BIOS : compact 1982
- UEFI : intel 2009 2011
- WHEN YOU CONNECT YOUR COMPUTER WITH THE ELECTERCY firmware will intialize your devices (screen, keyboard, mouse, ....) to intialize your oprating system the firmware will call BOOTLOODER whoch store in byte zero in harddisk
- BOOTLOODER: 



NUM|ptogram|store on|Type|Functionality
------|----------|---------|-----|---------------
1|electercity|||power
2|processor|||
3|firmware|memory|BIOS- UEFI|intialize{test}{check} your devices (screen, keyboard, mouse,memory size, network card, ....) to intialize your oprating system the firmware will call BOOTLOODER whoch store in byte zero in harddisk
4|bootmanager|harddisk|Grub|get user to chose oprating system by chose his bootloader
5|bootloader|||intialize the oprating system{kernel}
6|kernal|harddisk{/boot/vmLinux}||intialize scree
7|intialization system|harddisk|sys v init{/etc/inittab}  - systemd|


Grub : make by linux . his old name is guru {hutu installer} 
when i co
tab stands to table

```sys v init```
---------------
---------------
windows :- mode
init :- run level
systemd :- target

- depend on ```run levels``` consist of 7 run levels
	- 0 : halt (poweroff)
	- 1 : Single user mod = halt + run single console -> using in tarooble shooting give you root permessions without ask to root password or sudo 
	- 2 : multi user mode (CLI) without GUI or NFS 
	- 3 :  multi user mode (CLI) without GUI -> servers
	- 4 : custom for user
	- 5 : multi user mode (CLI) with GUI -> desktops
	- 6 : Reboot

systemd targets :-

- poweroff (0)
- reboot (6)
- graphical.target (5)
- multi-user.target (3)
- rescue.target (1)





systemctl set-default multi-user.target






Lable:run level(s):Defult:::::::



XWindows VS Wayland : Graphical user interface to connect remotly

``Systemd``
--------------
--------------

> ``systemctl #command #programName|| #programName.service``

systemctl status httpd
		restart 
		

commands :-
- start
- stop
- status
- restart
- enable : service work by defult after you restart



bootloader 
BIOS| UEFI
------|------
sector 0 on disk




sector 0 on disk{MBR} = bootloader + partition table + signture
				= 0:445 + 446:509 + (510, 511)
				= 446 byte + 64 byte + 2 byte
				=		+4 partition table+ magic number (55AA) is a checksum for MBR

signture(55AA) : to sure this sector is MBR

Extented partition : is a format {type} for partition like FAT. NTFS, LINUX which store his partition table in the first sector at a partition to divide it  to 4 partition 

in window : allow for you 1 Extented patition so the maximum number of partitions on one hard disk is 7 partitions

partiton intiry (16 byte)
- 1 byte : status (active, ) i create it or no
- 3 byte : define the first sector in the partition by CHS [deprecated] we miss it for old oparating sys
- 1 byte : partition type code so i can define 256 type like FAT. NTFS, LINUX, Extented
- 3 byte : define the last sector in the partition by CHS [deprecated]
- 8 byte : free {not used}

when  we use CHS the maximum size for the partition is 500 MB
so we use the last 8 bytes to define partition size by LBA instide of CHS

- 8 byte : define the first sector in the partition by LBA and the sectors number

- we can define the first sector in the partition is sector 1 ,but usallaly we define it from sector 2048



UEFI

- sector 0 : protected MBR 
- 32 sector for partition table = 16 KB
- partition intity 128 byte at least (we can increase them as we need) instead of 16 byte
- so now we have 128 partition




file systerm & formating


file systerm type : the way that metadata is written by it 
file systerm is a partition formating using spacifice filesystem type













if i have a BIOS computer and connect a GPT hard disk with it as a secondary hard it will work normally

to rewrite MBR :-

- windows : fdisk/mbr
- Linux : Grub install script



<hr>
<br>

mounting
-----------
-----------

* / "root" parent of it self
* 









__understanding_Boot_process__
--------------------------------------

BIOS :- Basic Input Output System

- POST -> Power On Self Test -> Detect minimum hardware need to up and cheak its compatablity
- find bootable device and compare its periorty by your settings
- load IPL (Initial Program Loader) a very small code store in Bootable disk try to excuate BootLoader
- kernal load -> load some drivers from initrfs -> mount file system read-only -. remount read-write -> systemd
- systemd/init
- load system services

power ->Boot ->POST & bootable device & IPL -> BootLoader -> Kernal -> systemd/init -> services



BootLoader = 1st stage {usage : call 2nd stage}  -> MBR 
			+ 2nd stage -> /boot





MBR created by Microsoft


Microsoft BootLoader = NT Loader (NTLDR)
Linux BootLoader = Grub


Karnel = karnel 
	   + [(initrd)-> "init ram drive" (init ramfs)-> "init ram file system"]-> drivers




systemd
------------
------------
every sevice has a unit file/run script 






systemd enable/disable implementation :-

in : /usr/lib/systemd/system/#sshd#.service 
and symlink at : /etc/systemd/system/#target#.target.want/sshd.service
when you disabled a service , systemd remove a symlink from /etc/systemd/system/
when I should restart my pc in Linux ?
- when I reenable selinux
- upgrade Kernel -> daprecated -> k patch





service is a command interface to /etcinit.d
service sshd restart === etc/init.d/sshd restart

init enable/disable implementation :-


in /etc/init.d
scripts :-
{S,K}001#service_name#

- S->start
- K->kill
- num -> periorty

S






| diff                      | init          | systemd    |
|---------------------------|---------------|------------|
| command:-                 | service       |systemctl   |
| service booting system :- | series        | parelle    |
| use:-                     | shell scripts | unit files |





| init                  | systemd                                                                          |
|-----------------------|----------------------------------------------------------------------------------|
|service crond status   | systemctl status crond                                                           |
|service crond start    | systemctl start crond                                                            |
|service crond stop     | systemctl stop crond                                                             |
|                       | systemctl restart crond -> stop then start service                               |
|                       | systemctl reload crond -> reread configrations files without cutting the session |
|chkconfig crond on/off | systemctl enable/disable crond                                                   |
|                       | systemctl is-enable/active crond                                                 |
|                       | systemctl poweroff                                                               |
|                       | systemctl reboot                                                                 |
|                       | systemctl mask crond                                                             |
|                       | systemctl unmask crond                                                           |
|runlevel               | systemctl get-default                                                            |
|telinit 5/init 5       | systemctl isolate graphical.target                                               |
|                       | systemctl list-units                                                             |
|                       | systemctl list-units-files                                                       |



systemctl = 
- chkconfig --levels=2345 nginx on -> systemctl enable nginx
- rsyslogd -> journald
- 

<br>


systemd -> compatable with init and upstart

init -> upstart{ubuntu} -> systemd{fedora}







active vs enable
------------------
active -> running now
enable -> booting automatclly when system rebooting
#  vendor perset : enable/disable -> defult configration
<br>

systemctl status sshd



<br>


not allow to programs listen to the same port at the same time

----------------------------------------------------------------------------------------------------------------------------------------------------
With Systemd, all services have a unit file. A unit file defines how Systemd should manage the service. It will generally include:
- System dependencies and services which must be running
- Tasks to perform before launching
- How to start the process
- How to stop process
- How to restart the process if it crashes



When using Systemd to launch Docker containers the service file manages the processes via the Docker CLI. You can see the example of starting Postgres here cat postgres.service

[Unit]
Description=PostgreSQL container
Requires=docker.service
After=docker.service
[Service]
Restart=on-failure
RestartSec=10
ExecStartPre=-/usr/bin/docker stop postgres
ExecStartPre=-/usr/bin/docker rm postgres
ExecStart=/usr/bin/docker run --name postgres postgres:alpine
ExecStop=/usr/bin/docker stop postgres
[Install]
WantedBy=multi-user.target

# For Systemd to manage the service, the unit file needs to be in /etc/systemd/system

sudo cp postgres.service /etc/systemd/system
sudo systemctl enable /etc/systemd/system/postgres.service


journalctl --no-pager -u postgres.service



Referance:=> https://www.katacoda.com/courses/coreos/start-container-with-systemd
----------------------------------------------------------------------------------------------------------------------------------------------------
init system:
   - System V init or Sys V (pronounced as 'System Five') => /etc/inittab
   - systemd
   - openrc
   - upstart (initctl)=>  /usr/share/upstart
   - 





   0. kernel
   1. init
   2. bash