cluster benifits:-

وقد يتم استغلال مصادر وامكانيات السيرفرات في عمل : 

- Load Balance
يقوم بتوزيع مستخدمي قاعدة البيانات على السيرفرات بالتساوي تقريبا .

- Fail Over
في حالة اعطاء query طويل لسيرفر معين و فصل هذا السيرفر لسبب معين لا تقوم بإلغاء الquery بل تقوم بتكملته من السيرفرات المتصلة على RAC

- Parallel processing
في حالة اعطاء query معقد يقوم بتقسيمه على اكثر من CPU




 سيتم تخزين ملفات قاعدة البيانات في مكان واحد هو Shared Storage وهو عبارة عن وحدة تخزين وسيطة مرتبطة بكل السيرفرات nodes يتشاركوا جميعا في تخزين البيانات عليها ولا يتم تخزين اي ملفات بيانات على هاردديسك كل سيرفر الا بعض ملفات التحكم الخاصة بقاعدة البيانات ..............



------------------------------------------------------------------------------
> cluster types depend on usage:

* storage:
    - Ceph
    - Gluster

* proccessing big data:
    - Hadoop
    - Spark
    - Hive

* workloads management:
    - kubernates
------------------------------------------------------------------------------


nodes
master (frontend)









- High Availabilty -> resolve single point of faillure
    - active active
    - active passive
- Load Balancing   -> HA Proxy  -> varnish, nginx ->LoadBlancer -> more 
- High Performance



redhat cluster maximum nodes -> 16