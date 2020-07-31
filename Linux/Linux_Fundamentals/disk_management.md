Disk management
================

``Disk`` is a block acess device not bit acess device
- sector = 512 byte
- ``partition`` is a consigative group of sectors with non over lapping sectors
- MBR: Master Boot Record at sector zero on the disk

- UUID -> every disk have an id hash 16 digit


- mkfs.(ext2|ext3|ext4|zfs|FAT32|NTFS|...) -> make file system (format) -> EX : sudo mkfs.ext4 /dev/sda1

- lsblk -> list blocks =>showing the your partitions


2 TB



- lsblk
- fdisk -l
- fdisk #/dev/sda#


boot swapable
partprobe


mfs.#fat32# #/dev/sda1#


super blocks = partation table copies


special files :-
- /dev/random
- /dev/urandom -> reset
- /dev/zero


dd if=/dev/zero of=/home/bigfile bs=1g count=5

e2fsck #/dev/sda#





windows : flat structure


mount -t #xfs# #/dev/sda1# mount point
umount source, mount point


blkid
mount UUID="jhgf5567ftghb" mount point     ----> " " is optional

e2lable /dev/sda1 newdisk
mount LABLE="newdisk" mount point     ----> " " is optional






defaults = re,exec



mount -a                               -> a -> all


/etc/mtab

cfdisk #/dev/sda1#





RAID
=====
 HW RAID




RAID Levels :-
- RAID 0 -> strpping  -> series ->fast in reading and writing ->1
- RAID 1 ->mirroring -> series ->fast in reading and writing ->2-> it numbers
- RAID 5 -> strpping with distributed partiy -> series ->slow in reading and writing ->3 ->1
- RAID 6 -> strpping with distributed dual partiy -> series ->slow in reading and writing ->3 ->2
- RAID 10 -> strpping with distributed dual partiy -> series ->slow in reading and writing ->4 ->2


mdadm -> multiple dvice admin
mdadm --create /dev/md0 --level 5 --raid-devices=3 /dev/sdb /dev/sdc /dev/sdd

/proc/mdstat
watch cat /proc/mdstat     -> watch -> 2 sec


mdadm /dev/md0 --add /dev/sdd
mdadm --stop /dev/md0

mdadm --assemble --scan
mdadm --zero-superblock /dev/sdb /dev/sdc /dev/sdd












LVM
====
Logical Volume Managment

- physical patition
- convert pp to pv
- create vg from pv
- create lv from vg
- create file system
- mount lv



- pp = "physical patition"
- pv = "physical volume"
- pe= "physical extend"
- vg = "volume group"
- lv = "logical volume"


- pvcreate /dev/sdb2 /dev/sdc
- pvs -> physical volume scan
- pvdisplay
- pvremove /dev/sdb2 /dev/sdc



- vgcreate data /dev/sdb2 /dev/sdc
- vgs -> volume group scan
- vgdisplay
- vgremove /dev/data/



- lvcreate --size 20g --name oracle data
- lvs -> logical volume scan
- lvdisplay
- lvremove /dev/data/orecal/



lvextend --size =+20G /dev/data/orcale/  -> the only process that not need to umout before it 
resize2fs /dev/data/orcale/  == lvresize /dev/data/orcale/ -->


device mapper


e2fsck /dev/data/oracle/
resize2fs /dev/data/orcale/ 30G
lvreduce --length -5G /dev/data/orcale/


leaniar striping LVM



> swap


__swap partition__ 

/proc/swaps




active steps :-
- create disk for swap
- mkswap /dev/data/lvswap
- swapon /dev/data/lvswap
- in ftab:      /dev/data/lvswap   swap   swap   defaults   0   0

<br>

dactive steps :-

- in ftab:   
- swapoff /dev/data/lvswap

__swap file__ 

active steps :-

- dd if=/dev/zero of=/home/myswap bs=1M count=2048
- mkswap /home/myswap
- swapon /home/myswap
- in ftab:     /home/myswap    swap   swap   defaults   0   0


<br>

dactive steps :-

- in ftab:     
- swapoff /home/myswap
- rm /home/myswap




Quota
======


Quota vs cgroups

- file sys mount with quota
- enable quota && quota database


recreate Quota



mount -0 usrquta , grpquta /dev


Quota vs cgroups
file sys mount with quota && enable quota && quota database
recreate Quota



df -h
lsof ->ls of -> أيه اللي شغال في ال path








