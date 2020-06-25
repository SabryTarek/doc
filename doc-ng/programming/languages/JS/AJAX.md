
what is Ajax:
it's an acronym for
asynchronous JavaScript and XML it's not
a language it's not a framework or a
library it's simply a set of web
technologies to send and receive data
from a client to a server asynchronously
so it's all done behind the scenes
without having to explicitly reload the web page

Allow you to make HTTP Requests in your app

front end tool to connect with backend

- JQuery -> DOM Manpulation Liberary
- JSON MIME Type : Application/json


AJAX alternatives:
==================
- JQuery

* HTTP Liberaries:
    - Axios
    - superagent

- fetch API

- Protortpe

- Node HTTP


http requests:-
- html file
- each link (scripts, stylesheets, images, fonts, )


XHR object == XMLHTTPRequest 




XMLHTTPRequst API built in 
- readyState 0:4
- 



what is the deffrance of https://google.com and https://www.google.com


API:-
- web API
web service




EX:

var req = new XMLHTTPRequst();
console.log(req.readyState); // 0
req.open('http_method',
         'url',
          optional Boolean *true == asyncronous || false == synchronous);
req.open('GET', 'https://randomuser.me/api/?result=5');
console.log(req.readyState); // 1




// AJAX Example

let req = new XMLHttpRequest();

console.log(req.readyState);

req.open('GET', 'https://randomuser.me/api/?results=5');
req.send();

console.log(req.readyState);
if (req.readyState == req.DONE) {
    
    console.log(req.response);
}


------------------------------------------------------------------------------------------------
Charizm0
Please do a video on hosting multiple django projects with gunicorn nginx for reverse proxy.

-------------------------------------------------------------------------------------------------

Yaniv Salman
suggestiones for some  videos:
shoelace.css
marko.js
moon.js

------------------------------------------------------------------------------------------------


Elissa
thank u so much for these wonderful informative videos. do you teach the stuff about authentification and CORS?  i probably need that for my python-ajax since my server is pythonanywhere.

------------------------------------------------------------------------------------------------
JSON-valid data types: BASONN:

Booleans
Arrays
Strings
Objects
Numbers
Null

BASONN, rhymes with JSON


------------------------------------------------------------------------------------------------
JSON.parse(person); -> convert to javascript object
JSON.stringify(person); -> convert to JSON serialization


js object          | JSON
-------------------|------
BASONN + functions | BASONN
key : "value";     | "key" : "value";

------------------------------------------------------------------------------------------------
curl is just basically
a tool that we can use to transfer data
using multiple protocols including HTTP
