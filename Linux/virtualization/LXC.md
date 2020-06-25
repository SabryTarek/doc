LXC
====

--------------------------------------------------------------------------------------------------------------------------------------------
> basic commands for managing LXC containers:
    - lxc-ls
    - lxc-start
    - lxc-attach
    - lxc-console
    - lxc-freeze/unfreeze
    - lxc-stop
--------------------------------------------------------------------------------------------------------------------------------------------


OS level virtualization
Hardware level virtualization
snapshots

kernel panic
patched kernel
kernel patches

cgroups
controll groups

namspaces

but RFS
well this is sort of like the very
immature Linux clone of ZFS
FreeBSD jails, Solaris Zones

LXC shares the kernel with the host

systemd-nspawn

> Referances:
- (https://stgraber.org/2013/12/20/lxc-1-0-blog-post-series/)

cgroups are just like process namespaces (group of process act as one process)

if you're in that namespace that your
containers in it looks like a real
machine and you can run normally number
of processes inside of it however it's
all running inside of a single process
on the parent machine



- /var/cache/lxc/
- /var/lib/lxc/
    - config
- usr/share/lxc/templates/ # just bash scripts

# Config syntax is "key = value"




You'll also see a small fail-compilation that results in my having to "kill -9" the LXC process.

As a bonus, you'll learn that lxc-stop -n cname -k" sends a SIGTERM (15) and not a SIGKILL (9), a fact which I could have found out by reading the documentation instead of the hard way.


https://linuxcontainers.org



When I set a static IP address for my container in /var/lib/lxc/mycontainer, I am no longer able to connect to the outside web from my container (e.g. sudo apt-get update fails to connect). Any suggestions?



I had a similar problem once, where "route" inside the container showed no default gateway set (even though I had a correct config in /etc/network/interfaces), which means I had to run "route add default gw <lxcbridge-ip>" from inside the container to be able to talk to the outside world.



- AppArmor
- selinux
- AV Clama

