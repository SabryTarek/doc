/* global console, alert, prompt, document */
/* jsLint pluspluse: true */

---------------------------------------------------------------------------------------------------------------------
  Get && Set
----------------------

---------------------------------------------------------------------------------------------------------------------
| Where Put The JavaScript Code |
---------------------------------

 => inline => HTML attribute onclick = "function name()"

  <script>
 => internal => document.write(" ----- ");
  </script>

 => external => <script src="JavaScript/Plugins.js"></script>

---------------------------------------------------------------------------------------------------------------------
| Syentax |
-----------

---------------------------------------------------------------------------------------------------------------------
| Variable |
------------

---------------------------------------------------------------------------------------------------------------------
| Data Types |
--------------

 => => number
 => => string
 => => array
 => => boolean
 => = " " => null
 => undefined => undefined
 => => object

 // typeOf();

---------------------------------------------------------------------------------------------------------------------
| OutPut |
----------

 => document.write(" ----- ");
 => alert (" ----- ");
 => console.log (" ----- ");
 => inner HTML = ;

---------------------------------------------------------------------------------------------------------------------
| InPut |
---------

 => prompt("text", "example value");

---------------------------------------------------------------------------------------------------------------------
| Operators |
-------------

 =>( < ) => greater than
 =>( > ) => esser than
 =>( = ) => assignment operator

---------------------------------------------------------------------------------------------------------------------
|( Conditional || comparision ) Operators |
-------------------------------------------

 =>( <= ) =>
 =>( >= ) =>
 =>( == ) => comparision operator => compare " value "
 =>( === ) => identical operator => compare " value " + " data type "

---------------------------------------------------------------------------------------------------------------------
| Logical Operators |
---------------------

 =||) => not
 =>( != ) => not equal
 =>( !== ) => not identical => not equal in " value " + " data type "
 =>( === ) => identical operator
 =>( && ) => and
 =>( || ) => or

---------------------------------------------------------------------------------------------------------------------
| If Cases |
------------

 => if(condition) {

  statements;

  } else if(condition) {

  statements;

  } else if(condition) {

  statements;

  } else{

  statements;

  }
---------------------------------------------------------------------------------------------------------------------
| Switch |
----------

EX :
----

var season = prompt("what is the best season for you ?");

switch(season)

case "winter":
alert("winter is too cold");
break;

case "summer":
alert("summer is too cold");
break;

case "autumn":
case "spring":
alert("this season is amazing");
break;

default:
alert("you didn't enter a season name");
break;

---------------------------------------------------------------------------------------------------------------------
| Loop |
--------

Syntax
------

 => for(initialization; condition; final expression) {
     statements;
  }
EX
--

  var i;
 => for(i = 0; i < 10; i++) {
  console.log(i);
  }

---------------------------------------------------------------------------------------------------------------------

 => while(condition) {
  statements;
  final expression
  }

EX
--

  var i;
 => while(i < 10) {
  console.log(i);
  i++
  }

---------------------------------------------------------------------------------------------------------------------

 => do {
  statements;
  final expression
  } while(condition);

EX
--

  var i;
 => do {
  console.log(i);
  i++
  } while(i < 10);

---------------------------------------------------------------------------------------------------------------------

// Loop Controller :
  => break; =>
  => continue; =>

---------------------------------------------------------------------------------------------------------------------
| Function |
------------

=> function -----(parameter1, parameter2, parameter3, ..... ) {

  "use strict";

  statements;

  retern -----;

  };

//( invoke || call ) function :
  => create a botton with html atribbute => onclick = "function name()"
  => in javascript => function name();

// Sef Invoke Function :
  =>(function -----(parameter1, parameter2, parameter3, ..... ) {
  statements;
  retern -----;
  }())

// "what happen in function stay in function"

// Types of Function :
  => Built-in => " ready to use "
  => Custom Fanction => " which you defined it "

---------------------------------------------------------------------------------------------------------------------
| Events |
----------

Write Event By All Methods :
----------------------------

  <div id="te">sabry ALzahar</div>
  <button id="btn" onclick="change()" > change color </button>

=> function change() {
  "use strict";
  document.getElementById('te').style.color = "red";
  }

---------------------------------------------------------------------------------------------------------------------
=> document.getElementById('btn').onclick = function() {
  "use strict";
  te.style.color = "red";
  }

---------------------------------------------------------------------------------------------------------------------

=> function change() {
  "use strict";
  document.getElementById('te').style.color = "red";
  }
  document.getElementById('btn').onclick = change;

