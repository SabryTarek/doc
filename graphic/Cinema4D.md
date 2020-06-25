Cinema 4D
========

shortcuts:
------------
c -> free polygon
select shape + alt + select from extrude menue
shift + F8 = liberary
F1-> F5 = prespective
loop selection
Extrode inner
Extrode
bevel
filter -> axis
tag = R.C on shape > polygon
R.c > soft


سلام عندي مشكلة عندما اريد تصدير ملف السينمافوردي الى صيغة أوبج يتم تصدير الملف الى هذه الصيغة لكن تختفي الالوان وكذلك يختل تنظيم قائمة المجسمات اذا كنت تعرف الحل لا تبخل علي وشكرا على الدروس المفيدة﻿


بالفعل انت لما بتصدره بالامتدادا داه بتحتاج تركب اللخامات تاني فى البرنامج اللى هتشتغل عليه 
حاول تجرب 3DS﻿











أداة SocialFish نفس أداة SET تنتج لك صفحات تسجيل الدخول طبق الأصل من المواقع دي :

Facebook
Google
LinkedIN
Github
Stackoverflow
Wordpress

لينك : https://github.com/UndeadSec/SocialFish

تثبيت الأداة :

git clone https://github.com/UndeadSec/SocialFish.git

تشغيل الأداة :

cd SocialFish
sudo pip install -r requirements.txt
python SocialFish.py








- Don't want the app to access (inter)net   ->   --net null
- isolated network? --net <network_name> (in this case you need to create the Docker Network before)
- --memory 1gb
-  --cpuset-cpus 0,3 or --cpuset-cpus 0-3








-v /tmp/.X11-unix:/tmp/.X11-unix \
-e DISPLAY \

--device /dev/dri \ # 3D hardware acceleration support
--device /dev/snd \ # Audio
--device /dev/video0 \ # Webcam
-v /etc/localtime:/etc/localtime:ro \  # Using same date/time as host
### some distros don’t use /etc/localtime to set the timezone, in those cases you’ll need to check how it does it and “replicate” at the container
-v $HOME/.config/app:/root/.config/app \
--device /dev/input \ # Video-game controller






sound doesn’t work for exemple and as Docker for Mac/Windows runs with VM, you may expect a little performance loss





engine x] nginx]
    "Igor Sysoev"
- reverse proxy server
- HTTP server
- mail proxy server
- TCP



Docker Server===Docker Engine===Docker Core====dockerd
Docker Client===Docker CLI

- Container by default hasn't access to the Internet, so we should expose a port from container to host to e accessable to the Internet

- every image we downloaded docker put it in cache


byte code = machine code = object code binary code but represented at debugger in hexadecimal for simplicity

ijs igs
network monitor
public exploit
vulnerability

Reverse engineering
fuzzing
source code rewiew:
    - white way (white box) -> show code and review it
    - black way (black box) -> review your app without showing your code



Hassan Saad
Nine hackers


- information Gathering



























