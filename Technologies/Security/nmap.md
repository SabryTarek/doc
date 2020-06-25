[Nmap](https://nmap.org/)
==========================

nmap -sS<running_servise_name> -O<opreating_sys_type> -p-<open_ports> -A<run_services> -v<verbose> -oX result.xml -T4 192.168.1.11
---------------------------------------------------------------------------------------------------------------------


- ARP Sweep: Local Network Dicovery -> Enumrate alive Hosts in your local network using ARP requests

- nc
- ncat
- TCPdump
- Wireshark


NCat  nc-> ncat 
====
netcat Read/Write data to Network connections or simply commuincate with tcp/udp protocals
swiss army knife



netcat mode:
- client mode
- server mode


lab setup
=========

netcat -nvv -l -p 4444
netstat -ntulp | grep 4444

netcat -nvv 10.0.0.30 4444


file <file_name>




better than telnet:
- telnet can't connect to UDP ports


- u -> udp port
- v -> verbose
- vv -> more verbose
- n -> not resolve domain
- l -> listen
- p -> port
- e -> excute
low level acsess

litral movement




port scanning by netcat instead of nmap:
netcat -nvv -w3 -z 10.0.0.30 20-30 -> scan tcp ports at 10.0.0.30



mknod relay p
netcat -nvv -l -p 4444 0<relay | netcat 10.0.0.40 8888 1>relay
--------------------------------------------------------------------------------
Nmap
======

IANA 65535 TCP & 65535 UDP port

port numbers = 65535
- 0:1025 -> well-known ports



port status :-
- opened
- closed
- filterd maybe this is port is open but firewall prevent this port from ping or send ICMP packages



when port is closed ?
- service is stopped
- firewall not allow 

nmap scan 1000 most popular ports
UDP port scanning acurcy is lower than TCP port scanning


> nmap:

- multiples target
- aggrsive scan
- nmap -[options] target
- information gethering


- nmap 192.168.1.1-255 === nmap 192.168.1.* => scan for subnet
- nmap -iL targets.txt




options:

-F -> fast scan
-O -> Operating system type
-oN <output_file> -> save command output as text
-oX <output_file> -> save command output as xml
-iL
-p 80,139,445 -> scan at spacific ports
--open -> output is open ports only
--------------------------------------------------------------------------------