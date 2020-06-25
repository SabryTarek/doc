# UnionFS


## instlation
$ apt install unionfs-fuse
## usage
$ mkdir /root/dir1
$ touch /root/dir1/f1
$ touch /root/dir1/f2

$ mkdir /root/dir2
$ touch /root/dir2/f3
$ touch /root/dir2/f4

$ mkdir /root/union

$ unionfs /root/dir1:/root/dir2  /root/union/
$ ls /root/union/
f1 f2 f3 f4


Step 6: To remove unionfs-fuse package use the command.

sudo apt-get remove unionfs-fuse 
Step 7: To remove the unionfs-fuse package and it’s dependant package use the command.

sudo apt-get remove --auto-remove unionfs-fuse


## Ref
- https://www.geeksforgeeks.org/how-to-transparently-overlaid-two-directories-using-unionfs-in-linux/
