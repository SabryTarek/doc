Node.js
=======
interpretted
packages = Modules = Libireries = API

- run out of a browser
- without DOM or BOM

global object in javascript -> window
global object in nodejs-> global

javascript : : NON
- blocking i/o 
- single threading
- multi threading  -> memory problem
------------------------------------------------------

***procces Module***
------------------------

procces. {stdout, stdin, argv[] }

```javascript
procces.stdout.write(Hello, Node.js!);
```

------------------------------------------------------
OS Module
=========

var os = require("os");

```javascript

procces.stdout.write(Hello, Node.js!);

```
<hr>

------------------------------------------------------

Modules
=======
- core (built-in)
- helping "third party"
- custom "your own module"


Node Globales
=============
- process
- console
- require()
- module


module.exports.
module.exports.x=xx;

File System
===========

roles:
- methods name convention fs.readFile -> asynchronous, fs.readFileSync -> synchronous
- asynchronous functions must have callback function (function as a parameter)


CRUD Operations
- Create
- read
- update
- delete
- remane
const fs = require('fs');

fs.readFile("filePath", (err, data)=>{});
fs.readFileSync("filePath");

fs.writeFile("filePath", what_you_write);
fs.writeFileSync("filePath", what_you_write);

fs.watchFile("filePath", (previous_data, curent_data)=>{});
fs.watchFileSync("filePath"); like event handler onChange




const fs = require('fs');  ===  import fs from 'fs'

------------------------------------------------------------------------------------------------------
events
======
trigger fire
```javascript
let res = fs.readfile("/home/sabry/test.txt")
res.on("open", print())
const events = require('events')
const EventEmitter = new events.EventEmitter()

print () => console.log('first event handler')
EventEmitter.on('log', print())
EventEmitter.emit('log;)

```
------------------------------------------------------------------------------------------------------
Back-end
=======

Nodejs stack
- Express
- koa
- hapi
- Sails.js (MVC framework based on Express js which is based on Node js) 



https://gist.github.com/clarle/3180770
https://stormpath.com/blog/build-nodejs-express-stormpath-app


> middleware: like extension for web browser.


- nightmarejs
- puppeter
- casperjs
- phantom.js
- Cheerio







source maps:
- map code of preprocessor to html || css || js , by one of two ways :
- collect both in the same file or line refre to source map like (main.js -> main,js.map)
- use it in development only not production other opinion use it in production and like it with error tracking tool like (sentry) for better debugging 
gulp-sourcemaps
webpack devtool options




devtools -> more tools:
- animation: allow you to slow motion your animation and see time line
- coverage: how many percent of using your files (html, css, js, img, vid, ...) in your site
- layer:


twiter:
- @paul_irish
- @chromeDevTools
- @chromiumDev



chrome developers youtube channel


hot module replacement  (hmr) live reload in js but keep internal state -> reload the part which it code edited only, if you make a form and edit at input field code -> in the browser this input reload only but other form parts not 
- webpack dev-server hot option
- browserify hmr


environment variable: NODE_ENV=(deveopment || production) use it to separate dev configuration against production configuration which make easy for task runner and CI/CD conditional logic in your code



chrome canary -> chrome alpha channel




not used prameters with ather color

nodemon --exec babel-node index.js

------------------------------------------------------------------------------------------------------

[
"http",
"events",
"util",
"domain",
"cluster",
"buffer",
"stream",
"crypto",
"tls",
"fs",
"string_decoder",
"path",
"net",
"dgram",
"dns",
"https",
"url",
"punycode",
"readline",
"repl",
"vm",
"child_process",
"assert",
"zlib",
"tty",
"os",
"querystring"
]