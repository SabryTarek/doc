const express = require('express');
const app = new express();
  
app.get('/', (req, res) =>
res.send(`Hello, World! ^_^`);
 );
app.listen(3000); || .listen(process.env.PORT || 3000, listen);

function listen() {
  var host = server.address().address;
  var port = server.address().port;
  console.log('Example app listening at http://' + host + ':' + port);
}

----------------------------------------------------------------------------------

const express = require('express');
const app = new express();

app.get('/', (req, res)=>
	
	let html = `<!Doctype html>
			<html>
				<head>
					<title>blog</title>
				</head>
				<body>
					${posts.map(posts) => `<il> ${posts.title} </il>`}	
				</body>
			</html>`
	res.send(`Hello, World! ^_^`);
	
	);
app.listen(3000);
----------------------------------------------------------------------------------
- npm i express-generator -g
- npm i body-parser
- bootstrap zero website
- layout & sublayout ejs-locals || ejs-mate -> in other view engines
- c# to html in asp.net -> view engine Razor

- node authentication - node passport -> + passport-[local, facebook, twitter, ...](who are you)
- Bcrypt hash password
- node authorization - node acl (what you can do) -> every catgrory have a role
- flash -> send massages from server to client
- morgan -> create logs
- express-session -> manage login sessions




- gulp
- jshint
- jscs
- jshint-vs-code
- gulp-jshint
- gulp-jscs

