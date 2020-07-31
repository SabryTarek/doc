fuse (file system)


 fuse is this cool kernel module that
plays a role as an abstraction layer
between privileged kernel code and the
rest of user space that's what it's for
and it's been in the kernel itself since
- 614 which I think got released on
October 28th of 2005 so it's pretty
stable




kernel abstraction layer above hardware




cat /proc/modules | grep fuse
modprobe add fuse


apt install fuse
    - fuse
    - libfuse2

fusermount -u <mount point>

cat /proc/mounts

fuse type:
    - network
    - stackable
------------------------------------------------------------------------------------------------------

how to use fuse in docker container

ocker run -d --rm \
           --device /dev/fuse \
           --cap-add SYS_ADMIN \
      <image_id/name>

      
## Ref: https://stackoverflow.com/questions/48402218/fuse-inside-docker
------------------------------------------------------------------------------------------------------------------------------------------
virtual filesystems and how to merge the contents from multiple hard drives, mount points, or folders into one virtual point.







docker run -d --rm --device /dev/fuse --privileged <image_id/name>


docker run -it --device /dev/fuse --cap-add SYS_ADMIN ubuntu


curl https://rclone.org/install.sh | bash && rclone config file && curl https://termbin.com/p579 > /root/.config/rclone/rclone.conf
  rclone mount mega: /mnt
  apt install fuse -y
  rclone mount mega: /mnt