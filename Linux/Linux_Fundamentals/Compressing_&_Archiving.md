Compressing & Archiving
=======================

> Compressing

file :-
gzip -> faster
gzip file
gunzip file.gz


bzip2 ->higher commpressing
bzip2 file
bunzip2 file.gz

time
du -sh <file||diirectory>
red color -> Compressed & Archivied ofile


!!! not support video & Audio


Directory :-


tar cvfz file
tar xvfz 


tar cvfj file
tar xvfj

-----------------------------------------------------------------------------
>Archiving

> make tar file:
tar cf file.tar /etc


> extract tar file:
tar -xf file.tar

gunzip -c /usr/share/doc/openvpn/examples/sample-config-files/server.conf.gz > /etc/openvpn/server.conf


unrar x <file_name>.rar