Sockets: endpoint of communication between 2 systems at same network
Socket Programming === Networking Programming === TCP/IP Programming
Socket (API | Library) in programming Languages (C/C++ | Python | Java | )


(Berkeley | Berkeley Software Distribution (BSD)) Sockets ===  Internet Sockets
Unix Sockets === Unix domain sockets === (inter-process communication | IPC) socket : can only be used to communicate between processes on the same host.
======



- used to send messages across a network.
# The network can be a logical, local network to the computer, or one that’s physically connected to an external network, with its own connections to other networks. The obvious example is the Internet, which you connect to via your ISP.

- provide a form of inter-process communication (IPC).
- (server/client | P2P) Architecture.





Sockets History
===============


# Python’s socket module provides an interface to the Berkeley sockets API.
# Python’s socket module maps directly to these system calls, their C counterparts. 

> The primary socket API functions and methods in this module are:
socket()
bind()
listen()
accept()
connect()
connect_ex()
send()
recv()
close()



  accept(2),  bind(2), close(2), connect(2), fcntl(2), getpeername(2), getsockname(2), getsockopt(2), ioctl(2), listen(2), read(2), recv(2), select(2), send(2), shut‐
       down(2), socketpair(2), write(2), getprotoent(3), ip(7), socket(7), tcp(7), udp(7), unix(7)



# As part of its standard library, Python also has classes that make using these low-level socket functions easier. Although it’s not covered in this tutorial, see the socketserver module, a framework for network servers. There are also many modules available that implement higher-level Internet protocols like (HTTP - SMTP). For an overview, see Internet Protocols and Support.
















websocket === ws:// || wss://








Referances
==========

> YouTube:
	- socket programming in javascript
books:






Tools:
- netstat (network status)
- ss (socket statistics)
- nmap (network map)
- ncat (network cat)



