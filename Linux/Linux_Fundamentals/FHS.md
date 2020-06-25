Filesystem Hierarchy Standard (FHS)
===================================
- defines the directory structure and directory contents in Linux distributions
- Filesystem Hierarchy Standard
- Developed by	Linux Foundation
- latest version is 3.0, released on 3 June 2015

- Initial release	14 February 1994; 25 years ago


# man hier - description of the filesystem hierarchy 


- /
	- home/ -> users home directories
	- root/ -> toot home directory
	- etc/ -> configuration files
	- bin/ -> binary files
	- sbin/ -> system binary files
	- lib/ -> libraries
	- lib64/ -> libraries 64
	- usr/
    	- bin
    	- sbin
    	- lib
    	- lib64
	- dev/ -> 
	- proc/ -> 
	- media/ -> Mount points for removable media such as CD-ROMs (appeared in FHS-2.3 in 2004)
	- mnt/ -> Temporarily mounted filesystems
	- boot/ -> kernel + gurb


- /

	- dev/
		- zero
		- rundom
		- urandom
		- null
		- sd[a-z][1:..]
		- pts/



	- etc/
		- yum.conf
		- redhat-release
		- pki/rpm-gpg/
		- grub2.cfg
		- systemd/


	- usr/
		- share/
			- wallpapers/
			- fonts/
			- doc/
			- lib/systemd/system


	- var/
		- www
			- html
		- cache/
		- log/


	 - boot/
		 - grub2/
		 - vmlinuxz
	- proc/
		- mounts cat /proc/mounts === mount
		- /proc/filesystems  File systems supported by the kernel



































encrypted password in /etc/shadow algorithm is -> AES: Advanced Encrypted Standard