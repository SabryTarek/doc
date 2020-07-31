# virtualizations

Hypervisor -> virtualbox, vmware, kvm,

First of all, the most basic difference between OpenVZ and KVM is that OpenVZ can ONLY host Linux operating systems, while KVM is more flexible and can host Linux, Windows, macOS and custom OS options

x86_64
x86_32 = i386
amd_64






> Virtualization:
* BareMetal Level Hypervisor
  - Proxmox Virtual Environment
  - VMware vSpahre
  - VMware ESXi
  - Cirtex Xen
    - XenServer
    - xcp-ng fork from Xen
    - XenServer orchestra -> web interface for XenServer
* OS Level Hypervisor:
  - Oracl VirtualBox
  - VMware Workstation
  - VMware Fusion (MAC Only)
  - Microsoft hyper-v
  - KVM
    - oVirt
    - libvirt
    - virt Manager
    - QEMU
    - Virsh CLI


Vagrant








* unicorn:
    - https://www.unicorn-engine.org/
    - 
محاكي ينافس qemu
يختلف انه يركز فقط على المعالج
وانه اقرب الى اطار العمل او المكتبة


وظيفته لو عندي مشروع بلغة ما بيخليني اقدر اجرب المشروع علي اكتر من معمارية و معالجات مختلفة


https://medium.com/@sibeeshvenu/having-a-docker-container-as-your-private-npm-registry-the-easy-way-68159fa94cc4?fbclid=IwAR1i8oMz19uasVE1oL7NhRUGhtuEgusW0o7BoKwvpuNQuHcqMkcSyutwRhc






-------------------------------------------------------------------

Qemu
====
- short for [Q]uick [Emu]lator\
- free and open-source emulator
- performs hardware virtualization




- architecture virtualization like: amd64


- Bochs: open and free hardware virtualization for X86 only (i386 and amd64)


- LXC Linux Container
- KVM Kernel-based Virtual Machine


- Orical VirtualBox
  - for X86 only (i386 and amd64)
  - snapshot



- VMware Workstation
  - snapshot























Kernel: bridge between software(Operating System, apps) and hardware(devices{Hard Disk, Sound Card, Vega Card})



ماهي النواة "kernel" ?
هي الجزء الأساسي المركزي من نظام التشغيل أو بكلمة أخرى هي قلب النظام النابض.
تعمل كجسر بين التطبيقات والعتاد , وتنظم عملية دخول هذة التطبيقات على المعالج الذاكرة القرص الصلب الطابعات كرت الشاشة والشبكة.
عندما يقوم النظام بالتحميل الى الذاكرة النواة تكون أول من يتم تحميله أولا وتبقى في الذاكرة حتى يتم إطفاء النظام مرة أخرى



لينُكس نسخة من نظام التشغيل يونيكس ولكنه كتب من الصفر من قبل Linus Torvaldes.
نسخة الكيرنل 4.12 الاخيرة احتوت على اكثر من 19 مليون سطر من الأكواد وبالتعاون مع 14000 مبرمج .
يتم إطلاق النسخة المستقرة من النواة في العادة كل 2 الى 3 أشهر .





هناك خمسة نسخ من النواة ولكن أشهرهن والأكثر شعبية 
monolithic kernels
microkernels
وهذه خلاصة سريعة لأنواع الأنوية الخمسة

Monolithic Kernels 
جميع خدمات النظام تعمل من النواة الرئيسية في نفس الذاكرة وتسمح للعتاد بالتعامل بشكل قوي وفعال .

Microkernels
لديها نفس وظائف monolithic kernel لكنها صممت بشكل صغير جدا .فهي تحتوي على الوظائف الأساسية فقط مثل إدارة الذاكرة ,تعدد المهام , الاتصالات بين العمليات الداخليةو وبقية الخدمات تأتي منفصلة ك modules أو servers.

Hybrid Kernels
هذه النواة تستخدم في أغلب الأنظمة التجارية . وهي مشابهة ل micro kernels ماعدا احتوائها على اكواد إضافية لتحسين جودة الأداء

Nano Kernels
تتعامل إفتراضيا مع جميع الخدمات حتى البسيطة والاساسية مثل
interrupt controllers , timer

Exo Kernels 
وهذا النوع من النواة صغير جدا بالرغم من أنه يتعامل مع مكتبة النظام ويزود مطوري التطبيقات بالادوات المناسبة للنظام





























fdisk
- /
- boot
- swap
- home
mount boot and home partition to /boot and /home
mk.ext4
mkswap
swapon








---------------------------------------------------------------------------------------------------------------------------------------------------------------------


# Linus Torvalds uses Fedora Workstation on his 11" MacBook Air which is his primary driver. That said, he has also mentioned having used OpenSuse at some point of time. Also, he has complimented Ubuntu for making Debian accessible to the mass.

# arch is for pragmatists, gentoo is for psychopaths :P




the performance is much
better in my opinion to VirtualBox or
the others because it uses a lot of
different code and in the backend it's
able to get much better performance near
native performance by executing the
guest code directly on the host CPU so
it's basically it's executing the
operating the guest operating systems
code on the real CPU like if it was
actually really installed so where do





