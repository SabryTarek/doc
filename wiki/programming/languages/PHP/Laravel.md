Laravel
========
route: 
- Routing:
    - routes/web.php -> assigned the web middleware group
    - routes/api.php ->stateless -> assigned the api middleware group

Routing -> like DNS table
========
routes/web.php:

- Route::get('foo', function () {
    return 'Hello World';
});

- Route::get('/', function(){
    return view('welcome');
});

- Route::prefix('user')->group(function (){
Route::get('sabry', function () {
    return view('sabry');
    
    });
});

resources/views/welcome.blade.php:



Route::get($uri, $callback);
Route::post($uri, $callback);
Route::put($uri, $callback);
Route::patch($uri, $callback);
Route::delete($uri, $callback);
Route::options($uri, $callback);

Route::match(['get', 'post'], $uri, $callback);
Route::any($uri, $callback);

Route::redirect('/here', '/there', 301);

Route::view('/welcome', 'welcome');

Route::view($uri, $view, ['name' => 'Taylor']);

Route::prefix($prefix)->group(function (){});
Route::namespace($namespace)->group(function (){});


- Route Parameters:
    - Required Parameters:
        Route::get('posts/{post}/comments/{comment}', function ($postId, $commentId) {
             return "post : $postId \n comment : $commentId";
        });

    - Optional Parameters:
        Route::get('user/{name?}', function ($name = 'John') {
             return $name;
        });


NOT_ALLOWED CHARACTERS -> '-'


- Regular Expression Constraints for Route Parameters:
    Route::get('user/{id}/{name}', function ($id, $name) {
     //
    })->where(['id' => '[0-9]+', 'name' => '[a-z]+']);

- Regular Expression Global Constraints for Route Parameters:
in: App/Providers/RouteServiceProvider
in: "boot" function:
    Route::pattern('id', '[0-9]+');



Named Routes: (for generation of URLs || redirection)

Route::get('user/profile', 'UserProfileController@show')->name('profile');

- <a href="{{ route('profile', ['id' => 1]) }}">your link<a>
- redirection:
    Route::get('ahmed', function(){
        return redirect()->route('profile');
    });


Route::group(["middleware"=>['', '']]), function (){});

Route::get($uri, $callback)->middleware($middleware);

----------------------------------------------------------------------------------------------

# <form method="POST" action="/profile">
    @csrf
    ...
</form> #


----------------------------------------------------------------------------------------------
controller -> logic
==========
- <controller> is a <class>
- <method> in controller name <action> to invoke it <controllerName@actionName>
- if controller have one action <single action controller> then you don't need to define action in router 
ex: Route::any($url, $controller)


controller <-> model
make:controller #controllerName --resource
- index -> show all element
- create
- store -> store data in DB
- show -> show one element , i can't do any action at data
- edit -> show one element to edit it
- update -> update one element
- destroy -> delete one element

Route::resource($flag, $controller, [except=>[]]);
Route::resource($flag, $controller, [only => [] ]);
php artisan route:list
----------------------------------------------------------------------------------------------
php artisan  -> Laravel cli
=============

- php artisan
    - serve
    - make:controller #controllerName --[resource,]
    - make:model #modelName
    - make:middleware #middlewareName
    - make:migration #migrationName --[create=tableName]
    - route:list
    - swoole:http start


composer require #packageName
----------------------------------------------------------------------------------------------
middleware -> requests filter
===========
path: App/Middleware/
command: php artisan make:middleware #middlewareName

types:
- route Middleware
- group Middleware
- global Middleware


- make Middleware- register Middleware
- 

- Middleware in route
- Middleware in controller -> controller constractor
- Middleware in global


----------------------------------------------------------------------------------------------
MVC Pattern life cycle or workflow:
Route -> Controller -> Model -> Controller -> View



Model: layer between Database and controller. controller make Quary at DB to [add, delete, validate] 



Controller <-> Model (two-way-data Binding)
Controller -> view (one-way-data Binding) from 
View - Model (No Relation)


View: 
Controller: logic

namespace in Laravel is absolute path

- in the same directory -> you don't need to define namespace


missing points:
- Inspecting The Current Route



return response();
abort('404');


dependency injection: scope
- method injection -> scope: in this method only
- constructor injection -> scope: in all controller(class) and his methods

- Shared Hosting
- swoole -> asynchronous programming in php
- pagination ترقيم الصفحات



----------------------------------------------------------------------------------------------
collections
===========

- any from DB come to:
    - php: array
    - Laravel collection


- collection:
    - ->all();
    - ->avg('index');
    - ->chuck(); X ->collapse();




helper functions:
- collect -> convert array to collection
- dd(App/User::get()); -> get User from data base


----------------------------------------------------------------------------------------------
Adonis js
=========

- ace <-> php artisan


----------------------------------------------------------------------------------------------
> migration

ace make:migration users --create=users


ace migration:run



----------------------------------------------------------------------------------------------
Relation between tables in  database
=====================================
- one to one
- one to many
- many to many
- self reference






------------------------------------------------------------------------------------
Laravel Arabic Recources
========================
* video:
- 5dmat web
- Mohammed Essa 
- New Baghdad
- Laravel Me
- Safaa
- Php Anonymous
- sec theatre
- محمد يحيى
- Arabic HTML
- dwrate
- Motawren Tech
- IQ TECH


* artical
- hasoub
	- العيل
- code box
- وراق
- Khalid elshafie
- ali hamdi

Laravel English Recources
==========================
- laracast
- traversy media



Laravel libraries
===================
- faker -> fake data
- tinker -> laravel shell



Laravel libraries
===================
- MVC
- Front Controller & Routing
-php artisan

- migration
- ORM -> Elecount -> convert relational data to object data
- factory -> faker
- seeding -> define number of fake rows
- Pagination

----------------------------------------------------------------------------------------------
Files Structure
================

Files Structure must upload to the server
==========================================
directories:
    - app
    - Bootstrap
    - config
    - public
    - resources excpt assets
    - routes
    - storage
    - vendor
files:
    - .env edit:
                - APP_ENV=local -> APP_ENV=prodction
                - APP_DEBUG=true -> APP_DEBUG=false
                - APP_URL=http://www.site.com -> APP_URL=http://www.focal.com





- test layers