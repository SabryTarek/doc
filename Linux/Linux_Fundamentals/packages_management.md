Package Managing
=================


Package is a one file archive = binary files + configrations files + man pages + lib + scripts + files destination in the file system fonts + photos + sounds + metadata

package manager :-
	- redhat based -> .rpm -> name-version.minor version.el7[.centos].{arch, x86_64,arm,...}.rpm
	- debiane based -> .deb
metadata :- dependances :  xml & sqlite









__yum__

- list -> search at name only
- search -> search at name and discription
-  install
- remove -> doesn't remove it dependancies
- autoremove -> remove it dependancies
- info
- repolist
- grouplist
- groupinfo
- groupinstall
- groupnremove
- update [package_name]
- update
- provides [file]
- clean
- histroy [command] [id]
- localinstall full_package_path



confgrations_files :-

- /etc/yum.conf
- /var/log/yum.log
- 







__rpm__

- rpm -ivh         
- rpm -e
- rpm -qapl 
- rpm -qpi ->downloaded but not installed
- rpm -qi ->installed
- rpm -qpl ``
- rpm -``q

 - i=install
 - e=erase
 - v=vervase
 - h=hashed -> progress bar by ###
 - qa=quary all
 - qpi=quary package info
 - qi=quary info
 - qpl=quary package list










yum-config-manager --add-repo=https://some.repo.example.org/foo/bar/Fedora_14/foo_bar.repo

yum-config-mananger --enable
dnf config-manager --add-repo repository_url



sourse.list





__dnf__


- 

- sudo dnf config-manager --set-enabled docker-ce-edge
- sudo dnf config-manager --set-disabled docker-ce-edge

-C = --cacheonly

dnf copr enable -y dperson/neovim
dnf install -y neovim
dnf install -y python3-neovim python3-neovim-gui



bash_completion
createrepo
ufdbguard vs squid 





- .so -> system object -> liberaries that system use it
- .ko -> kernal object -> liberaries that kernal use it -> drivers




















- compile -> gcc , g++
- linking -> lv







make -> GNU -> configration file to compile and like source code
disadvantage :-	
	- dependacies
	- uninstall





rpm fusion (free - nonfree)
epel



rpmdb -> "rpm data base"


