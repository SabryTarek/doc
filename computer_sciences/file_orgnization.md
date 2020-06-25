File Organization
==============


* Buffer :-  part of main memory "RAM" available to storage copies of disk blocks
	* minimize number of disk accessing
	* benifte from RAM



field structure types :-
- length
- Begin each field with a length indicator
- delimiter
- key value









FAT32 :-
- not support :-
	- file more than 4 GB
	- compress
	- encryption


- seek time
- defermentation







فتح الملفات واقفالها(open file -file locking)
تتم عن طريق: 
 
1-مؤشر الملف(file pointer):
في الأنظمة التي لاتحتوي على  (file offset)كجزء من القراءة والكتابة  في الsystem calls  ,يجب على النظام تتبع اخر مكان للقراءة والكتابة في الملف ويعتبرهذا المكان  للمؤشر ,هذا المؤشر وحيد لكل عملية في الملف لذلك لابد من ابقاء هذا المؤشر منفصل عن ماهو موجود في
( disk file attributes).
 
2-عداد فتح الملف(file-open-count):
عند اغلاق الملفات يجب على نظام التشغيل اعادة استخدام جدول تسجيل دخول الملفات المفتوحة open-file table entries)),أو يستطيع التشغيل خارج المساحة في الجدول ،بسبب متعددة العمليات التي قد تملك ملف مفتوح ,يجب على نظام التشغيل الانتظار لاخر ملف حتى يغلق قبل ان يحذفه من جدول تسجيل الدخول (open-file table entries)ثم.يقوم العداد بتتبع عدد ماتم فتحه وغلقه فيقوم بوضع القيمة صفر لاخر عملية غلق بذلك يستطيع النظام ان يحذفه.
 
3-موقع الملف على القرص(disk location of the file):
أغلب عمليات الملف تحتاج النظام لتغيير البيانات من ضمن الملف , المعلومات محتاجه لتحديد موقع الملف في disk الذي يبقيه في الذاكرة لذلك النظام لا يقرأ من القرص لكل عملية.  
 
4-حقوق الوصول(access rights):
لكل عملية فتح ملف نمط وصول ,هذه المعلومات تحفظ في الجدول لكل عملية لذا نظام التشغيل يستطيع السماح أو يمنع طلبات الادخال والاخراج (I/O) اللاحقة.
 
قفل الملفات ((File locking:
 
قفل الملفات هي الية في أنظمة الملفات للوصول الى الملف من قبل مستخدم واحد أو عملية واحدة و تعالج بأي وقت معين
 
يمكن الوصول الى الملف بطريقتين: 
 
1-  طريقة الزامية(Mandatory):
   
 عند قيام المستخدم بالتحديث على ملف معين لايمكن لمستخدم اخر التعديل عليه الا بعد انتهائه  
  
2-طريقة اختيارية(Advisory):
 
تسمح للمستخدمين التعديل والتحديث بعكس الطريقة الأولى  
 
 
 الاسم: لمياء الشهري
المصدر :operating system concept



> Resources:


* Playlsit:

Lab
- https://www.youtube.com/playlist?list=PL_lmukQIYAbo4Tntn3YUzq29KLuU-kfEa