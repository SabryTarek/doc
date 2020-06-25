tmux 
=====

tmux = terminal multiplexer

multiplexer: combine several things together so they can be treated as one 
tmux treat as multiplixer by two diffrent ways:
- combine multiple shells into one tmux session
- tmux session can be shared by more than one client 

prefix key (ctrl + b) = `


alternatives:
- GNU screen -> pre-installed on most linux distributions; and many BSD/UNIX systems
- byobu

- use in pair programming
---------------------------------------------------------------------------------------------------------------------------------------
> panes:
===========

- prefix - % -> split vertical
- prefix - " -> split horizental

- prefix - uparrow -> go to up pane
- prefix - downarrow -> go to down pane
- prefix - leftarrow -> go to left pane
- prefix - rightarrow -> go to right pane


- prefix - Ctrl + uparrow -> resize to up
- prefix - Ctrl + downarrow -> resize to down
- prefix - Ctrl + leftarrow -> resize to left
- prefix - Ctrl + rightarrow -> resize to right


- prefix - { -> move current pane to left
- prefix - } -> move current pane to right

- Prefix - z -> toggle zoom current pane

- prefix - spacebar (multi time) -> change panes splitting in current window 

- ctrl + o


- Send/Join Pane Prefix [s|j]

- ctrl + d === $ exit === prefix + x -> kill current pane
---------------------------------------------------------------------------------------------------------------------------------------
> windows:
===========

- prefix - c -> create new window

- prefix - p -> previous window
- prefix - n -> next window
- prefix -  + -> [0-9] switch between windows by window id
- prefix - w -> list all windows

- prefix - , -> rename current window

- prefix - & -> kill current window
---------------------------------------------------------------------------------------------------------------------------------------
> sessions
===========
session status:
     - (attached)
     - () run in background

- tmux = tmux new -s <session_name> -> create new session
- prefix - $ -> rename current session
- prefix - ( -> previous session
- prefix -  -> next session
- prefix - d -> dettach current sesstion
---------------------------------------------------------------------------------------------------------------------------------------
> commands:
===========

tmux new -s <sission_name = open tmux in new terminal>
tmux switch -t <sission_name>
tmux list-sessions = tmux ls
tmux kill-session -t <sission_name_or_index>

tmux attach -t <target> = tmux a -t <session_name>
tmux deattach (prefix - d)


tmux new-window (prefix + c)
tmux select-window -t :[0-9] (prefix + [0-9])
tmux rename-window (prefix + ,)

tmux split-window (prefix + ")
tmux split-window -h (prefix + %)
swaps pane with another in the specified direction
tmux select-pane -t :.+

tmux list-keys -> lists out every bound key and the tmux command it runs

tmux list-commands -> lists out every tmux command and its arguments (prefix - ?)
tmux info --> lists out every session, window, pane, its pid, etc. (prefix - i)
tmux source-file ~/.tmux.conf -> reloads the current tmux configuration (based on a default tmux config) (prefix - r)
---------------------------------------------------------------------------------------------------------------------------------------
> Misc:
========

- prefix - t -> show time

- prefix - i -> show info

- prefix - ? -> show all commands with it's shortcuts
---------------------------------------------------------------------------------------------------------------------------------------
> configration:
================

- tmux doesn't create its configuration file
     when you open it it will check to see if a configuration file exists and if it does it will load it in when you launch it but if it does not exist it doesn't create it it just basically sets everything to the defaults.
- ~/.tmux.conf
- bind-key p|-t


#remap prefix from Control + b (default) to `
set -g prefix '`'
unbind C-b
bind '`' send-prefix



$ cat .tmux.conf
# invisible borders between panes
set-option -g pane-border-fg black
set-option -g pane-border-bg black
set-option -g pane-active-border-fg black
set-option -g pane-active-border-bg black
# simple command multiplexing
bind C-s set-window-option synchronize-panes

---------------------------------------------------------------------------------------------------------------------------------------
> configration shortcuts Rules:
===============================
- C = ctrl
- M = alt
- S = shift

- Up
- Dwon
- Left
- Right

- = +

spical character between ''

bind -n  -> without prefix
bind-key -> with prefix


prefix + :
---------------------------------------------------------------------------------------------------------------------------------------




# remap prefix to Control + a
set -g prefix '`'
unbind C-b
bind '`' send-prefix
###################################################################################################################cc 
# force a reload of the config file
unbind r
bind r source-file ~/.tmux.conf
bind-key r source-file ~/.tmux.conf \; display-message "tmux.conf reloaded ."