also another part of that and that's KVM
now you may have heard of k vm k vm is
kernel virtual machine and it uses and
it's able to take advantage of the
64-bit processor and it takes advantage
of new technologies in 64-bit processors
like acceleration better performance
with hypervisors things like that and
it's able to connect with qemu and then
it's cute qemu /k vm and you're able to
get really better performance all around
the performance without k vm is pretty
good but with k vm especially if you
have a 64-bit processor then you can get
even even closer than your native





Jire
1 year ago
Are you able to run high refresh rate on the VM? As in, can the VM display more than 60Hz?﻿

1


MisterWayne
MisterWayne
1 year ago
Jire you would be able to use a real monitor for the VM. So yes it would be able to get higher framerates. Because the signal comes straight from the GPU.

how to install Android (Android-x86 / Remix OS / or plain Android if it's possible) inside QEMU


Are you using GPU passthrough in this QEMU instance?


KVM it's the layer that communicates with the kernel.



Can we run on host the apps on guest like parallel desktop ?

> What Distro you have > Antergos 
-> What desktop environment you are using -> GNOME 
-> And what icons and themes you have -> Numix Circle pack , Numix Square Icon Pack
dash to dock gnome extension



from bios enable VT-D to enable KVM & I/O MMU

pass through your your network card is gonna go entirely to the virtual machine and your Linux machine won't have any network access


Gym training is a way to practice, often taking part in past contest, as close as possible to participation on time.
It is supported only ACM-ICPC mode. If you've seen these problems, a virtual contest is not for you - solve these problems
in practice. If you just want to solve some problem from a contest, a virtual contest is not for you - solve this problem
in the archive. Never use someone else's code, read the tutorials or communicate with other person during
a gym contest.

- Dynamically allocated
- Fixed size
# 
- VDI VirtualBox Disk Image
- VHD Virtual Hard Disk
- VMDK Virtual Machine Disk
# cat /proc/cpuinfo | egrep "vmx|svm"

# KVM consists of a loadable kernel module,kvm.ko, that provides the core virtualization infrastructure and a processor specific module, kvm-intel.ko or kvm-amd.ko
- KVM
- libvirtd: KVM daemon 
- virt-manager: gives users a GUI interface to manage your Virtual Machines
- libguestfs-tools && virt-top: virtual machine management tools

libguestfs-tools
virt-top

bridge-utils
libvirt
virt-install
qemu-kvm

- virsh: Virtual machine Manager CLI
- virt-manager: Virtual machine Manager GUI




VM Networking:
- Bradge
- NAT
- 



Virsh is a management user interface for virsh guest domains.used to:
- create
- pause
- restart
- shutdown domains
-  list current domains available in your Virtualization hypervisor platform


`Virsh` interacts with `Libvirt` which is a library aimed at providing a long-term stable C API. It currently supports:
- Xen
- QEMU
- KVM
- LXC
- OpenVZ
- VirtualBox
- VMware ESX



manage Guest Virtual Machines running on KVM or Xen Hypervisor


# virsh [OPTION]... <command> <domain> [ARG]...


virsh
- nodeinfo
- dominfo <vm_name>
- list
    - --all
- start <vm_name>
- autostart <vm_name>
    - --disable
- stop <vm_name>
- shutdown <vm_name>
- reboot <vm_name>
- destroy <vm_name>


# Virsh stop all running vms
$ for i in `sudo virsh list | grep running | awk '{print $2}'` do
    sudo virsh shutdown $i
done

<vm_name>


`vm` = `domain` in virsh




sudo virt-install \
--name ArchLinux \
--description "Test VM with ArchLinux" \
--ram=2048 \
--vcpus=2 \
--os-type=Linux \
--os-variant=rhel7 \
--disk path=/var/lib/libvirt/images/centos7.qcow2,bus=virtio,size=3 \
--graphics none \
--location /mnt/cyber/Distros/archlinux-2019.04.01-x86_64.iso \
--network bridge:virbr0  \
--console pty,target_type=serial -x 'console=ttyS0,115200n8 serial'



mkisofs
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
KVM


manage KVM:
- GUI: KVM
- CLI: virsh
---------------------------------------------------------------------------------------------------------------------------------------------------------------------

- How to use scp command to securely transfer files with examples
- How to use rsync command on Linux/Unix with examples
- How to source bash completion script file in zsh
- Stratis Storage Cheat Sheet – reference guide
- How to Install Redis on Fedora 30/29/28
- How to find database sizes in MySQL/MariaDB Database Server
- Configure NFSv3 and NFSv4 on CentOS 7
- Managing Distribution Lists on Zimbra Mail Server
- netstat vs ss usage guide on Linux
- ifconfig vs ip usage guide on Linux
- Postfix Commands Administration Cheat Sheet
- The SSH Commands Cheat Sheet for Linux SysAdmins / Users
- How To Install and Use Tmux on Linux
- Arch Linux Installation Cheatsheet With LUKS Encryption
- virsh commands cheatsheet to manage KVM guest virtual machines
- Pacman and yaourt package manager mastery Cheat Sheet
- Basic Linux Terminal Shortcuts Cheat Sheet
- Top 20 Windows PowerShell Keyboard Shortcuts For Geeks