---------------------------------------------------------------------------------------------------------------------
 addEventListener("eventHandler", function);
 removeEventListener("eventHandler", function);
 Event-driven programming
Event handler = event listener -> الدوال التي تعمل عندما يحدث

DOM Level 0 events API

<input type="button" value='اضغط هنا' onClick="alert('تم الضغط')">

DOM Level 2 events API
(e) => {
  e.preventDefult()
  e.target.value
}
---------------------------------------------------------------------------------------------------------------------

| Array |
---------

Litral Way
----------
=> var friends = ["sabry", "ahmed", "mostafa", "omar", "yasser"];

=> var friends = [
  "sabry",
  "ahmed",
  "mostafa",
  "omar",
  "yasser"
  ];

=> var friends = [];
  friends [0] = "sabry",
  friends [1] = "ahmed",
  friends [2] = "mostafa",
  friends [3] = "omar",
  friends [4] = "yasser";

Constractor Way
----------------

=> var friends = new array("sabry", "ahmed", "mostafa", "omar", "yasser");

=> var friends = new array();
  friends [0] = "sabry";
  friends [1] = "ahmed";
  friends [2] = "mostafa";
  friends [3] = "omar";
  friends [4] = "yasser";

=> var friends = new array(
  "sabry",
  "ahmed",
  "mostafa",
  "omar",
  "yasser"
  );

// " array is zero based index "

// element 1 => index 0
  element 3 => index 2
  element 5 => index 4

// array check :
  =>if(array.isArray(friend)) {
  console.log("good this is array");
  } else {
  console.log("no this isn't array");
  }
// length : var dem = "java script";

  consoe.log(dem.length); =>11 digits = strings + spaces
// array get length :
  console.log(friends.length); => number of array elements

// array set length :
  length = 2; => 1 && 2 element only
  console.log(friends) => ["sabry", "ahmed"]

// convert array to string :
  console.log(friends.toString());
  ||
  console.log(friends.toLocalString());
  ||
  console.log(friends.join(" - ")); || console.log(friends.join(" , "));
// add elements :
  => length => firends[length] = "sayed";
- in last => push(); => firends.push("ali", "khaled", "ramadan",.... );
- in first => unshift(); => firends.unshift("ali", "khaled", "ramadan",.... );
- by index => splice(); => firends.splice(index, how many remove, add item 1, add item 2, ...);

// remove elements :
  => length => firends[length] = "sayed";
- in last => pop(); => firends.pop("ali", "khaled", "ramadan",.... );
- in first => shift(); => firends.shift("ali", "khaled", "ramadan",.... );
- by index => splice(); => firends.splice(index, how many remove, add item 1, add item 2, ...);

// array reverse => index [last] to index [0] => firends.reverse(); console.log(friends);

// array sort => A to Z => firends.sort(); console.log(friends);
// array sort => Z to A => firends.sort(); firends.reverse(); console.log(friends);

// array slice => => var x = firends.slice(start, end); console.log(x);

// array concatenation => firends + array 2 + array 3 => var all = firends.concat(array 2, array 3);

// array search => top to bottom => firends.indexOf("yasser", start index);
// array search => bottom to top => firends.lastIndexOf("yasser", start index);

// print first element in array => console.log(firend.shift());

// print last element in array => console.log(firend.pop());

---------------------------------------------------------------------------------------------------------------------
| Strings Methods |
-------------------

  var x = "i love javascript and json"

=> toString();
=> indexOf(value, start postion-d=0);
=> lastIndexOf(value, end postion-d=0);
=> search();

=> split(separetor, limt);
  -> x.split(" ", 3); => ["i" , "love" , "javascript"]
  -> x.split("a", ); => ["i love j" , "v" , "script" , "nd json"]
=> slice(start , end); => +,-
=> subStr(start , length);
=> subString(start , end);

=> charAt("index"); => x.charAt(5); => "e"
=> charCodeAt("index"); => x.charCodeAt(5); => e => 76
=> replace(value, new value); => x.replace(/javascript/gi, "php") => "i love php and json"

=> String.fromCharCode(115, 97, 98, 114, 121); => sabry
=> .concat(,,,,...);

=> .repeat(repeat number);
=> .tolowerCase();
=> .toUpperCase();

---------------------------------------------------------------------------------------------------------------------
| Object |
----------
 => var myCar = {
  color: red,
  type: via,
  price: 50.000,
  module: 2017
 };
 console.log(myCar.type);

