
> [Lua](www.lua.org):
=====================
    - powerful
    - efficient
    - lightweight
    - embeddable scripting language
  
  
 - It supports multi pradiums:
   - procedural programming
   - object-oriented programming
   - functional programming
   - data-driven programming
   - data description




# Lua combines simple procedural syntax with powerful data description constructs based on associative arrays and extensible semantics.



- dynamically typed
- runs by interpreting bytecode with a register-based virtual machine
- has automatic memory management with incremental garbage collection
- making it ideal for configuration
  - scripting
  - rapid prototyping

[Programming in Lua](http://www.lua.org/pil/)


> package management:


There is no standard Lua package management system, but you can try out the following:

    LuaRocks - contains a rather large number of Lua modules distributed as rocks. Once LuaRocks is installed, the installation is simple: luarocks install desired-package. On Linux/Unix/Mac, this will install into /usr/local/{share,lib}/lua/5.1, where the Lua interpreter looks for modules.

    LuaDist - designed to create an independent standalone directory with Lua and modules (a dist). Everything in LuaDist is CMake-based, which means that it can be easily compiled using any compiler/IDE supported by CMake. LuaDist also has an extensive repository which contains Lua modules and also many C dependencies/libraries, which allows to create a truly independent Lua "distribution". Installation is the same as with LuaRocks - luadist install desired-package.

[zerobrane](https://studio.zerobrane.com/): Lightweight IDE for your Lua needs

http://ulua.io/


