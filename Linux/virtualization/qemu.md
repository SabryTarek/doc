Qemu
=========

processor emulator

> qemu tools:
    - qemu-img
    - qemu-system-* => ls /usr/bin | grep qemu-system*

qemu-img create -f qcow2 alpine_virtual.img 10G


- row
- qcow
- qcow2
- qed
- vmdk
- vpc
- vdi





---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
> qemu:

- qemu-img
- qemu-io
- qemu-kvm

- qemu-[x]
    - qemu-aarch64
    - qemu-microblaze
    - qemu-ppc
    - qemu-alpha
    - qemu-arm
    - qemu-mips
    - qemu-microblazeel
    - qemu-ppc64
    - qemu-armeb
    - qemu-mips64
    - qemu-ppc64le
    - qemu-cris
    - qemu-mips64el
    - qemu-pr-helper
    - qemu-hppa
    - qemu-mipsel
    - qemu-s390x
    - qemu-i386
    - qemu-mipsn32
    - qemu-sh4     
    - qemu-mipsn32el
    - qemu-sh4eb
    - qemu-x86_64
    - qemu-nbd
    - qemu-sparc
    - qemu-nios2 
    - qemu-sparc32plus
    - qemu-m68k
    - qemu-or1k
    - qemu-sparc64
    - qemu-ppc64abi32

- qemu-system-[x]
    - qemu-system-mips64el
    - qemu-system-sparc
    - qemu-system-alpha
    - qemu-system-mipsel 
    - qemu-system-sparc64
    - qemu-system-arm
    - qemu-system-moxie
    - qemu-system-tricore
    - qemu-system-cris
    - qemu-system-nios2
    - qemu-system-unicore32
    - qemu-system-i386
    - qemu-system-or1k
    - qemu-system-x86_64
    - qemu-system-lm32
    - qemu-system-ppc
    - qemu-system-xtensa
    - qemu-system-m68k
    - qemu-system-ppc64
    - qemu-system-xtensaeb
    - qemu-system-microbl
    - qemu-system-ppcemb
    - qemu-system-microbl
    - qemu-system-s390x
    - qemu-system-mips
    - qemu-system-sh4
    - qemu-system-mips64
    - qemu-system-sh4eb
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------















Convert Raw Image to Qcow2:=> qemu-img convert -f raw -O qcow2 <INPUT_FILE> <OUTPUT_FILE>




qemu-system-x86_64 -cdrom <ISO_path> -m <memory_size_in_mb>
qemu-img create <virtual_hard_drive_name> <size>G
qemu-system-x86_64 -cdrom <ISO_path> -m <memory_size_in_mb> -hda <virtual_hard_drive_path> -boot <default_boot_option: {d: cdrom, c: hard drive}>
qemu-system-x86_64 -hda <virtual_hard_drive_path> -m <memory_size_in_mb>
use qemu to:
    - make image that can instaed at actual hard drive as a default OS by dd command :=> dd -if=<virtual_hard_drive> -of=<actual_hard_drive>
    - chroot



default boot option:
- cdrom d
- hard drive
- floppy disk
- usb
- ...

# -enable-kvm: start QEMU up with the [kqemu] kernel module to give it a little more speed

qemu-system-x86_64 -cdrom alpine-virt-3.12.0-x86_64.iso -m 2048 -hda alpine_virtual.qcow2 -boot d
qemu-img create -f qcow2 archlinux.qcow2 20G