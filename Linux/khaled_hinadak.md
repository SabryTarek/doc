microservices
==============

intel clear container
########################### lxc & lxd virtualize container

namespace
mount namespace

two process call each other:
- shared file 
- shared memory
- network


for idx in {1..10}; do echo sleeping | sleep 5; done &

------------------------------------------------------------------------------------------
ip -> bind
port -> forward

ex 0.0.0.0:3000->80/tcp

bind at all addresses of this machine
forward port 3000 at host to port 80 at container

you can collect last two sentences at one only by saying:
open socket

socket ip+port

loopback Adapter 127.0.0.1 the way to connect to any process run at this machine
unix sockets


route roles
nix
cards
hostname


ip route show
local link



whichport="{use_port:-9000}"

while true
do
echo -e -n "HTTP/1.1 200 OK\r\nContent-length: 0\r\nHost: $(hostname)\r\n\r\n" | netcat -l -p "${whichport}"
done


ore os renamed to container linux file system read only if you want use netcat utilty you should download and use image for it


how to limit your container resources


docker depend on two feathers at linux kernel [namespaces:your container scope - cgroups: define limit resources for your container ]

clone syscalls

rename image -> docker tag askdeveloper:v2 sabry/askdeveloper:v2

hcp-kube-svc
hcp-tunnel-e2e





https://www.youtube.com/watch?v=yNwiPxGc1yU&t=23s
https://www.youtube.com/watch?v=KQjRnuwb7is
https://www.youtube.com/watch?v=tLBUC2tZvtU
https://www.youtube.com/watch?v=cNN_tTXABUA
https://www.youtube.com/watch?v=0CGRkXIUM-o&t=660s
https://www.youtube.com/watch?v=2ff-7UTg5rE

https://www.youtube.com/watch?v=t-f9U-tgtb8&t=81s
https://www.youtube.com/watch?v=rNWhXBSncsI
https://www.youtube.com/watch?v=6cwGXxi0nbc


https://www.youtube.com/watch?v=tmnvJe-TkJQ


That's dangerous at times when decompressing as root. I have heard many a stories of people blowing up filesystems on the Host because the command decompressed and replaced the native bin utilities. So .... I would

a) to uncompress the image into a directory
$cpio -i -d -H newc -F initramfs.cpio --no-absolute-filenames

b) then to recompress back into cpio
$find . | cpio -H newc -o > ../initramfs.cpio

apt install squashfs-tools
unsquashfs filesystem.squashfs


Great! I primarily use linux systems with 'contained' file systems like Puppy, Porteus, AntiX and Slitaz. A better understanding of these file systems would be helpful.


grub anf lilio are most common bootloader at hard drive => GRUB/LILO (for x86 CPU), u-boot (for ARM, PowerPC, MIPS)
ioslinux is most comman bootloader at CDs

initrd = initrd.gz = initrd.lz = initfs = rootfs.gz = ramfs
linux = vmlinuz = bzImage
initrd: initial ram disk -> cpio image
very miniscule linux filesystem uncompressed and loaded to ram after bootloader and kernel
- kernel use file on it to mount real filesystem and load the rest of OS
- technically you could pu the full OS inside initrd // => ram distros
- you could technically reconfigure your ubuntu to load the full OS to ram // boot time will increase beacuse you uncompressed the full OS and copy it to the ram
- first root file system image that is mounted at / while the Linux boots.
- The purpose of the initial root file system is to provide kernel modules and necessary utilities that might be needed in order to bring up the real root filesystem.



cpio : just archiving format
- used for initd beacuse other filesystems such as squash filesystem may not installed by the kernel by default

cp initrd.gz ./fs/
gunzip initrd.gz ---
                     + --> zcat initrd.gz | sudo cpio -i
cpio -i < initrd ---
# zcat: like cat commanfd but for zip files
 list content of cpio archive by using command: 
    $ cpio -t < core





https://pastebin.com/jXvWbqjh
thanks for advice Kris. I'm getting strange results. I have rootfs.cpio.gz file. I can easily unpack it your way, than I pack it pack and trying to unpack it again to see the results and getting lots of errors like File or Directory not found. This can be only fixed if I apply -d option which creates missing directories. But unpacking the original rootsfs does not requires this options. The whole Linux distributive is unpacked with all the sub-directories like in your example. So original one I can unpack like you do "zcat rootfs.cpio.gz | cpio -i" but the repacked one only if I do "zcat rootfs.cpio.gz | cpio -id"



unlzma rootfs.gz -S .gz





chroot . bash

mount --bind dev /dev
mount -t proc proc proc
mount -t sysfs sysfs sys
cp /etc/ressolve.conf etc
ping google.com

umount dev
umount proc
umount sys


- mount
- mount.fuse
- mount.lowntfs-3g
- mount.nfs4
- mount.ntfs-3g
- mountpoint
- mount.zfs                                         
- mount.cifs
- mount.glusterfs
- mount.nfs
- mount.ntfs
- mount.ntfs-fuse
- mountstats 




mount core.iso iso // => mount type iso9660
mount -o loop core.iso iso

read-only file system => think about it like CD FS


mount -l -t ext4



sudo npm install wikit -g => search at Wikipedia




I think you might be looking for something like Debootstrap.  It allows you to pull a Debian filesystem down form a server on a current running install of Linux.  It's pretty straight forward.  Choose an empty partition and point Deboot strap at it.  When it's done pulling down the files, install or update your boot loader.
This can be done from pretty much any running distro of Linux, but GRML makes it super simple:
https://www.youtube.com/watch?v=chWw_Z1t_oI




if you have followed the video, use the iso called mini.iso from debian web page (mencioned in the video)
extract it, get the file ldlinux.c32, and put it in the root of your image, next to the other 5 files,
then create the image again with xorriso, 
and run it with qemu it should work.
that happened to me too ;)


mkorrisofs -l -J -no-emul-boot boot-load-size 5 -boot-info-table -b isolinx/isolinux.bin -C isolinux/boot.cat -O mylinux.iso iso
there is mkisofs, genisoimage, and xorriso.  They all work pretty much the same, and by that I mean I'm pretty use the commands are the same.  genisoimage is a fork of mkisofs. 

more info on that:
http://wiki.osdev.org/Mkisofs

data/data/com/termux/files/home