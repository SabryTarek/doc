Brainstorm
===========

-----------------------------------------------------------------------------------------------
- to access this file or directory you should enter a paasword ?? firewall  >> encrtpt program like truecrypt and ...
- R.C -> [to small, to capital, to camel case, to pascal case, to english, to arabic] program
- make internet quta like disk quta ->  
-----------------------------------------------------------------------------------------------
Ask at Telegram Group:
- clipboard Terminal-based app
- 
-----------------------------------------------------------------------------------------------



=> what is the difference between .cpp and.cbp

just connect the same way he did, just remember that the standard password in xampp is an empty string whereas in mamp or lamp it's set to 'root'. also, I still dont know why but I think the phpmyadmin interface runs on the apache server, cant get it to work without it running either


Regarding NODE, why not doing something for Microsoft SQL.
Have used both MSSQL and SERIATE libraries and would be nice to have your opinion. (I personally prefer the second one because I can use query with parameters)

is it prevent from mysql injection?



Travis why are you using app.get to post instead of app.post? and to update you use get instead of put? and last thing, should not be better to use the "?" in the update to avoid sql injection?﻿

Remember to always sanitizer input. Never use input directly in the query.﻿



Adam Jedlička
1 year ago (edited)
24:30 - line 87 - that's a nice candidate for SQL injection :)﻿

18


KACPER ROGOZ 5491 2019
KACPER ROGOZ 5491 2019
1 year ago
Hey, can you explain why that is? Thanks.﻿

2


Adam Jedlička
Adam Jedlička
1 year ago (edited)
He is concatenating SQL query with string he receives from user request. So if user in that requests sends malicious SQL query it will get executed. This vulnerability basically allows you (as a hacker) to do anything with target database.﻿

5


dragonattack46
dragonattack46
9 months ago
Fortunately you may use "Escaping query values": https://github.com/mysqljs/mysql#escaping-query-values
So in this case the query may look like this: let sql = 'UPDATE posts SET title = ' + connection.escape(newTitle) + ' WHERE id = ' + connection.escape(req.params.id)  +';﻿
 

Use parameterized query. https://blogs.msdn.microsoft.com/sqlphp/2008/09/30/how-and-why-to-use-parameterized-queries/﻿



luka kiesa
luka kiesa
11 months ago
Travis why are you using app.get to post instead of app.post? and to update you use get instead of put? and last thing, should not be better to use the "?" in the update to avoid sql injection?﻿

3


Traversy Media
Traversy Media
11 months ago
Basically, the reason for the get is because my goal of the video was to display how the MySQL driver works. I guess I kind of guessed that if people are using node they know not to do this but I probably should have mentioned it if I didn't.

2


luka kiesa
luka kiesa
11 months ago
Oh, yes you are right, i was only saying that just cause maybe you missed, or maybe you did it for a specific reason.﻿



Roger rodriguez
Roger rodriguez
2 months ago
your right this does display how the mysql driver doesnt really care about the type of request it is getting and mysql is not complaining when its getting the actual code in sql. but i would mention it when there is and actual user interface and the request is coming from a form.﻿


Shared hosting

FYI = For Your Information
FYI, real name for your "arrow function" is "delegate" IN C#

- templates -> use it for dynamic content instead of cgi scripts

- html5point converter to make the pptx into html page





shadow dom is a separate dom tree of
elements that you can create which is
not the part of the main document dom
but when you render it behaves like it's
a part of your main document




You should note that a lot of sass libraries are dead now because of PostCSS/Autoprefixer. Compass is officially dead. As for gulp plugins ... PostCSS is a gulp/webpack plugin. What plugins are you specifically referring to?






fontweight -> degree of font light


Cluster type "depend on nodes type":
- Bare Metal Cluster
- VM Cluster
- Container Cluster


then you install a container
orchestration engine on top of that

containerized workload






floating Terminal
transparent Terminal


immutable infrastructure
- solarized colorscheme



- font-manager
- filelight



fuser

--------------------------------------------------------------------------------------------------------------------------------------------------------

- Google services
- comine multipule WIFI Connections || comine multipule WIFI Connections with Ethernet


FOSS: Free Open Source Software
FLOSS: Free Liberal Open Source Software



- open source summit
- embedded systems conferance europe
- [bootlin](https://bootlin.com/)










-----------------------------------------------------------------------------

