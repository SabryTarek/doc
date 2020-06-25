File Systems
============
- FAT(File Alocated Table)
- XFAT
- FAT32
- NTFS



- squashfs -> live CDs file system
- .img && .iso -> is a file system for CDs -> read-only

| OS Layers  | Content                             |
|------------|-------------------------------------|
| User Plane | Device File (/dev/sda)              |
| Kernel     | Device Driver (Block Device Driver) |
| Hardware   | Hard Disk                           |



Storage Device (Storage Media):
- Hard Disk
    - HDD
    - SSd
- Flash Memory
- SD Card
- Memory
- Network



User Applications uses Sys Calls to talk to Kernel


Character Device Write/Read Byte by Byte from Storage Media
Block Device Write/Read Block by Block from Storage Media





you can unmount any filesystem at ant time excpt root filesystem (/)






HardDisk
FileSystems
- FAT
- EXFAT
- FAT32
- NTFS

- EXT
- EXT1
- EXT2
- EXT3
- EXT4
- EXT5

- BtrFS
- ZFS
- XFS

- CephFS
- GlusterFS
- RAID
- NAS
- LVM

Virtual FileSystems:
- NFS
- AuFS
- UnionFS
- OverlayFS
- CryptFS
- LukFS
- MargerFS
- mhddfs
- FUSE (User Space FileSystem) => apt install fuse ==> fuse libfuse2=c libaray has a lots of languages binds
    - Gmail
    - Gdrive
    - Git
    - SSHFS
    - 







FileSystems
    * Real FileSystems
    * Virtual FileSystems

    * HardDisk
    * RAM
        - initrd
        - TmpFS
        - RamFS
    * CD
    * FlopyDisk
    * Flash

    * Read-Only:ro
        - SquashFS
        - RootFS
    * Read-Write:rw
    * Copy-On-Write




overlayfs

has been merged in kernel 3.18-rc2


---------------------------------------------------------------------------------------------------
Why use mergerfs over mhddfs?
mhddfs is no longer maintained and has some known stability and security issues (see below). MergerFS provides a superset of mhddfs' features and should offer the same or maybe better performance.

Below is an example of mhddfs and mergerfs setup to work similarly.
	- mhddfs -o mlimit=4G,allow_other /mnt/drive1,/mnt/drive2 /mnt/pool
	- mergerfs -o minfreespace=4G,allow_other,category.create=ff /mnt/drive1:/mnt/drive2 /mnt/pool

Why use mergerfs over aufs?
aufs is mostly abandoned and no longer available in many distros.

While aufs can offer better peak performance mergerfs provides more configurability and is generally easier to use. mergerfs however does not offer the overlay / copy-on-write (CoW) features which aufs and overlayfs have.

Why use mergerfs over unionfs?
UnionFS is more like aufs than mergerfs in that it offers overlay / CoW features. If you're just looking to create a union of drives and want flexibility in file/directory placement then mergerfs offers that whereas unionfs is more for overlaying RW filesystems over RO ones.

Why use mergerfs over overlayfs?
Same reasons as with unionfs.