ffmpeg
======

ffmpeg -i (input)  output

input: -i [file, screen(x11grab), webcam(/dev/video0)]
format: -f
size: -s 1080x1920
auto overwrite output: -y



- Media containers
- Streams
- CODECs



- ffmpeg -i <input_file>.mp4 <output_file>.mp3 convert Video to Audio


 in mp4 format Audio stream is AAC format




 technically imagine that mp4 first list machst into its video stream and it's audio stream
 and then the video stream is dropped
 the audio stream is then **decoded** from an **AAC** format and then it's put through a **filter** which **encodes** it into an mp3 format
 and then it's must back into the container format of mp3



previous slide I mentioned that I knew the audio stream was in AAC format.
How you know so how do you know that the audio stream was in AAC format.
you can use FFProbe for these kinds of queries.
it has a lot of the same command-line syntax as ffmpeg they share a lot of the same options
so you can you can call FFprobe -i and then your input and here's the
relevant out output from that that
command it tells you your container
information up here at the top that the
container was detected to be of type mp4
or m4a those are synonymous tells you
the duration of the input file

it's bitrate and then we get down into
the streams the video stream and the
audio stream the video stream is in a
h.264 format with 1280 by 720 size per
frame audio stream is in an AAC format
so that's that's how I knew in the
previous example the audio stream was in
the AAC format something else to get
used to with ffmpeg
is the way that streams are identified
so it says stream pound zero colon zero
and stream pound zero colon one what
this means is the zero means the first
file 0 and 1 are the stream numbers
within the input file that becomes
relevant because you have to identify
what you want to do with particular
streams or particular input files some
other things to notice about the audio
stream is that the sampling rate is 44
kilohertz and as a preview we can have
more than one input file on the command
line
so another thing you might want to do is
it's just copy a stream out of an
existing video file a common thing to do
is copy the audio out of a video file in
the previous example we transcoded the
audio stream out of a video file we've
went from an AAC format to an mp3 format
you might want to just just copy it
because well you could introduce losses



mp4 === m4a


- ffmpeg -i <input_file>.mp4 -vn<output_file>.mp3 #convert Video to Audio


- vn -> video none
- c:a copy
    - c -> codec
    - a -> Audio stream




Hi, I used the following ffmpeg command to capture the screen on Linux:
ffmpeg -f x11grab -r 25 -s 1280x720 -i :0.0+97,191 -an -vcodec libx264 -preset ultrafast -qp 0 -threads 0 output.mkv
where 97,191 is the upper left corner of the grab rectangle and 1280x720 is the widthxheight of the rectangle. Then I recorded sound on a second computer running OS X, probably using Garageband or Logic, but you could use audacity as well, on the same computer. It is even possible to add ffmpeg flags to record audio directly, something like -f alsa -ac 2 -i $alsadev -acodec pcm_s16le where $alsadev is the name of your alsa device. Run something like arecord -L to list devices. And lastly I synced video and audio using a video editing software on OS X (iMovie or Final Cut), but there are several variants for Linux too, like for instance OpenShot.














Convert and edit videos from the command line.
Quick, easy, low resources needed.



digital

codac = [co]der % [dec]oder
- one of the most important pieces of metadata




Digital video files are made up of two parts: a codec and a container. Most video formats are named after their container. When you see a file type such a .MP4, .AVI, or .MOV, it doesn’t tell you exactly what the video file format is – it’s only telling you the container type.

Choose a video file format based on three things: it’s purpose, the hosting location, and your audience.






There are common video codecs that will meet most of your needs:

H.264
MPEG-4
DivX
MPEG-2
HEVC (H.265)

vedio:
- MP4
- avi
- MPG
- MOV

Audio:
- MP3
- wav


bit rate
frame rate
scale image size



------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ffmpeg](https://www.ffmpeg.org/)
=================================

FFMPEG consist of:

- ffmpeg: command line tool to convert multimedia files between formats
- ffplay: simple media player based on SDL and the FFmpeg libraries
- ffprobe: simple multimedia stream analyzer





> FFmpeg Libraries for developers:

- libavutil: is a library containing functions for simplifying programming, including random number generators, data structures, mathematics routines, core multimedia utilities, and much more.
- libavcodec: is a library containing decoders and encoders for audio/video codecs.
- libavformat: is a library containing demuxers and muxers for multimedia container formats.
- libavdevice: is a library containing input and output devices for grabbing from and rendering to many common multimedia input/output software frameworks, including Video4Linux, - Video4Linux2:, VfW, and ALSA.
- libavfilter: is a library containing media filters.
- libswscale: is a library performing highly optimized image scaling and color space/pixel format conversion operations.
- libswresample: is a library performing highly optimized audio resampling, rematrixing and sample format conversion operations.