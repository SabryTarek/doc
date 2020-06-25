Networking
==========
Computer Networking is one of Telecommunication Science branches

--------------------------------------------------------------------------------
> network types:
    - pubic network
    - private network
    - virtual private network
--------------------------------------------------------------------------------
network configurations:

ip :-
    - ifconfig
    - ip a s (ip adress show)
    - hostname -i
--------------------------------------------------------------------------------
- ifconfig eth down
- ifconfig eth start
--------------------------------------------------------------------------------
router
switch


--------------------------------------------------------------------------------
DNS
====

> OpenDNS:
    - 208.67.222.222
    - 208.67.220.220

> Google DNS:
    - 8.8.8.8
    - 8.8.4.4

> CloudFlare DNS:
    - 1.1.1.1
    - 1.0.0.1

> Comodo DNS:
    - 8.26.56.26
    - 8.20.247.20

> Norton DNS:
Preferred DNS (Primary server) (any change in DNS Records happen on it): 199.85.126.20
Alternate DNS (Sacandary server) (replica from Primary): 199.85.127.20

DNS Make loadbalancer form one Primary server and many Sacandary server
--------------------------------------------------------------------------------
NAT "Network Address Translation "
===================================
types:
- Static
- Dynamic
- Overloading
--------------------------------------------------------------------------------
ip types:
- internal ip -> local network
- external ip -> enternet
- public ip
- private ip
- static ip
- dynamic ip
--------------------------------------------------------------------------------
portal (Azure GUI)
200 USD for 30 days
arm (azure resource manager) template IAC for Azure only
azure cloud shell (Azure cli) az -> az account list


GCP
300$ for 1 year
--------------------------------------------------------------------------------
Vault solve different three challenges
vault and secrets


secret management
=================
- database credentials
- api tokkens
- TLS SSL certificates
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
Linux used to build all networks systems such as firewalls, Routers, DNS, NAS Network "Attached Storage"



- ping command send network packet caed ICMP ECHO_REQUEST, almost devices response when get this packet which make sure of network exitsting
- # you can config your your firewall to avoid response to any ICMP packet to prevent attacker from find our machine (at this momment the attacker will show your port filtered although this port is opened or closed)
- ping command statistics packets transmitted received packet loss time rtt min/avg/max/mdev 


- traceroute || tracepate : show list of all hobs===nodes which packets throw from it to go to its destination
EX: traceroute salshdot.org
# to send this request from our machine to salshdot.org web server packets will across through 6 hobs===nodes
# we can show host name and ip for every hob and duration which the packets take to across from previous node to this one
# some nodes us firewall to hide its information so it wil show as ***

- netstat netstat -ie === ifconfig


- ftp || lftp
- # bye = quit = exit
- support deffirant protocals
- backgroud process
- command autocomplete
- redownoad if lastnload is filled



----------------------------------------------------------------------------------------------------------------------------------------------------------------
nmcli (network manager command line interface)
==============================================

----------------------------------------------------------------------------------------------------------------------------------------------------------------
nmtui (network manager [terminal | text] user interface)
========================================================
nmcli
NetworkManager
networkctl


netstat
netreport

nm-online
nm-connection-editor

nmtui
nmtui-connect
nmtui-hostname                                                                    
nmtui-edit                                                                                            



network configration
network bradging
network (bounding | teaming)


power user = home user

----------------------------------------------------------------------------------------------------------------------------------------------------------------
IP V4
=====
8 byte === 2^32
IANA

[0:255].[0:255].[0:255].[0:255]
|_____|.|______._______.______|
   |              |
NetworkID     Subnet Mask


> (NetworkID | classes):-
    - A => NetworkID = [0:126]
    - B => NetworkID = [128:191]
    - C => NetworkID = [192:223]
    - D => NetworkID = [224:239]
    - E => NetworkID = [240:254]

> reserved IPs:
    - Loopback (127.0.0.0)-> virtual interface at any Device
    - Broadcasting (last ip at network) (all hosts)-> if you send to this ip as you send to all hosts at this Network
    - anyIP 0.0.0.0 -> any ip in docker -p 0.0.0.0:8080:3000 -> such as you write 1921.1.14.5:3000
    - 127.0.0.1 -> Localhost
    - NetworkID -> fixed number at all network ip
    - subnet mask -> hosts
    - Default Gateway: IP address of my router (192.168.1.1)
> classless
----------------------------------------------------------------------------------------------------------------------------------------------------------------



hardware
CPU
Memory
Storage
Boot Order
    - Hard Disk 1
    - CD/DVD
    - External Device
    - Network 1


package name: bind
[service | daemon] name: named


other implementation to DNS:
- unbound -> for chaching + recursive lookup can't create domain
- dnsmasq



- Caching name server
- master name server
    - forward lookup
    - reverse lookup
- slave name server
    - forward lookup
    - reverse lookup