Dynamic Object = Hash Table

Get :-

 - object.prppertyName   -> dot notation
 - object[prppertyName]  -> supscript notation

Set :-

 - object.prppertyName  = 
 - object[prppertyName] = 

Delete :-

 - delete object.prppertyName
 - delete object[prppertyName]


identifier    [variable, function, class, [object, property]] name
------------
-  characters
-  numbers
-  _  -> Machines
-  $  -> Browsers

---------------------------------------------------------------------------------------------------------------------
| Math |
--------

 => Math.ceil();
 => Math.floor();
 => Math.round();
 => Math.min();
 => Math.max();
 => Math.random(); => from 0 to 1
 => Math.pow(x,y); => x^y
 => Math.sqrt(); => root
 => Math.abs(); => abslute value

---------------------------------------------------------------------------------------------------------------------
| Regular Expression | used with : [ search | replace | match | split | test ]
----------------------
  /pattern/attribute

  attributes list

=> [g] => global search
=> [i] => insensitive case
=> [m] => multi line search

  =>
  =>
  =>
  =>

// without double qoutes

---------------------------------------------------------------------------------------------------------------------
| Date |
--------

 => new Date("");

 // Date Format :
  => full format => new Date("");
  => long format => new Date("");
  => short format => new Date("M/D/Y HH:MM:DD");
  => ISO format => new Date("YYYY-MM-DD HH:MM:SS TZD"); => # used #

---------------------------------------------------------------------------------------------------------------------
| Incrment & discrment |
------------------------

i++             =>            i = i + 1
i--             =>            i = i - 1
i += x          =>            i = i + x
i -= x          =>            i = i - x
i *= x          =>            i = i * x
i /= x          =>            i = i / x
i %= x          =>            i = i % x

---------------------------------------------------------------------------------------------------------------------
| Window Method |
-----------------

 => window.#anything
 => /n
 => prompt("text", "example value");
 => alert();
 => confirm(); => boolean value(true , false )
 => setTimeOut(function, milesecond, param1, param2, ......);
 => clearTimeOut(myTime);
 => var myInterval = setInterval(function, milesecond, param1, param2, ......);
 => clearSetInterval(myInterval);
 => window.open(url, target, spacification, history replace);
 => scrollBy(x, y); => =,-
 => scrollTo(x, y); => =,-
 => stop();
 => .close();
 => .foucus();

---------------------------------------------------------------------------------------------------------------------
| Window Proprites |
--------------------

=> .innerHeight();
=> .innerWidth();
=> .outterHeight();
=> .outterWidth();

=> .scrollx(); = .pageXOfset();
=> .scrolly(); = .pageYOfset();

=> .location.href = "http://www.";

---------------------------------------------------------------------------------------------------------------------
| Find Elements by Id , Calss , Tag |
-------------------------------------

 => document.getElementById('...');
 => document.getElementsByTagName('...');
 => document.getElementsByClassName('...');
 => document.quarySelectorAll('...');
 => document.quarySelector('...');

---------------------------------------------------------------------------------------------------------------------
  Colactions
| Find Elements by Object |
---------------------------

 => document.title
 => document.body
 => document.images
 => document.forms
 => document.links
 => document.anchors

 # like array but have no methods expect .length

---------------------------------------------------------------------------------------------------------------------
| GET & SET Element Content |
-----------------------------

=> innerHTML          =>      text   + html 
=> outterHTML         =>      text   + html 
=> textContent        =>      text only

---------------------------------------------------------------------------------------------------------------------
| GET & SET Attribute Value |
-----------------------------

=> Eement.attribute; || getAttribure(attribute name,);
=> Eement.attribute = "...."; || setAttribure(attribute name, value);
=> hasAttribure(attribute name);
=> removeAttribure(attribute name);

// class attribute => className

---------------------------------------------------------------------------------------------------------------------
| Class List |
--------------

=> .classList();
=> .classList.lenght;
=> .classList.contains('class1', 'class2', .....);
=> .classList.items(class index);
=> .classList.add('class1', 'class2', .....); || .classList += "'class1', 'class2', .....";
=> .classList.remove('class1', 'class2', .....); || .classList -= "'class1', 'class2', .....";
=> .classList.toggle('class1', 'class2', .....);

---------------------------------------------------------------------------------------------------------------------
| Child | child = "HTML tags only"
---------

=> .children;
=> .children(child index);
=> .children.length; || .childElementCount;
=> .firstElementChild;
=> .lastElementChild;

