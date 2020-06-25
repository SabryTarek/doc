daemons ="sevices"
==================

- install
- running
- internet access

- DHCP
- ISCSI

- Terminal Server SSH Secure SHell
- File Server FTP File transfer Protocal => server package : vsftpd {very secure ftp doemon} , client package : ftp

- NFS Network File Manager
- SAMBA

- Web Server ```Apache``` =>httpd {hyper text transfare protocal daemon} - apache2
- Database Server MYSQL - MariaDB

- cron
- rsync

- GPG

- History
- systemd /init


> ftp

- control traffic-> :20
- data transfare -> :21
-  server package : vsftpd {very secure ftp daemon}
- client package : ftp
- var/ftp -> ftp
-  /etc/httpd -> configration file 
- /etc/vsftpd/conf/vsftpd.conf -> main .conf file
- work on tcp
- ftp 192.168.1.133
- 220 -> code cheak
- get #filename -> download
- get / put
- clear text not cipher









> NFS

Sun Microsystems 1980
unix-like sysytems => [UNIX - GNU/Linux - BSD - solaris]
-  Client/Server Arch
- ACL support
-  Firewalls & Kerberos


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