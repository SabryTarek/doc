- Daemonless
- Rootless

احد اوجه الاستعمال هي بيئة متعددة المستأجرين

Multi tenant

يعني لو انت عندك 10 زبائن
بطريقة دوكر العادية يكون هناك خادم دوكر واحد بصلاحيات الجذر وهذا غير امن

لكن قي حالة podman
كل مستاجر يشغل حاوياته بمستخدمه
--------------------------------------------------------------------
Buildah
- Daemonless


quay -> Redhat Containers Rigister
- use BitTorrent for container images distribution
- quay.io

تقوم فلسفة يونكس على فكرة الاداة الواحدة تقوم بمهمة واحدة (do one thing and do it right
)
لكن دوكر يخالفها فهو يجلب صور الحاوريات وينفذها بل ويبنيها

تعرف الى 
Podman
Buildah -> build docker image without docker
Skopeo -> convert images to diffrant types

وهو جزء من مبادرة ترفض العفريت الذي يقوم بكل شيء no fat daemon
-----------
gotty -w podman run --rm -ti busybox

-----------


هذه صورة لتنفيذ gotty 
للدخول لجلسة byobu-tmux

./bin/gotty -w byobu-tmux
--------------------------------------------------------------------
unix philosophy



اين systemd من فلسفة unix ؟

طبعا يحققها
هناك الكثير من الادوات فيه
لكن كل اداة لا تؤدي الا وظيفة واحدة
مثلا هةاك
Journald
Logind
Dbus API
...
فعليا عفريت systemd
لا يقوم الا بالاستماع للاحداث وتشغيل العفاري

سبق وشاركت مقال لاحد منتقدي 
Systemd
ليس ذلك فحسب بل وصاحب نظام بديل عنه
في ذاك المقال قام بتقسيم الانتقادات الموجهة ل systemd
وقسمها الى هراء والى انتقادات حقيقية
حيث وضح ان systemd 
يعتبر مقسم الى وحدات
Modular
كل واحدة تؤدي وظيفة واحدة




Because these containers are not running via Docker, they will not be viewable via the Docker CLI.



podman run -it alpine sh

Once you have a shell, the security of the container can be tested by using Am I Contained by jessfraz.

wget -O amicontained https://github.com/jessfraz/amicontained/releases/download/v0.3.0/amicontained-linux-amd64; chmod +x amicontained; ./amicontained




الفرق هو في الهدف وطبيعة الاستخدام
وليس في التقنية المستخدمة
كلاهما يستعمل نفس مزايا في النواة وهي
فضاءات التسمية ومجموعات التحكم... التي تشكل اساس الحاويات

لكن الفرق الجوهري هو في استعمال هذا العزل

نظام openvz
مثل lxd
المبني على lxc
يعملون صناديق معزولة على انها اجهزة افتراضية
Light virtualization
وهو عمليا نصب واحتيال وبيع الهوا في قزايز
خصوصا في بيئة متعددة المستاجرين
Multi-tenant
وان لم تكن فانت تخش نفسك

اما الحاويات مثل docker
و oci-d و podman
Rkt
وغيرها
فتستعمل كبيئات تنفيذ
Runtime
لشحن العمليات كما هي


Containers are just normal Linux Processes with additional configuration applied



libpod contains podman



ما هو podman
Manage
Like · Reply · 4w
Muayyad Alsadi
Muayyad Alsadi
شيء مثل دوكر لكن به الكثير من المزايا الأقوى

منها أنه لا يحتاج عفريت daemon
وأنه يعمل دون الحاجة لصلاحيات الجذر rootless
وأنه يمكنه عمل أكثر من حاوية في نفس الفضاء

























#nobigfatdaemons

















 > Containers Registries:
- docker.io
- quay.io
- registry.fedoraproject.org
- registry.access.redhat.com
- registry.centos.org