Torrent
=====
server-client


> [Transmission](https://transmissionbt.com/):
    - transmission-daemon
    - transmission-cli
    - transmission-WebUI



~/.config/transmission-daemon

- .torrent
- Magent Link

- core
- interface
    - CLI (console)
    - Ncurses
    - WebUI
    - GUI
        - gtk
        - qt


BitTorrent: BitTorrent client and tracker




#----------------------------------------------------------------------------------------------------------------------------------------
# this is notes for video: http://www.youtube.com/watch?v=ee4XzWuapsE

#-------- Transmission CLI {{{
#------------------------------------------------------
# lightweight torrent daemon, has option for cli, webui, ncurses, and gui frontend 
# demo video: http://www.youtube.com/watch?v=ee4XzWuapsE
# WebUI:	http://localhost:9091/transmission/web/
# 		http://192.168.1.xxx:9091/transmission/web/
tsm-clearcompleted() {
        transmission-remote -l | grep 100% | grep Done | \
        awk '{print $1}' | xargs -n 1 -I % transmission-remote -t % -r ;}
tsm() { transmission-remote --list ;}
	# numbers of ip being blocked by the blocklist
	# credit: smw from irc #transmission
tsm-count() { echo "Blocklist rules:" $(curl -s --data \
	'{"method": "session-get"}' localhost:9091/transmission/rpc -H \
	"$(curl -s -D - localhost:9091/transmission/rpc | grep X-Transmission-Session-Id)" \
	| cut -d: -f 11 | cut -d, -f1) ;}
# demo video: http://www.youtube.com/watch?v=TyDX50_dC0M
tsm-blocklist() { $PATH_SCRIPTS/blocklist.sh ;}		# update blocklist
tsm-daemon() { transmission-daemon ;}
tsm-quit() { killall transmission-daemon ;}
tsm-altspeedenable() { transmission-remote --alt-speed ;}	# limit bandwidth
tsm-altspeeddisable() {	transmission-remote --no-alt-speed ;}	# dont limit bandwidth
tsm-add() { transmission-remote --add "$1" ;}
tsm-askmorepeers() { transmission-remote -t"$1" --reannounce ;}
tsm-pause() { transmission-remote -t"$1" --stop ;}		# <id> or all
tsm-start() { transmission-remote -t"$1" --start ;}		# <id> or all
tsm-purge() { transmission-remote -t"$1" --remove-and-delete ;} # delete data also
tsm-remove() { transmission-remote -t"$1" --remove ;}		# leaves data alone
tsm-info() { transmission-remote -t"$1" --info ;}
tsm-speed() { while true;do clear; transmission-remote -t"$1" -i | grep Speed;sleep 1;done ;}

# https://github.com/fagga/transmission-remote-cli
# demo video: http://www.youtube.com/watch?v=hLz7ditUwY8
tsm-ncurse() { transmission-remote-cli ;}

#}}}