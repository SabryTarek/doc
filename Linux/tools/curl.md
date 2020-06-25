[CURL](https://www.curl.org)
============================
tool to transfare data between server and client

> usage
- download files
- http clinet like a postman & fiddle




"options" "switches" "arguments"
---------------------------------
- curl https://www.google.com

op | def
---|----------
-O | download
-H | write header
-vv| verbose



CURL Beginner Tutorial:

Today we will learn:
1. What is CURL
2. How to run curl on windows
3. How to run api requests with curl : GET, POST, PUT, DELETE

Ref:
https://curl.haxx.se/
https://reqres.in/
--------------------------------------------------------------------------------------------
GET ONLY RESPONSE
curl url
--------------------------------------------------------------------------------------------
GET RESPONSE AND HEADERS
curl -i url
--------------------------------------------------------------------------------------------
GET ONLY HEADERS
curl --head url
curl -I url
--------------------------------------------------------------------------------------------
GET DETAILS OF CLIENT SERVER INTERACTION
-v verbose
curl -v url
--------------------------------------------------------------------------------------------
GET EVEN MORE DETAILS AND LOG ALL INTERACTION TO FILE
--trace
--trace-ascii
curl --trace FILE URL
--------------------------------------------------------------------------------------------
SEND HEADERS IN REQUEST
-H
curl -H "Accept:application/json"
--------------------------------------------------------------------------------------------
POST
-d or --data

 "name": "morpheus",
    "job": "leader"

-X POST 
curl -X POST -H "Accept:application/json" https://reqres.in/api/users -d '{"name": "morpheus", "job": "leader"}'


--------------------------------------------------------------------------------------------
PUT
-X PUT

curl -i -X PUT https://reqres.in/api/users/2 -d '{"name": "morpheus", "job": "zion resident"}'

--------------------------------------------------------------------------------------------
DELETE
-X DELTE
curl -i -X DELETE https://reqres.in/api/users/2
--------------------------------------------------------------------------------------------
curl -u <user_name>:<password> ... <URL>
--------------------------------------------------------------------------------------------

HTML
XHTML
Dynamic HTML (DHTML) = HTML + CSS + JavaScript # don't intreduce any kind of standard
XML
XMD

XML-RPC
JSON-RPC


Free MySQL Database.
- to be used only for testing purpose

http://www.freesqldatabase.com/

https://www.db4free.net/

note : these db have limited capacity and will be very slow. It can be used only for test purpose .
