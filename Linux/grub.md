
#كيف تعيد تثبيت Grub 
من توزيعة حيّة بالطريقة اليدويّة وبدون برامج إضافيّة:
^____________________________________^

_هذه الطريقة لا تعمل في حال كان القرص مشفّر ولا تعمل في حال تم تثبيت التوزيعة على قسم LVM
يتم حذف Grub في حال تثبيت ويندوز أو في حال حذف قسم /boot أو لأسباب أخرى.
يلزمك قرص حي LiveCD لأي توزيعة, أقلع منها وأدخل إلى وضع التجربة Try دون تثبيت التوزيعة, افتح الطرفيّة, ثم إتبع الخطوات التالية:
على إفتراض أنّ النظام مثبت على القسم: (استبدل sda1 بقسم التوزيعة المثبتة عندك)
/dev/sda1
ملاحظة: عليك تعديل الأوامر بما يتناسب مع القرص Disk والقسم Partition الذي تم تثبيت النظام عليه.
_________________
الحصول على صلاحيات الجذر:
sudo -i
توصيل قسم النظام والمجلدات اللازمة(عدل sda1 بحسب مكان التوزيعة عندك):
mount /dev/sda1 /mnt
mount --rbind /dev /mnt/dev
mount --rbind /sys /mnt/sys
mount --rbind /proc /mnt/proc

قم بتنفيذ الأمر التالي في حال كان مجلد /boot موجود على قسم مستقل, ولنفرض أنّه /dev/sda2
في حال كان مدمج مع قسم النظام تخطّى الأمر التالي:
mount /dev/sda2 /mnt/boot

الأمر chroot لكي تنتقل للنظام المثبت:
chroot /mnt
تثبيت Grub :
grub-install /dev/sda
تحديث Grub لكي يتم الكشف عن الأنظمة الأخرى, إختر الأمر الذي يناسب توزيعتك من الأوامر التالية:
update-grub
grub-mkconfig -o /boot/grub/grub.cfg
grub2-mkconfig -o /boot/grub2/grub.cfg
الخروج من النظام المثبت:
exit
إعادة التشغيل:
reboot
إنتهى.




طيب جرب دا اسهل 
Boot Repair
أوامر تثبيت وتشغيل Boot Repair:
1.sudo add-apt-repository ppa:yannubuntu/boot-repair
2.sudo apt-get update
3.sudo apt-get install boot-repair
4.boot-repair