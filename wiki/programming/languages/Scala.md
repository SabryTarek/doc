[Scala](https://www.scala-lang.org/)
====================================
> History:
- Scala stands for Scalable Language
  - writing small scripts to building large systems
- Creator: Martin Odersky

- The Scala language is maintained by:
  - [Scala Center](https://scala.epfl.ch/)
  - [Lightbend](https://www.lightbend.com/)
------------------------------------------------------------------------------------------------------------------
> Scala Characteristics:
- static types -> help avoid bugs in complex applications
- TYPE INFERENCE
- object-oriented and functional programming
- Run on:
  - JVM
  - JavaScript runtime
  - [LLVM](https://scala-native.readthedocs.io/en/v0.3.8/#)
- TRAITS
- PATTERN MATCHING
- HIGHER-ORDER FUNCTIONS
- SEAMLESS JAVA INTEROP
- CONCURRENCY & DISTRIBUTION
- immutability
- java class library
- compile to standard ByteCode
- Optional Semicolon
------------------------------------------------------------------------------------------------------------------

> install Scala:
- Java 8 JDK
  - Make sure you have version 1.8

- Debian-Based: apt install java-package -> to packaging Java JDK
- RedHat-Based: 
- IntelliJ

------------------------------------------------------------------------------------------------------------------
> [sbt](https://www.scala-sbt.org/):
  - build tool for Scala and Java projects, similar to Java's Maven and Ant and Gradle
  - Stands for "Simple Build Tool"
  - .sbt
---------------------------------------------------------
> Other ways to install Scala:

---------------------------------------------------------
- On macOS you can also use Homebrew and existing Scala Formulae
  - brew updat
  - brew install scala
- With MacPorts, you can get Scala using:
  - sudo port install scala2.x EX: sudo port install scala2.12 ->  install Scala 2.12
---------------------------------------------------------
- Using SDKMAN!, you can easily install Scala with sdk install scala
---------------------------------------------------------
- [ScalaFiddle](https://scalafiddle.io/) ->  run single-file Scala programs in your browser using Scala.js
- [Scastie](https://scastie.scala-lang.org/) Scala + sbt  in your browser  Save and share executable Scala code Worksheet=snippets
  use any published library.
  using multiple Scala compilers:
   - the production Scala 2.x compilers === Scalac === Scala Native
   - (Scala.js](https://www.scala-js.org) like typescript and coffee script
   - Dotty
   - Typelevel
------------------------------------------------------------------------------------------------------------------
> REPL:
- scala
- :quit
------------------------------------------------------------------------------------------------------------------
> ScalaTest:

------------------------------------------------------------------------------------------------------------------
> Official WebSite:
- DOCUMENTATION
- DOWNLOAD
- COMMUNITY
- LIBRARIES
- CONTRIBUTE
- BLOG
------------------------------------------------------------------------------------------------------------------
> Packages system (Scala Library Index):
- (Scaladex](https://index.scala-lang.org/)
- [ammonite](http://ammonite.io/) (Scala Scripting)
- https://github.com/slamdata/matryoshka
------------------------------------------------------------------------------------------------------------------
> Resources:
- [Programming in Scala, Third Edition](https://booksites.artima.com/programming_in_scala_3ed)
  - [ترجمة و تطبيق كتاب : Programming in Scala البرمجة بلغة سكالا](https://www.youtube.com/playlist?list=PLsAEIIjTPIo_RH4DIACdY3ppsp9-myAiG)
- [GitHub Repo](https://github.com/scala/scala)
- [Scala cheatsheet](https://docs.scala-lang.org/cheatsheets/index.html)
------------------------------------------------------------------------------------------------------------------
> COMMUNITY:
https://gitter.im/scala/ar
------------------------------------------------------------------------------------------------------------------

> Notes:
-  changelog file



$ scalac HelloWorld.scala -> compiler
$ scala HelloWorld -> Scala code runner



------------------------------------------------------------------------------------------------------------------
Syntax
=======

function

def add(a:Int,b:Int):Int = {
  return a+b
  # retun is optional
}


def add(a:Int,b:Int):Unit = {
  print(a+b)
}


def add(a:Int,b:Int) {
  print(a+b)
}

Expressive and concise at same time
ceremony
------------------------------------------------------------------------------------------------------------------
> PrimitiveC Data Types:
- Int
- Uint -> void
- String


> Complex Data Types:
- List[]


------------------------------------------------------------------------------------------------------------------
print()
println()


---------------------------------------------------------
foreach(List:List[Int], func:(Int)=>Unit) {
   for(e<-List) func(e)
}

foreach(List(1,2,3,4,5), println)
---------------------------------------------------------

// my first scala program
// fileName: main.scala

var msg = "Hello " + arg(0) + ", from scala"
println(msg)

>>> scala main.scala Sabry >=> Hello Sabry, from scala




> Comments
  - single line //
  - multi line /* */




- Docmentation


recordmydesktop --delay 1 --fps 12 --on-the-fly-encoding -o myrecord.ogv



#!/bin/bash

exec scala "$0" "$@"

!#






- Variable -> var
- Constant -> val



container types