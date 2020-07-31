Compressing & Archiving
=======================

> Compressing
algorithms (utility):
    - gzip (faster)
        - <fie_name>.gz
        - gunzip <fie_name>.gz
    - bzip2 (higher commpressing ratio)
        - <fie_name>.bz2
        - bunzip2 <fie_name>.bz2
        
        .
        .
    - zip
    - xzip
    - winzip

!!! not support video & Audio
when you open file in winrar it extract in windows temp



time
du -sh <file | directory> # s=sumarize, h=human


zip fuse filesystem




create file verbose gzip:           tar cvfz etc-buckup.tar.gz /etc     # c=create, f=file, v=verbose, z=gzip
extract verbose file zip:           tar xvfz etc-buckup.tar.gz          # c=create, f=file, v=verbose, z=gzip

create verbose file bzip2:          tar cvfj etc-buckup.tar.bz2 /etc    # c=create, f=file, v=verbose, j=bzip2
extract verbose file bzip2:         tar xvfj etc-buckup.tar.bz2         # c=create, f=file, v=verbose, j=bzip2



you can list all file inside tar without extaction by t option
list verbose file zip:           tar tvfz etc-buckup.tar.gz
-----------------------------------------------------------------------------
>Archiving
tar refer to tape archive ; tape is a storage media before hard disk
> make tar file:
tar cf file.tar /etc


> extract tar file:
tar -xf file.tar

gunzip -c /usr/share/doc/openvpn/examples/sample-config-files/server.conf.gz > /etc/openvpn/server.conf


unrar x <file_name>.rar