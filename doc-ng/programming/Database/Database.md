Database
========
- OldSQL (Relational)
- NoSQL (NON-Relational)
- NewSQL
- Time Series Dataase (TSDB)

-------------------------------------------------------------------------------------------------------------
- SQL
	- MySQL = MariaDB
	- MS SQL Server (Microsoft)
	- [SQLite & SQLite3](./Relational/SQLlite3.md)
	- PostgreSQL
	- PL-SQL (Oracle)
-------------------------------------------------------------------------------------------------------------
- NoSQL (No-Relational)
- Document:
	- MonogoDB
	- CouchDB
- Column:
	- Cassandra
	- HBase
- Key-value(hash-table fast cache memory):
	- Redis
	- Memcached
	- FoundationDB
- Graph(Node, Relationship):
	- Neo4J
	- flockDB
-------------------------------------------------------------------------------------------------------------
- Time Series Dataase (TSDB)
	- influx
	- premetuse
-------------------------------------------------------------------------------------------------------------

- SQL: Structure Query Language
- Structured vs Semi Structured
- Schema -> strict schema
- Normalization
- Denormalization
- Join
- Trigers
- Indexes
- Optmitation
- مبدأ الـ Consistincy (ببساطة هو جعل البيانات متشابهة تماماً في جميع نسخ قواعد البيانات المنتشرة على خوادم مختلفة


التطبيقات التي من الممكن استخدام الـNOSQL بها، يفضل ان لا تعتدم على الكثير من الQuery.
مثلا، تطبيق لاضافة المقالات والتعليقات بحيث يكون الغرض منه عرض واضافة المقالات بشكل سريع، دون الحاجه للاستعلام عن المستخدمين ومواضيعهم او المستخدمين النشطين و…. الخ
-------------------------------------------------------------------------------------------------------------

- Horizintal Scaling (scall-up)
- Vertical Scaling (scall-out)


Modern Web Application


relation desn't stored in database but happen in runtime (quary) which put a headche at database server and performance


قواعد البيانات NOSQL تحت اسم Mongo DB
تم تطوير قواعد البيانات NOSQL للتغلب على بعض القصور الموجود في قواعد بيانات SQL أثناء عملية التوسع (Scaling) والتعامل مع البيانات الضخمة.
حيث ان قواعد البيانات NOSQL تفضل الإستغناء عن مبدأ الـ Consistency (ببساطة هو جعل البيانات متشابهة تماماً في جميع نسخ قواعد البيانات المنتشرة على خوادم مختلفة) مقابل الحصول على أداء عالي وجعل البيانات متاحة في جميع الأوقات (Performance and Availability).
-------------------------------------------------------------------------------------------------------------
sqldump -u root -p database_name > database.sql;
sql -u root -p database_name < database.sql;

/var/lib/mysql -> where database is saved
mysql_secure_installation
grant all on *.* 'user'@'hostname' identefid 'password'
*.* -> database.table

-------------------------------------------------------------------------------------------------------------