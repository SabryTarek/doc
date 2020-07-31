RSync
=====
rsync <src> <dsit>



--progress
-- delete

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

.config -> directory itself
.config/ -> directory content

rsync -a ~/.config/ ~/backup/
rsync -a ~/.config ~/backup/

zsh plugin