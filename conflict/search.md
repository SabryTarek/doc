---
modified: 2020-06-28T16:32:23+02:00
---

Search
=======

files commands
- locate
	- updatedb
- find


wh commands:
- whereis
- whatis
- who / whoami / 

----------------------------------------------------------------------------------------------------------
- locate 
	- mlocare
	- slocate
----------------------------------------------------------------------------------------------------------
- find oprators:-
	- -and
	- -or
	- -not
	- \(      \)


-exec command {} ; ->don't ask before
-ok command {} ;  ->ask before


find /var/ -name log -exec cp -r {} /home/sabry/work \;
----------------------------------------------------------------------------------------------------------


- find 
	- path
	- name
	-type
		-  d -> directory type
		- f -> file type
	- size
		- #M
		- -#M
		- +#M
		-  
	



ls -i -> inode number



grep -> lines -i -v -n -R l


> cut 
- c 1-6
- -d :  => delemiter
- -f 2   // f -> f 2 # f1-5 # f 2,3 # --complement -f 1
- --complement
- --output-delimiter=' 
cut -d " " -f 1-3




- head /etc/passwd | tr ':' '!'

- head -5 /etc/passwd | nl | tr '1-9' 'a-e'
- head -5 /etc/passwd | nl | tr '1-9' 'A-E'

>  nl
- head -5 /etc/passwd | nl


sort -n
uniq-> #sort before uniq#


ls -la `pwd`
ls -la ${pwd}
ls -la $(pwd)

ls -la `pwd`








> ping

- ping -c 4 google.com
----------------------------------------------------
- grep -> ripgrep
- egrep
- xgrep
----------------------------------------------------
- trash-cli
- urxt (perl) -> 
- transmission-remote
- despotify
----------------------------------------------------
network:
- sudo nethogs enp2s0
- ifconfig
- ip a = ipa show

----------------------------------------------------
> processes:
- ps aux -> top -> htop -> glance -> bashtop & gotop
- kill -> pkill -> xkill ->killall
- ls -> exa-> lsd
- cat -> bat
- du -> dust -> ncdu
----------------------------------------------------
- alsamixer
- pulseaudio
	- pulseaudio-equalizer-gtk
	- pulseaudio-equalizer
----------------------------------------------------