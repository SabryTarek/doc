

If you ever stuck at the linux console (Ctrl+Alt+F1) and need to view some graphic related content like video or picture
then the framebuffer allows this to be possible.
Just make sure to add yourself to the video group.
To get back to the Xsession GUI is (Ctrl+Alt+F7)



XSession = GUI

terminal === console === virtual terminal
TTY


C-M-[1-6] -> TTY === virtual terminal === terminal emulator
C-M-[7-12] -> GUI === X Sessions

# blank TTY reserved for X Session only



Archlinux doesn't have GUI because it's a minimal Distro so you should install your GUI by yourself
TLDP = The Linux Documentation Project tldp.org

~/.config/autostart/

ssh -C -c bluefish-cbc,arcfour<user@hostname>



ranger is a console file manager with VI key bindings. It provides a minimalistic and nice curses interface with a view on the directory hierarchy. It ships with "rifle", a file launcher that is good at automatically finding out which program to use for what file type.

single pane
colomn view

where you have been
where you are now
where you could go or preview


?
1? keybind
2? command
3? setting
C-n -> create new tab
C-w -> exit current tab
tab || M-[0-9] -> switch among tabs



cw
yy
dd
pp
delete

spacebar
v
shift-v

m <char>
' <same char>
'' === cd -

is written in python so if u know how to code that, then u can make ur own plugins
trash-cli
feh - Fast and light imlib2-based image viewer


cfg-vimrc



Also it is useful to add Plug 'junegunn/vim-plug' to make Plugged able to update itself

fbi imafe
fbgs pdf











display server:
- X = Xorg = Xserver = Xwindow -> use X11 protocal # ssh can use this protocol
- wayland

POSIX compatible oprating systems















install xserver
apt unstall xinit


Display= X environment

Display Protocals:-
- Wayland
- X


## x11 utilities
- xterm
- xrandr
- xvkbd -> x virtual keyboard
    - onboard
- xzoom
- xclock
- glxgears
- xeyes
- xfishtank
- xkill
- xload -update 1
- xscreensaver
- xscreensaver-demo
- xcalc
    - galculator -> GTK Calculator || gnome caculator || kde kalc
- xedit

- xprop
- xwininfo

- xset
    - xset s off -> screan saver off
    - xset -dpms -> 
- wmctrl
- xdotool
    - xdo



xorg-x11-server-<program+name> EX:=> xorg-x11-server-Xnest



xdpyinfo  | grep 'dimensions:'
xrandr | grep '*'



$DISPLAY=:0.0




X = Xinit
startx


