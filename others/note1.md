I don't think you have to start dunst. It should just start by dbus.

i think one have to register it for dbus in that case. doesn't autostart on my machine.







Great video although i'm having an issue, I can't start dunst it says CRITICAL: Cannot acquire 'org.freedesktop.Notifications': Name is acquired by 'Xfce Notify Daemon' with PID '1281'. any ideas?


budlabs
budlabs
4 months ago
thanks! sounds like you are already running a notification daemon other then dunst. My guess is that xfce has a built in notification daemon, it can probably be turned off somehow, i dont't use xfce myself, but if i would i would search for: disabling xfce notification daemon, replace with dunst.


budlabs
budlabs
4 months ago
i think this will work, but can't promise, since i don't use xfce myself: https://askubuntu.com/a/104275


Brett L
Brett L
4 months ago
Fixed it by disabling the xfce4 notification. Thanks.










lolban is the output of figlet piped through lolcat. I have a video where i show how it works. That video is called: Let's Linux #009: Automatic script creation, and can be found here: https://youtu.be/QGUmMtEnIkI

The figlet font used with lolban is created by xero. It is called: 3d.flf
And can be found on github:
https://github.com/xero/figlet-fonts


















