clipboard
=========

> What clipboard? There are some apps/tools that can be used to store clipboard contents to a file on disk, but the core clipboard feature in X11 simply keeps what is in the clipboard, in memory. It is not stored in a file on disk.


> You seem to be lacking an understanding of clipboards in Linux. There are 3 usually available to users.

These clipboards are called "Selections"

There is:

PRIMARY - This is normally used for middle mouse button = copy/paste
SECONDARY - Normally not used by much, but it exists. Usually as an in app specific copy and paste.
CLIPBOARD - Usually Ctrl+c and Ctrl+v style copy and paste.
All of them are stored, by default in memory of the controlling application (usually Xorg, but not always). And every child application has access to it.

Clipboard monitors and managers exist that can monitor the clipboards and store their contents in a file, or more commonly, let you review your clipboard history.





- xclip: Command line interface to the X11 clipboard

pbcopy="xclip selection clipboard"
pbpaste"xclip selection -o"
pbselect="xclip selection -O"

:n :N-> next file
:read ! ls -la /home


- xsel
alias pbcopy='xsel --clipboard input'
alias pbpaste='xsel --clipboard output'



> Selections:
- PRIMARY
- SECONDARY
- CLIPBOARD