// const http = require('http')

// const port = 8080
// const ip = 172

// http.createServer((req, res) => {
//     res.writeHead(200, {
//         "Content-type": "text/plain"
//     })
//     res.end("Hello sabry")
// }).listen(port)


// var http = require('http');
// var requests = 0;
// var podname = process.env.HOSTNAME;
// var startTime;
// var host;
// var handleRequest = function (request, response) {
//     response.setHeader('Content-Type', 'text/plain');
//     response.writeHead(200);
//     response.write("Hello Kubernetes bootcamp! | Running on: ");
//     response.write(host);
//     response.end(" | v=1\n");
//     console.log("Running On:", host, "| Total Requests:", ++requests, "| App Uptime:", (new Date() - startTime) / 1000, "seconds", "| Log Time:", new Date());
// }
// var www = http.createServer(handleRequest);
// www.listen(8080, function () {
//     startTime = new Date();;
//     host = process.env.HOSTNAME;
//     console.log("Kubernetes Bootcamp App Started At:", startTime, "| Running On: ", host, "\n");
// });






// grouping Pods in Services






// const companies= [
//     {name: "Company One", category: "Finance", start: 1981, end: 2004},
//     {name: "Company Two", category: "Retail", start: 1992, end: 2008},
//     {name: "Company Three", category: "Auto", start: 1999, end: 2007},
//     {name: "Company Four", category: "Retail", start: 1989, end: 2010},
//     {name: "Company Five", category: "Technology", start: 2009, end: 2014},
//     {name: "Company Six", category: "Finance", start: 1987, end: 2010},
//     {name: "Company Seven", category: "Auto", start: 1986, end: 1996},
//     {name: "Company Eight", category: "Technology", start: 2011, end: 2016},
//     {name: "Company Nine", category: "Retail", start: 1981, end: 1989}
//   ];

//   console.log(companies);
//   console.table(companies);
//   console.dir(companies);


//  const xhr = new XMLHttpRequest();
//  xhr.open("GET", 'https://api.github.com/users');
//   xhr.onload = function(){
//     if(this.status == 200){
//       var users = JSON.parse(this.responseText);
//     console.log(users);
    
//     }
//   }

//   xhr.send();












// document.getElementById('button').addEventListener('click', loadUsers);

// // Load Github Users
// function loadUsers(){
//   var xhr = new XMLHttpRequest();
//   xhr.open('GET', 'https://api.github.com/users', true);

//   xhr.onload = function(){
//     if(this.status == 200){
//       var users = JSON.parse(this.responseText);
//     console.log(users);
    
//     }
//   }

//   xhr.send();
// }






// let pair = (first) => (last) => {
//     return {
//         first: first,
//         last: last}
//     }

// pair (10) (30)


// let pair = first => last => {first, last}

// pair (10) (30)






for(i=0; i<5; i++) {
  console.log(i)
}