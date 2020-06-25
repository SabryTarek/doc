Proxy
=====

proxy types:
- http proxy
    - old
    - browser [plugin - configration]
    - browser only can connect to the proxy  but other application can't do this
- socks proxy
    - all appications on the machine can use it like browser, programs updates, skype, etc
    - all traffic type like http, ftp
    - slower than http proxy

proxy chain: change your ip with a fixed time
proxychains <command_you_want_use_with_other_ip>
proxychains-ng <command>

proxy benefits:
- caching
- filtering act as firewall
- access to the internet with proxy server ip




- Forward Proxy Server
- Reverse Proxy Server




load balancer as one of the applications of a reverse proxy it isjust a special case of the reverse proxy

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[SquidProxy](http://www.squid-cache.org/)
=========================================
Optimising Web Delivery
ports (in BSD)=== packages system (in Linux)

sudo apt-get install squid3
squidguard
squid-cgi
/etc/squid3/squid.conf


sudo cp /etc/squid3/squid.conf /etc/squid3/squid.conf.original
sudo chmod a-w /etc/squid3/squid.conf.original
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Hey I have a question can i access a video server without using RTMP module.