####################################################################################################################
--------------------------------------------------------------------------------------------------------------------
****
when I run tmux you can see that it starts not one but two processes.
one of these processes is a **server** that runs as a **daemon** when the server starts up it launches a **shell** and keeps it open.
the other process is a **client** that runs in **your terminal**.
when you type into your **terminal** to tmux send your **keystrokes** to the **server** and the server forwards them to its **shell**.
as any output from that shell is forwarded from the server back to the client and from the client to your terminal.
****
there are times when you want to send commend to tmux itself not to terminal
to allow you to do this tmux is always listening for a special command character tmux calls this the prefix character and by default it's control B
when you press control B T MUX doesn't
send that keystroke along to the server
right away instead it waits for the


` - ?


in tmux scroll back is part of what's called copy mode to get into **copy mode**
to go to copy mode press **prefix + [**
then you can scrollback
space + <- | -> highlit text
enter = copy highlited text to paste-buffer and exit copy mode
prefix + ] = paste from paste-buffer



------------------------------------------------------------------------------------------------------------

KEY BINDINGS
     tmux may be controlled from an attached client by using a key combination of a prefix key, ‘C-b’ (Ctrl-b) by default, followed by a command key.

     The default command key bindings are:

           C-b         Send the prefix key (C-b) through to the application.
           C-o         Rotate the panes in the current window forwards.
           C-z         Suspend the tmux client.


           "           Split the current pane into two, top and bottom.
           %           Split the current pane into two, left and right.

           !           Break the current pane out of the window.
           &           Kill the current window.
           x           Kill the current pane.

           '           Prompt for a window index to select.

           (           Switch the attached client to the previous session.
           )           Switch the attached client to the next session.

           $           Rename the current session.
           ,           Rename the current window.

           -           Delete the most recently copied buffer of text.
           .           Prompt for an index to move the current window.

           0 to 9      Select windows 0 to 9.

           :           Enter the tmux command prompt.
           ;           Move to the previously active pane.

           =           Choose which buffer to paste interactively from a list.

           ?           List all key bindings.
           #           List all paste buffers.

           L           Switch the attached client back to the last session.
           [           Enter copy mode to copy text or view the history.
           ]           Paste the most recently copied buffer of text.
           c           Create a new window.
           d           Detach the current client.
           D           Choose a client to detach.
           f           Prompt to search for text in open windows.

           i           Display some information about the current window.

           n           Change to the next window.
           p           Change to the previous window.
           l           Move to the previously selected window.

           o           Select the next pane in the current window.
           q           Briefly display pane indexes.
           r           Force redraw of the attached client.
           m           Mark the current pane (see select-pane -m).
           M           Clear the marked pane.
           s           Select a new session for the attached client interactively.

           t           Show the time.

           w           Choose the current window interactively.

           z           Toggle zoom state of the current pane.

           {           Swap the current pane with the previous pane.
           }           Swap the current pane with the next pane.

           ~           Show previous messages from tmux, if any.
           Page Up     Enter copy mode and scroll one page up.
           Up, Down
           Left, Right
                       Change to the pane above, below, to the left, or to the right of the current pane.
           M-1 to M-5  Arrange panes in one of the five preset layouts: even-horizontal, even-vertical, main-horizontal, main-vertical, or tiled.
           Space       Arrange the current window in the next preset layout.
           M-n         Move to the next window with a bell or activity marker.
           M-o         Rotate the panes in the current window backwards.
           M-p         Move to the previous window with a bell or activity marker.


           C-Up, C-Down
           C-Left, C-Right
                       Resize the current pane in steps of one cell.
           M-Up, M-Down
           M-Left, M-Right
                       Resize the current pane in steps of five cells.


# Key bindings may be changed with the bind-key and unbind-key commands.
------------------------------------------------------------------------------------------------------------
GNU screen
==========

- prefix C-a

short cuts:
- prefix - d -> detach



> commands:
- screen -ls
- screen -S <session_name>
- screen -r <part of [PID | session_name]>

imter-proccess communication


 sabry@falcon  ~  sudo dnf search gopher                                                                                                                 ✔  6285  02:42:54
Last metadata expiration check: 2:31:01 ago on Wed 03 Apr 2019 12:11:59 AM EET.
======================================================================== Summary & Name Matched: gopher ========================================================================
kio_gopher.x86_64 : Gopher KIO slave for Konqueror
golang-layeh-gopher-luar-devel.noarch : Custom type reflection for gopher-lua
golang-github-yuin-gopher-lua-devel.noarch : GopherLua: VM and compiler for Lua in Go
golang-github-rackspace-gophercloud-devel.noarch : The Go SDK for Openstack http://gophercloud.io
golang-github-rackspace-gophercloud-unit-test.x86_64 : Unit tests for golang-github-rackspace-gophercloud package
============================================================================= Name Matched: gopher =============================================================================
golang-github-gopherjs-devel.noarch : Compiler from Go to JavaScript for running Go code in a browser
=========================================================================== Summary Matched: gopher ============================================================================
golang-honnef-js-dom-devel.noarch : GopherJS bindings for the JavaScript DOM APIs
 sabry@falcon  ~                                                               