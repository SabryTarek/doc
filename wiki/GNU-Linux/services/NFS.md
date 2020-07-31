# NFS

- Sun Microsystems 1980
- unix-like sysytems => [UNIX - GNU/Linux - BSD - solaris]
- Client/Server Arch
- ACL support
- Firewalls & Kerberos


- etc/exports => main configration file - defineat it all sheard files and directories
-  etc/fstab => auto mount
-  etc/sysconfig/nfs => define ports



- apt-get install nfs-kernel-server nfs-common


NFS-server package => nfs-kernel-server
NFS-client package => nfs-common


chown nobody:nogroup /nfsshare
FILE: etc/exports
/nfsshare 192.168.2.150(rw,sync)


- exportfs -r
- # service nfs-kernel-server start









- showmount -e 192.168.2.200