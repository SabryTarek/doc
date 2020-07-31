---
modified: 2020-06-27T23:37:32+02:00
---

[Alpine Linux](https://alpinelinux.org)
=======================================


subdomains:
- [docs - handbook](https://docs.alpinelinux.org)
- [wiki](https://wiki.alpinelinux.org)
- [miirirs](https://mirrors.alpinelinux.org/) 
	- [remote repo](http://dl-cdn.alpinelinux.org/)
- [pkg](https://pkgs.alpinelinux.org/)

pkg
pkg-doc
pkg-devel === pkg-dev
libpkg


package manager
libC
Rolling?


Small. Simple. Secure.
Alpine Linux is a security-oriented, lightweight Linux distribution based on musl libc and busybox.



apk is the Alpine Package Keeper - the distribution’s package manager. It is used to manage the packages (software and otherwise) of the system. It is the primary method for installing additional software, and is available in the apk-tools package.

Hierarchy

Mirror -> Repository -> Package

Mirror/Release/Repository -> Package

apk add man
apk add <package_name>-doc


To upgrade to a new stable release or edge: apk upgrade --available



/etc/apk/repositories


Note: Starting with version 3.3, there is a new repository called community. Many packages have been moved from the main repository to community to indicate that they are not guaranteed to be supported beyond six months. If you are using any of these packages, be sure to add the community repository. For example: http://dl-3.alpinelinux.org/alpine/v3.3/community




apk add --upgrade apk-tools

apk upgrade --update-cache --available

setup-apkrepos




/bin/ash

-----------------------------------------------------------------------------------------------------------------------------------------
apk add sudo

export USER='yourUserName'

adduser -D $USER && echo "$USER ALL=(ALL) NOPASSWD: ALL" > /etc/sudoers.d/$USER && chmod 0440 /etc/sudoers.d/$USER

vi /etc/apk/repositories
apk update


setup-xorg-base xfce4 xfce4-terminal lightdm-gtk-greeter xfce4-screensaver dbus-x11 open-vm-tools-gtk faenza-icon-theme xf86-video-vmware xf86-input-mouse xf86-input-keyboard

Xorg -configure
cp /root/xorg.conf.new /etc/X11/xorg.conf
-------------------------------------------------------------------------------------------------------------------------------------------
- how to make your own [local | remote] repo?
- protocols:
- http
- https
- ftp
- rsync
- local
