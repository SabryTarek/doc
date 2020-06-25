PHP
=====
> /etc/php.ini
> commend: php -S localhost:8000
<?php
    $var1 = 'value1';
    $var2 = 'value2';
?>
<!DOCTYPE HTML>
<html dir="rtl">
    <head>
        <link rel="stylesheet" type="text/css" href="style.css"/>
        <meta charset="utf-8">
        <title>التمرين</title>
        </head>
        <body>
            <div style="color:#F00;">
                <?php echo $var1; ?>
            </div>
            <div style="color:#00F; font-size:28px;">
                <?php echo $var2; ?>
            </div>
        </body>
        </html>     
-------------------------------------------------------------------------------------------------
<?php
    $var1 = 'value1';
    $var2 = 'value2';
    echo '
        <!DOCTYPE HTML>
        <html dir="rtl">
            <head>
                <link rel="stylesheet" type="text/css" href="style.css"/>
                <meta charset="utf-8">
                <title> التمرين</title>
            </head>
            <body>
                <div style="color:#F00;">
                    '.$var1.'
                </div>
                <div style="color:#00F; font-size:28px;">
                    '.$var2.'
                </div>
            </body>
            </html>
        ';
?>
-------------------------------------------------------------------------------------------------
comments
=========
- single line:
    - // comment
    - # comment


- multi lines:
    - /*
        comment
      */
-------------------------------------------------------------------------------------------------
- echo(""); === echo""; === echo          (""); === echo           "";
- concatenation (.): echo "hello"." world !!";
- echo "<div style=\"color:#F00;\">hello world !!</div>"
-------------------------------------------------------------------------------------------------
Constants
===========
- const PI = 2.7;  ==  define("PI", "2.7");
-------------------------------------------------------------------------------------------------

- int();
- double(); , float();
- boolean(); === bool();
- string();

-------------------------------------------------------------------------------------------------
Namespaces
=============

Namespace app/core;
class a{
    public function a (){
        echo("Hi from Namespace \"app core\" , and class \"a\"");
    }

    public function add ($num){
            return $num + 2;
    }
}



use app/core;
$obj = new a();
$obj-> add(5); // OUTPUT: 7


other sol:

$obj = new app/core/a();
$obj-> add(5); // OUTPUT: 7




- Use your SSH connection as HTTP proxy
- translate php docmentation from en -> ar







type hint
: void




empty();

- pre-defined constant:
    - PHP_VERSION
    - DIRECTORY_SEPARATOR -> linux mac: / , windows: \
    - PATH_SEPARATOR -> linux mac: : , windows: ;
- Magic Constants:
	- __LINE__
	- __FILE__
	- __DIRNAME__
	- __DATE__
	- __FUNCTION__
	- __METHOD__
	- __CLASS__
	- __NAMESPACE__


- Magic Functions: (__functionName)
	- autoload($className){};


get_inclode_path();
Set_inclode_path();

SPL -> Standard PHP Libaray

function const  | class interface trait



 get_called_class();

---------------------------------------------------------------------------------------

 sessions  like a cookie but written at server not client
 =========
sess_${session_id} in temp files

session_id();
 sys_get_temp_dir();

 session_start(); -> create session -> create cooki with session id -> create sess_${session_id} file
 serialize('welcome');


 get_loaded_extentions();

if(ahmed instanceof Student)
 pdo =new PDO('mysql://hostname=localhost;dbname=school', '$userName', '$password', [#settings]);


 exec:
 - insert
 - delete
 - edit


quary:
	- select



phpmailer


New Features
==============
- a<=>b === (a < b)? -1 : ((a > b) ? 1 : 0)) // <=> called spaceship
- define types of function param and return (int - float - string - bool - object) non-strict
- $util->setLogger(new class {
    public function log($msg)
    {
        echo $msg;
    }
});










- Front controller pattern vs Routing pattern
- aemod rewrite  -> (a)ppache (e)nable (mod) rewrite
- REQUEST/ROUTE/DISPATCH/RESPONSE
- UNDERSCORE before ptivate members
- @list() = ()  // @-> subression
- handler class for (sessions - DB)



- var_dump(PDO::getAvailableDrivers());

- how to use (local - custom) domain name like www.lms.com instead of http://localhost:8080

---------------------------------------------------------------------------------------------
string
=========
- explode('academy', $str);
- implode($arr); || implode('.', $arr);
- ucfirst(); -> uppwe case first
- trim('/', $str); ->
- strlen($site);

- strtolower();
- strtoupper();
- ucfirst();
- lcfirst();
- ucword();


---------------------------------------------------------------------------------------------
array (indexed - associative)
======
- array(); || []
- array.count;
- print_r($arr);
- in_array(); -> in_array('hsoub', $arr);
- array_key_exists(); -> array_key_exists('subdomain', $arr);
- array_merge(MP)‎;
- array_sum(1P);
- array_unique(1P);
- array_search(2P); -> return key of this element
- array_rand(1P || 2P); -> return key of this elements


---------------------------------------------------------------------------------------------
عبد اللطيف أميش
=================
- تعرف على الإصدار الجديد PHP7 من PHP
---------------------------------------------------------------------------------------------
 

---------------------------------------------------------------------------------------------
PHP
====
- Array (Indexed - Associative)
- String
- var_filter


- Sunction
- Hint type
- Rest operator
- Passing by (Value - Reference)
- global keyword

- Super Globals ($_GLOBALS $_SERVER $_REQUEST $_POST[] $_GET[] $_FILES $_ENV[] $_COOKIE[] $_SESSION[])
- Cookie & Session
- JSON
---------------------------------------------------------------------------------------------
Exciption Handling
==================
    try { 
        y = y/0;
    }
        catch (Exception $e) {
            echo $e->getMessage();
         } 
    try { 
        y = y/0;
    }
        catch (e) {
            console.log(e.name || e.massage || e.stack);
         }
    finally















php: ﻿5 ->5.6-> 7

class types:
- objective
- static


public function __construct(){}


php uk conf

phpinfo();
php_version();

parent::



array destactor

how to make call back in function :

function b (callable $a){
	a();
}



function a (){
echo ("hi");
}


b(a);