=> .appendChild();
=> .createElement();
=> .createTextNode();
=> .createComment();

// create attribute

.createAttribute(/*attributeName*/);
/*attributeName*/.value = " ";
/*element*/.setAttributeNode(/*attributeName*/);

EX :
----

var myMainDiv = document.getElementById('main'),

  // create div element

  myNewEement = document.createElement('div'),

  // create p element

  myNewP = document.createElement('p'),

  // create text node

  myText = document.createTextNode("hello from javascript");

// append text to the new element

myNewEement.appendChild(myText);

// append the new element to my main div

myMainDiv.appendChild(myNewEement);

// append my new p to my main div

myMainDiv.appendChild(myNewP);

=> .insertBefore(element, place);

=> .removeChild(child name);

=> .tagName;

=> .parantElement; = .parantNode;

=> .nextElementSibiling;
=> .previousElementSibiling;

---------------------------------------------------------------------------------------------------------------------
| Node | Node = "HTML tags" + "artributes" + "comments" + "space / text"
--------

=> .childNodes;
=> .childNodes(child index);
=> .childNodes.length;
=> .firstChild;
=> .lasttChild;

=> .nodeName;
=> .nodeName;

=> .cloneNode(false || true);

=> .nextSibiling;

=> .previousSibiling;

// .cloneNode(); = .cloneNode(false);
// .cloneNode(); => clone tag and his attributes without his content (text)
// .cloneNode(false); => clone tag && his attributes without his content (text)
// .cloneNode(true); => clone tag && his attributes && his content (text)

---------------------------------------------------------------------------------------------------------------------
| Callback Function |
---------------------

callback function no (return)

=> setTimeOut(function, milliseconds, param1, param2, ...);
=> setInterval(function, milliseconds, param1, param2, ...);

---------------------------------------------------------------------------------------------------------------------

 => document.getElementById("test").innerHTML; => <div>
 => document.getElementById("test").value; => <input>
 => XOR

 => var doc = "hi /"sabry/""; => hi "sabry"
 => var doc = 'hi "sabry"'; => hi "sabry"

 => .focus;
 => .blur;

 => .style.properity = "value";

 => this.
 => document.inputEncoding;
 => document.lastModified;
 => document.URL;

 --------------------------------------------------------------------------------------------------------------------
| ES6 |
-----------------------


| Destructing |
-----------------------
var info ={
            "id":1,
            "name":"sabry",
            "age":19,
          };


var {id,name,age} = info;
var {id,name:fullName,age} = info;



| swaping |
------------

let a=5,
    b=10;

> [a,b]=[b,a];

> let temp;
  temp = a;
  a=b;
  b=temp;


Template String


var req = new XMLHttpRequest();
req.open("get", "http://randomuser.me/api/?results=10");
req.response();
req.send();
req.status();
req.onload();

JSON.parse();

var Error = new Error();

---------------------------------------------------------------------------------------------------------------------
| Design Pattern |
-------------------
improved virsion from chainnig assingment
function foo() {
var a, b;

// 
a = b = 0; // both local

}





* single var declaration pattern :


---------------------------------------------------------------------------------------------------------------------
| Arrow Function |
-------------------

function fun (num) {
  return num * num;
}



var fun = (num) -> num * num;















    var person = {
    fname: 'ahmed',
    lname: 'hassan',
    age: 21,
    address: 'cairo'
};

for(var key in person)
{
    if(cody.hasOwnProperty(key))
    {
        console.log(key);
    }

}

---------------------------------------------------------------------------------------------------------------------
| JS Functional Programming |
-----------------------------

>Higher-Order Functions:

- map()
- forEach()

- fiter()
- reject()
- find()

- sort()

- reduce()
reduce is the multi tool on list transformations it can be used to express any list transformation

Filter is used to SKIP unwanted items, and might return with less items or even NO items.
Map modifies the items, and will always return the same amount of items.

.map returns a new array with the computed values. .forEach doesn't return anything; it merely performs the callback function on each value in the original array.

callback function (function as a parameter ) in Higher-Order Functions is synchrounace

