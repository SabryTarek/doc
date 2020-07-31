[Youtube-dl](https://yt-dl.org)
===============================
breaf:
- written in python




sudo curl -L https://yt-dl.org/downloads/latest/youtube-dl -o /usr/local/bin/youtube-dl
sudo chmod a+rx /usr/local/bin/youtube-dl

pipenv install youtube-dl


- youtube-dl <video_link> | <playlist_link> | <channel_link>
- udemy-dl
- coursera-dl
- edx-dl
--playlist-start
--playlist-end



--playlist_items 1,3,7-20



YOUTUBE SUBTITILE EXTENTION -> .vtt, .ttml, .srv3, .srv2, .srv1
common used subtitile -> .srt



### ref:
- https://github.com/ytdl-org/youtube-dl

<!-- combine the separate .vtt subtitle file and .mp4 video file into a single video file. -->
ffmpeg -i <vidoe_path>.mp4 -i <subtitle_path>.vtt -c:s mov_text -c:v copy -c:a copy ‘video with embedded subtitles.mp4’


-----------------------------------------------------------------------------------------------------------------------------
## configration

--ignore-config
--config-location <custom_configuration_file>
youtube-dl.conf

defult configtation file location:
linux:
    all users:
        - /etc/youtube-dl.conf
    spasific user:
        - ~/.config/youtube-dl/config
windows:
    - %APPDATA%\youtube-dl\config.txt || C:\Users\<user name>\youtube-dl.conf


Example:
# Lines starting with # are comments

# Always extract audio
-x

# Do not copy the mtime
--no-mtime

# Use this proxy
--proxy 127.0.0.1:3128

# Save all videos under Movies directory in your home directory
-o ~/Movies/%(title)s.%(ext)s
-----------------------------------------------------------------------------------------------------------------------------
## Authentication

-u === --username <your_extrsctor_username>
-p === --password <your_extrsctor_password>




--netrc

touch $HOME/.netrc
chmod a-rwx,u+rw $HOME/.netrc


machine microsoft-stream login sabri2016170226@cis.asu.edu.eg password Ss42205657sS
machine youtube login myaccount@gmail.com password my_youtube_password
machine twitch login my_twitch_account_name password my_twitch_password



https://github.com/ytdl-org/youtube-dl/blob/master/docs/supportedsites.md


irc://chat.freenode.net/#youtube-dl
https://webchat.freenode.net/#youtube-dl