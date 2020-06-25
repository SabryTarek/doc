Linux Distributions
===================
https://en.wikipedia.org/wiki/List_of_Linux_distributions
https://distrowatch.com/
https://www.osdisc.com/
https://distrochooser.de/en
http://it-ebooks.info/

> Best desktop distros
 Fixed Release
 Rolling
 مصدرية
 Debian Testing/Sid
 [Archlinux](./arch.md)
 Gentoo جينتو والتي هي فصيلة من البطاريق التي تسبح بسرعة
    
 OpenSUSE Tumbleweed
  توزيعات مستقلة (أي غير مبنية على غيرها)


- CRUX (port)
---------------------------------------------------------------------------------------------------------------
> Slackware-based:
---------------------------------------------------------------------------------------------------------------
> Debian-based: (sudo apt-get install neovim) (aptitude) (dpkg)
    - Ubuntu (sudo apt-get install neovim)
        - Mint
---------------------------------------------------------------------------------------------------------------
> RedHat-based:
    - RHEL (yum) (rpm)
    - Fedora (dnf) (rpm)
    - CentOS (yum) (rpm)
---------------------------------------------------------------------------------------------------------------
> Arch-based: (sudo pacman -S neovim)
    - Manjaro (sudo pacman -S neovim)
---------------------------------------------------------------------------------------------------------------
> Gentoo-based: (emerge -a app-editors/neovim)
    - CloverOS
    - exherbo
    - Fentoo
---------------------------------------------------------------------------------------------------------------
> Android-based:
    - Android-x86
---------------------------------------------------------------------------------------------------------------
> NixOS-based: (nix-env -iA nixpkgs.neovim)
  - GuixSD
---------------------------------------------------------------------------------------------------------------
Written-in:
- Rust:
    - ReduxOS
- Haskell:
    - NixOS
---------------------------------------------------------------------------------------------------------------
> openSUSE (sudo zypper in neovim)
-----------------------------------------------------
> Solus (sudo eopkg install neovim) (Budgie)
-----------------------------------------------------
> VoidLinux (sudo xbps-install -S neovim) -> no systemd & use muslc instead of glibc & dialogue based installer
-----------------------------------------------------
> PLD
---------------------------------------------------------------------------------------------------------------
> BSD-based:
    - FreeBSD (pkg install neovim)
    - OpenBSD (pkg_add neovim)
    - NetBSD (pkg_add neovim)
    - DragonFlyBSD

    - GhostBSD
    - 
---------------------------------------------------------------------------------------------------------------
# OS = firmware = flash
---------------------------------------------------------------------------------------------------------------
OpenWRT -> WRT Routers only at bigannig
DDWRT
LEDE
tomatto
---------------------------------------------------------------------------------------------------------------
> lightweight distribution:
- [Alpine](./distros/alpine.md)
- Tiny Core
- 
---------------------------------------------------------------------------------------------------------------
> Third party repositories:
- Arch:AUR(Arch Users Reopsitory)
- Ubuntu:PPA (Personal Package Archaives)
- Fedora:COPER ()
---------------------------------------------------------------------------------------------------------------
Debian desn't have sudo command -> fake root
add-apt-reposetry ppa:<username>/<packagename> =EX=>sudo add-apt-repository ppa:dr-akulavich/lighttable
sudo apt-get update
sudo apt-get install lighttable-installer

# `apt install software-properties-common` to use add-apt-repository
---------------------------------------------------------------------------------------------------------------
Haiku -> BeOS
ReactOS -> Windows 98 || Windows 2000
DarwinOS

DOS (Disk Oprating System)

> OSX
    - brew.sh
    - port


> windows:
    - choclete (CLI)
    - winget
    - cygwin (C:/cygwin64/home/<username>)
    - WSL/WSL2