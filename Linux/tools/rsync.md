RSync
=====

 rsync -av /* /home/abdulmogeeb/fullbackup 
--exclude={
/dev/*,
/proc/*,
/sys/*,
/tmp/*,
/run/*,
/mnt/*,
/media/*,
/home/*,
/lost+found}