const companies= [
    {name: "Company One", category: "Finance", start: 1981, end: 2004},
    {name: "Company Two", category: "Retail", start: 1992, end: 2008},
    {name: "Company Three", category: "Auto", start: 1999, end: 2007},
    {name: "Company Four", category: "Retail", start: 1989, end: 2010},
    {name: "Company Five", category: "Technology", start: 2009, end: 2014},
    {name: "Company Six", category: "Finance", start: 1987, end: 2010},
    {name: "Company Seven", category: "Auto", start: 1986, end: 1996},
    {name: "Company Eight", category: "Technology", start: 2011, end: 2016},
    {name: "Company Nine", category: "Retail", start: 1981, end: 1989}
  ];
  
  console.log(companies);
  console.table(companies);
  console.dir(companies);

  const ages = [33, 12, 20, 16, 5, 54, 21, 44, 61, 13, 15, 45, 25, 64, 32];
  
  for(let i = 0; i < companies.length; i++) {
    console.log(companies[i]);
  }
  
  forEach
  
  companies.forEach(function(company) {
    console.log(company.name);
  });
  
  // filter
  
  // Get 21 and older
  
  let canDrink = [];
  for(let i = 0; i < ages.length; i++) {
    if(ages[i] >= 21) {
      canDrink.push(ages[i]);
    }
  }
  
  const canDrink = ages.filter(function(age) {
    if(age >= 21) {
      return true;
    }
  });
  
  const canDrink = ages.filter(function (age) {
      return age >= 21; 
  });

  const canDrink = ages.filter(age => age >= 21);
  
  // Filter retail companies
  
  const retailCompanies = companies.filter(function(company) {
    if(company.category === 'Retail') {
      return true;
    }
  });
  
  const retailCompanies = companies.filter(company => company.category === 'Retail');
  
  // Get 80s companies
  
  const eightiesCompanies = companies.filter(company => (company.start >= 1980 && company.start < 1990));
  
  // Get companies that lasted 10 years or more
  
  const lastedTenYears = companies.filter(company => (company.end - company.start >= 10));
  
  // map
  
 // Create array of company names
  const companyNames = companies.map(function(company) {
    return company.name;
  });
  
  const testMap = companies.map(function(company) {
    return `${company.name} [${company.start} - ${company.end}]`;
  });
  
  const testMap = companies.map(company => `${company.name} [${company.start} - ${company.end}]`);
  
  const ageMap = ages
    .map(age => Math.sqrt(age))
    .map(age => age * 2);
  
  
  
  // sort
  
  // Sort companies by start year
  
  const sortedCompanies  = companies.sort(function(c1, c2) {
    if(c1.start > c2.start) {
      return 1;
    } else {
      return -1;
    }
  });
  
  // Instead of +1 and -1 it could have been the words "up" and "down", or whatever

  // The sort method examines its argument in the form of a function which is usually known as the comparator function. The comparator function compares two arguments and returns a positive value if the first argument is greater than the second argument, returns a zero value if the arguments are equal and returns a negative value if the first argument is less than the second argument.

  const sortedCompanies = companies.sort((a, b) => (a.start > b.start ? 1 : -1));

  const sortedCompanies = companies.sort((a,b) => a.start - b.start);

  Sort ages
  const sortAges = ages.sort((a, b) => a - b);
  
  console.log(sortAges);
  
  
  // reduce
  
  let ageSum = 0;
  for(let i = 0; i < ages.length; i++) {
    ageSum += ages[i];
  }
  
  const ageSum = ages.reduce(function(total, age) {
    return total + age;
  }, 0);
  
  const ageSum = ages.reduce((total, age) => total + age, 0);
  
  Get total years for all companies
  
  const totalYears = companies.reduce(function(total, company) {
    return total + (company.end - company.start);
  }, 0);
  
  const totalYears = companies.reduce((total, company) => total + (company.end - company.start), 0);
  
  // Combine Methods
  
  const combined = ages
    .map(age => age * 2)
    .filter(age => age >= 40)
    .sort((a, b) => a - b)
    .reduce((a, b) => a + b, 0);
  
  console.log(combined);




---------------------------------------------------------------------------------------------------------------------


add (num1, num2) => num1 + num2;
module.exports = add;
----------------------------------------------------------------------------------------------
const functions = {
    add: (num1, num2) => num1 + num2;
    multiply: (num1, num2) => num1 * num2
}

modue.exports = functions;
----------------------------------------------------------------------------------------------
module.exports = {
    add: add,
    multiply: multiply
  }

const {add} = require('./Product');
const {multiply} = require('./Product');
----------------------------------------------------------------------------------------------
add (num1, num2) => num1 + num2;
export default add;

import add from './add';
----------------------------------------------------------------------------------------------
export add (num1, num2) => num1 + num2;
export multiply: (num1, num2) => num1 * num2;
 
