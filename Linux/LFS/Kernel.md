Linux Kernel
=============================


Kernel Module(.ko)


#include <linux/module.h>
static int __init initialize()
{
    printk("Hello, World! from kernel module\n");
    return 0;
}
static void __exit finalize()
{
    printk("Goodbye, World! ^_^ from kernel module\n");
}
module_init(initialize);        // Constructor
module_exit(finalize);          // Destructor

MODULE_LICENSE("GPL v2");



obj-m += hello_world.o

.PHONY: build clean

build:
    make -C /lib/modules/`uname -r`/bulid M=`pwd` modules

clean:
    make -C /lib/modules/`uname -r`/bulid M=`pwd` clean


insert_module:
    sudo insmod hello_world.ko

remove_module:
    sudo rmmod hello_world

---------------------------------------------------------------------------------------------------------------------------------------


/boot
    - initrd
    - vmlinuz-<version>-<arch>
    - vmlinuz.hmac || vmlinuz.efi.signed
    - config
    abi
    - sstem.map
    - memtest86+
    - grub/ || grub2/
    - efi/




    cp /boot/config-$(uname -r) .confing



---------------------------------------------------------------------------------------------------------------------------------------

"sysctl" is a tool for examining and changing kernel parameters at runtime. sysctl is implemented in procfs, the virtual process file system at /proc/.

Commands used - 
- sysctl -a (to view all loaded parameters)
- sysctl -p (to load all parameters from /etc/sysctl.conf)
- /proc/sys (to temporarily change kernel parameters)
	



how this it'll work and how to know what
are your kernel loaded parameters and
how to change them and what is the main
configuration file process 

know your loaded kernel parameter

change loaded kernel parameter  methods:
- proc/sys directory (temporary changes)
	- echo 1 >  /proc/sys/net/bridge/bridge-nf-call-arptables
- sysctl var=value
	- sysctl net.bridge.bridge-nf-call-arptables = 1
- /etc/sysctl.conf (persistent changes)
- 
sysctl -a => prints all the loaded parameters in your system

sysctl -p => change the parameter during runtime (don't need to reboot)


you must reboot your system to effect at kernel





## Ref
- https://www.youtube.com/watch?v=WHnXN9zoAzU
---------------------------------------------------------------------------------------------------------------------------------------

unikernel
uinkraft -> make unikernel easy
nanovm




VM Vs Container


VM -> Strong Isolation


unikernel
-  is VMs
- single monolithic binary
---------------------------------------------------------------------------------------------------------------------------------------
