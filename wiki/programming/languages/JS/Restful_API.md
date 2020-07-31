- Hypertext Transfer Protocol (HTTP) is an application-layer protocol built on top of TCP/IP protocol
- follows a classical client-server model
- HTTP is a stateless protocol


- GET  -> show
- POST -> create
- PUT -> update
- DELETE -> delete



- postman -> http client
- swagger -> API Documentation



- https://jsonplaceholder.typicode.com/
- npm i -g json-server


- api-first


AJAX(vanilla - JQuarry - ) - fetch API - 
- fet data from (text file - local JSON file - external API)



Request:
- GET /?id=1&name=sabry HTTP/1.1
- Host: www.google.com
- Connection: keep-alive
- Cache-Control: max-age=0
- Cookie: 



Response:
- HTTP/1.1 200 OK
- User-Agent: Mozilla/5.5.04
- Content-Type: text/html; charset:UTF-8
- Content-Length: 200
- Connection: keep-alive
- Keep-Alive: timeout 50, max 100
- Server: Apache/2.4.10 (Unix) PHP/5.5.20
- X-Powered-By: PHP/5.5.20
- Date: Tue, 7 Aug 2018 00:29:59 GMT
- Set-Cookie: PHPSESSID=32CHAR; path=/
- Expire: Tue, 14 Aug 2018 00:29:59 GMT
- Accept:
- Accept-Encoding: gzip, deslate, sdch
- Accept-Language: en-US,en;ar;




every HTTP request is executed independently so on the server side it does not have knowledge of any of the requests that came before it and that's what makes HTTP stateless but there's an interesting thing it's built on top of T CPI P which is not stateless so how does that work basically when you send an HTTP request its issuing a connection via tcp/ip to the other side it could be a server or decline and the tcp/ip connections stay is connected HTTP will send what it needs to and then it's going to disconnect hence it's known as stateless one of the cool things about HTTP is that you can transfer anything in the body as long as the HTTP headers define what is being transferred so for instance if you have an image versus HTML file versus a JavaScript file embedded in your body then you need to specify the content type in the header and that's how the receiving end knows



Request Parameters VS QuaryString


> middleware:
next()



res.send()



//