import {add, multiply} from './functions';
----------------------------------------------------------------------------------------------
export keyword before:
- variable
- function
- class
- object


one module in one file
multiple modules in one file


# lib/math.js
export sum(x, y) => x + y;
export const pi = 3.141593;
# app.js
import ∗ as math from "lib/math";
alert("2π = " + math.sum(math.pi, math.pi));

# otherApp.js
import {sum, pi} from "lib/math";
alert("2π = " + sum(pi, pi));

// Some additional features include export default and export ∗:
# lib/mathplusplus.js
export ∗ from "lib/math";
export const e = 2.71828182846;
export default x => Math.log(x);
# app.js
Import In, {pi, e} from "lib/mathplusplus";
Alert ("2π = " + In(e)∗pi∗2);


----------------------------------------------------------------------------------------------
- CommonJS -> nodejs, browerify
- AMD (Asynchronous Module Definition) = requirejs

# /lib/functions.js
define('functions.js', () => {
    return 
});

# app.js
require(['/lib/functions.js'], (add) => {
consoe.log('add');
});

----------------------------------------------------------------------------------------------

Iterators & Generators
===============

* Iterators: is what the for-loop uses under the hood to iterate over an array but the for of loop
actually can iterate over anything (sets or maps or your own custom objects)
as long as they provide an iterator for the for of loop to use

* Generators: syntactic sugar to easily create iterators

----------------------------------------------------------------------------------------------



- Immutable Unique  identifier
- Symbols are compared by reference, not by name

 every time you call symbol read a new symbol is created so one symbol red is not the same as another symbol red therefore color red this color red can never be mistaken for another value and that would be different if it were the string red the string red could be mistaken for another value but this color is every time you put color red it's not going to be the same as a variable that's just equal to red as a string










```javascript
// JS Nuggets: Proxies!

// Syntax: var p = new Proxy(target, handler);

// Example 1
var handler = {
  get (target, key) {
    return key in target ? target[key] : 37;
    }
};

var p = new Proxy({}, handler);
p.a = 1;
p.b = undefined;

console.log(p.a, p.b);
console.log('c' in p, p.c);





















// Example 2
let validator = {
  set: function(obj, prop, value) {
    if (prop === 'age') {
      if (typeof value !== 'number' || Number.isNaN(value)) {
        console.log('Age must be a number')
      }
      if (value < 0) {
        console.log('Age must be a positive number')
      }
    }

    obj[prop] = value;
  
    return true;
  }
};

let person = new Proxy({}, validator);
person.age = 'young';
console.log(person.age)
person.age = -30;
person.age = 100;
console.log(person.age)
```


'c' in p -> Boolean
p.c -> Value()











- optional chaining operator a?.b //--> return (undefined || a.b)
- proposal in stage one from 4 stages
- C#










object creation


built-in Constractor function for :-
  - Object || {} litral notation
  - String
  - Number
  - Erorr
  - Promise
  - Boolean
  - Proxy
  - Symbole
  - Regexp



const createEmployee = (name, age, salary) => {
  let employee = new Object();

  employee.name = name;
  employee.age = age;
  employee.salary = salary;

  return employee;
}


let emp1 = createEmployee("Sabry Tarek", 20, 7000);
console.log(emp1);
console.log(emp1 instanceOf Object); // True
console.log(emp1 instanceOf employee); // False





const createEmployee = (name, age, salary) => {
  let employee = {
    name = name,
    age = age,
    salary = salary
  }
  return employee;
}


let emp1 = createEmployee("Sabry Tarek", 20, 7000);





















pros


cons

- Code Duplication
- No Spacfice class or Type






const createEmployee = (name, age, salary) => {
  this.name = name;
  this.age = age;
  this.salary = salary;
}

let emp1 = new createEmployee("Sabry Tarek", 20, 7000);








new keyword uses with constractor function only

-------------------------------------------------------------------------------------------------------
> Module

// Before ES6
(function() {

    // declare private variables and/or functions

    return {
      // declare public variables and/or functions
    }

})();


// After ES6

/* lib/module.js */

class ShoppingDataType {
  constructor() {
    // private properties.
    this.shoppingList = ['coffee', 'chicken', 'pizza']
  }

  // public methods
  getShoppingList() {
    return this.shoppingList.join(", ")
  }

  addItem(item) {
   this.shoppingList.push(item)
  }
}

export default ShoppingDataType;


/* main.js */
import ShoppingDataType from 'libs/module';

var shopping = new ShoppingDataType;
console.log(shopping.getShoppingList());
