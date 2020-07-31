---
modified: 2020-06-27T23:00:09+02:00
---

DNS
===

DNS request on port 53 UDP
what can ISP see ?
- your IP


DNS over HTTPS (DOH)
DNS over TLS (DOT)
CryptDNS


DNS

Forward Lookup -> Domain to IP -> A Lookup -> host -t a #-type: a lookup# google.com
Reverse Lookup -> IP to Domain -> PTR Lookup -> host -t ptr #-type: ptr lookup# 150.54.97.0
Zone Transfare  53/TCP port -> host -l #list# google.com <DNS_server_IP>