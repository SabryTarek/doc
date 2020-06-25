SSH (Secure Shell)
==================
- Client machine
- Server machine(that you can access && have a deamon [sshd])
-------------------------------------------------------------------------------------------------------------------------------------
- global Conf: /etc/ssh/ssh_config
- user Conf: ~/.ssh/config
-------------------------------------------------------------------------------------------------------------------------------------
- telnet
- ssh
- scp
- ftp/sftp
- sshfs
- mosh
- gotty/ttyd
- VNC
- RDP
-------------------------------------------------------------------------------------------------------------------------------------

> Configration files:

~/.ssh/
├── id_rsa.pub
├── id_rsa
├── config
├── authorized_keys
└── known_hosts

/etc/ssh/
├── moduli
├── ssh_config
├── ssh_config.d
│   └── 05-redhat.conf

├── ssh_host_ecdsa_key
├── ssh_host_ecdsa_key.pub

├── ssh_host_ed25519_key
├── ssh_host_ed25519_key.pub

├── ssh_host_rsa_key
└── ssh_host_rsa_key.pub


* /etc/ssh/sshd_config :-
    *  Banner /etc/issue.net



OATH-TOTP
    - Google Authenticator
    - authy


-------------------------------------------------------------------------------------------------------------------------------------
ssh -X username@server.lt
-X -> Xforwarding (GUI)

uncomment these lines in to allow Xforwarding in ssh
- /etc/ssh/sshd_config:
# X11Forwarding yes
# X11DisplayOffset 10
# X11UseLocalhost yes


-------------------------------------------------------------------------------------------------------------------------------------
-L SSH Tunnel (port forward)
ssh -L 8080:www.example.com:80 username@IP
open http://localhost:8080 in your client machine

-------------------------------------------------------------------------------------------------------------------------------------
ssh -N -D 8080 username@IP -p 22

-N -> non-login sesion
-D -> SOCKS5 proxy tunnel

proxy SOCK5
127.0.0.1
port 8080
-------------------------------------------------------------------------------------------------------------------------------------
OpenSSH utility:

- ssh
- sshd

- ssh-add
- ssh-agent
- ssh-copy-id

- ssh-keygen
- ssh-keyscan

- ssh-argv0
-------------------------------------------------------------------------------------------------------------------------------------


minmal command: ssh <remoteserver>



-p 22 : Specify which port to connect to on the remote SSH server. 22 is not required as this is the default, but if any other port is listening connect to it using the -p parameter. The listening port is configured in the sshd_config file using the Port 2222 format.
options:
-C : Compression is enabled on the connection using this parameter. If you are using the terminal over a slow link or viewing lots of text this can speed up the connection as it will compress the data transferred on the fly.

-v : Print debug information, particularly helpful when debugging an authentication problem. Can be used multiple times to print additional information.

-F configfile
        Specifies an alternative per-user configuration file.  If a configuration file is given on the command line, the system-wide configuration file
        (/etc/ssh/ssh_config) will be ignored.  The default for the per-user configuration file is ~/.ssh/config.








server/client archticture
sshd/openssh
sshd_config/~/.ssh/config







- Commandline
- Configration file
- 






# ssh client comes with two other very handy tools for moving files around over an encrypted ssh connection(scp, sftp)
















































بإمكانك الاختيار من بين إحدى أنواع التشفير التالية :AES , Triple DES, Blowfish, CAST128 Arcfour

Auth methods:
- password-based login
- key-based login




- connect to your machine terminal with your username and password but from other machine in your loacl network or from the internet
- create encrypted tunnel over the network between to machine

- excute commands
- transfare data
- open web browser from


make sure to add our public SSH key to your .ssh/authorized_keys file



-------------------------------------------------------------------------------------------------------------------------------------
client machine: apt install openssh-client |
                                            -> dnf install openssh
Server machine: apt install openssh-server |

service ssh restart
systemctl enable sshd.service
-------------------------------------------------------------------------------------------------------------------------------------






How to prevent SSH from disconnecting sessions automaticlly

add 
Host *
 ServerAliveInterval 60

in ~/.ssh/config || /etc/ssh/ssh_config


ssh-keygen
ssh-copy-id -i rsa.pub <>@<>
-------------------------------------------------------------------------------------------------------------------------------------
sshfs
=====

- apt-get install sshfs
- yum install fuse-sshfs
- pacman -S sshfs



$ sudo sshfs root@192.168.1.200:/ /mnt/test


sudo sshfs ip172-18-0-3-bq3nh2dim9m000e65pu0@direct.labs.play-with-docker.com:/root .
-------------------------------------------------------------------------------------------------------------------------------------
ssh-keygen -t 
ssh-keygen -t <dsa | rsa> -C "<email>" -f <path> EX=> ssh-keygen -t rsa -b 4096 -C "ss.tarek97@gmail.com" -f ~/.ssh/id_rsa_gitlab
Digital Signature Algorithm

ssh-keygen -t rsa -b 4096 -C "ss.tarek97@gmail.com" -f ~/.ssh/id_rsa_sandbox.cs50.io
ssh-keygen -t rsa -b 4096 -C "robiraf575@clsn1.com" -f ~/.ssh/id_rsa_codeanywhere
ssh-keygen -t rsa -b 4096 -C "xeyij16907@janmail.org" -f ~/.ssh/id_rsa_codeanywhere
ssh-keygen -t rsa -b 4096 -C "705e079ef8@mailboxok.club" -f ~/.ssh/id_rsa

- wget
- rsh rlogin telnet
- ssh OpenSSH -> OpenBSD
- if you don't have a remote server to ssh at it you can install OpenSSH-server pakage and use your localhost instead of it (your machine is a client and server at the same time)
- ssh cobox -> connect at cobax machine with your current username (sabry)
- ssh mostafa@cobox -> connect at cobox with user named mostafa
- ssh remote-sys 'ls *' > dirlist.txt -> ls at remote and save at dirlist.txt at host
- ssh remote-sys 'ls * > dirlist.txt' -> ls at remote and save at dirlist.txt at remote also
- PuTTY : ssh cient for windows
- URI (Uniform Resource Identifier)

OpenSSH package which maked by OpenBSD contain: (all of them used ssh tunnels)
- ssh: Secure Shell
- scp: Secure CoPy ->  scp remote-sys:document.txt ~/
- sftp: Secure File Transfare Protocal

known_host at client machine only
- you don't need to ftp server at remote machine insread of this you need to ssh server
- most of GUI fole manager support SFTP protocal -> sftp://<reomte_machine>
> naming convinsion
- server: uppercase SSH, FTP
- client: lowercase ssh. ftp

scp ssh ip172-18-0-3-bq3nh2dim9m000e65pu0@direct.labs.play-with-docker.com:/root/private-tunnel-3.0.0.235_signed.msi ./mnt


remote server
port forwarding
SOCK4 ssh Tunnel



sshfs

ssh            
ssh-keygen
ssh-keyscan    
ssh-copy-id
ssh-add        
ssh-agent
SSH_AUTH_SOCK
sshd
sshmitm        
sshow









root
"ip": 35.245.75.76
hostname": 76.75.245.35.bc.googleusercontent.com
9dac2072-7f54-493b-b6dc-2b2d8cfa1476



34.83.0.174


snadbox.ccs50:
    - ip: 34.83.0.174
    - port: 22/tcp  open  ssh
    - ping: yes
codeanywhere:
    - ip: 38.75.137.222
    - port: 22/tcp  open  ssh
    - ping: yes


SSH tunneling or SSH port forwarding is a method of creating an encrypted SSH connection between a client and a server machine through which services ports can be relayed.

encrypting data & bypassing content filters