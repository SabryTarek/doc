golang
=======
[The Go Programming Language](http://www.gopl.io/)

> Hello World

index.go file
--------------

```golang
package main
import fmt

func main (){
    fmt.Println("Hello World! ^_^")
}
```

> terminal> go run index.go


; optional like javascript but convention no semicoloun



first letter of your variable whatever its type
var a = "" -> private variable instead of "private" keyword
var A = "" -> public variable instead of "public" keyword

no classes structs only
"func" keyword instead of "function" -> multiple returns

"nil keyword"


mascot
- Linux tux penguin
- Golang go gopher
- BSD 

runtime (environment) built-in functions & packages(libraries)

syntax highlighting 

go CLI
- go run main.go
- go build (in project directory)
- go get <package_name>  ->   go packages manager


package main

import(
	"fmt"
	"errors"
	"math"
)

func main(){

	var x int = 5 -> x := 5
	var y int = 4 -> y := 4
	var sum int = x + y -> sum := x + y

	fmt.println(sum)
}








if without pracites around condtion
the ony type of loop in go is for loop
defult insialize value:
- int -> 0
- string -> ""
- bool
- [5]int -> [0 0 0 0 0]

26 keyword


- no object oriantation class-based
- no inheritance
- no overloading
- no default/optional params
- no excptions
- no genarics
- no for functional no [ functionaloperating overloading - immutbles - pattern matching]
- bad dependancy management
- bad error handing
- GOPATH
--------------------------------------------------------------------------------------------------
struct -> struct is a collection of fields
======

package main

import "fmt"

type person struct {
	name string
	age  int
}

func main() {
	p := person{name: "Jake", age: 23}
	fmt.Println(p)
	fmt.Println(p.age)
}
--------------------------------------------------------------------------------------------------
conditions
==========

if x > 6 {
		fmt.println("x more than 6")
}
--------------------------------------------------------------------------------------------------
loop
====

for i := 0; i<5; i++ {
	fmt.println(i)
}



i := 0
for i<5 {
	fmt.println(i)
	i++
}

___________________________________________________________________________________________________

var arr [5]int{0, 1, 2, 3, 4} -> arr := [5]int{0, 1, 2, 3, 4}
slice	var arr []int{0, 1, 2, 3, 4} -> arr := []int{0, 1, 2, 3, 4}
arr = append(arr, 9)

a[2] = 7


for index, value := range arr {
		fmt.println("index:", index, "value:", value)
		sum +:= value
		fmt.println(sum)
}

___________________________________________________________________________________________________

player := make(map[int]strimg)

palyer[1] = "ahmed"
palyer[11] = "salah"
palyer[7] = "samir"
palyer[51] = "sabry"

fmt.println(palyer[])
fmt.println(palyer[7])

delete(player, 11)

for key, value := range player {
		fmt.println("key:", key, "value:", value)
		sum +:= value
		fmt.println(sum)
}
--------------------------------------------------------------------------------------------------
functions  typescript-like
=========

func main(){
	result := calc (3, 5)
	fmt.println(result)


	sum, sub := calc (3, 5)
	fmt.println("sum:", sum, "sub:", sub)

}

func sum( x int, y int) int {
	return x + y
}


func calc( x int, y int) (int, int) {
	return x + y
	return x - y
}
--------------------------------------------------------------------------------------------------
data structures
===============

* primitives:
	- int
	- float64
	- string
	- error

* complex:
	- array
	- slice
	- map


slice = vector in c++
every element in slice must be in same type
hash-table: 
- map [C++ - Go]
- dictionary [Python - C#]
- associative-array [PHP]
- hash [Ruby]
- Object [javascript]
--------------------------------------------------------------------------------------------------



psql -h localhost -d postgres -p 5432 ‫‪CREATE‬‬ ‫‪USER‬‬ ‫‪hr‬‬ ‫‪with‬‬ ‫‪PASSWORD‬‬ ‫;'‪'hr‬‬
CREATE USER hr WITH PASSWORD 'hr';






- Go Runtime: build and run Go programs
- draw.io









- Name:
- MadeBy
- in
- Primitive DataTypes:
- complex DataTypes(Data Structures): map, struct
- Conditioning === Branching(if & switch)
- Loop === Iteration (for, while, do..while)
- Variables




literal way





https://golangbot.com/learn-golang-series/



mac package -> .dmg Disk iMaGe



- kitematic: GUI to manage docker containers fro docker desktop
- success is just a long series of failures
- the 80/20 rule that the last 20% takes 80% of the time actually
- last but not least







You can do a single copy command, but then you lose some build caching features of docker. By splitting the lines, docker reuses the build cache of the package.json and npm install as long as the package.json file doesn't change. If you make it one copy command, any code change reruns the copy and npm install on every build command.You can do 

















Костадин Марков
1 month ago (edited)
Asking for a middleware to try - go for hapi and it's related authentication/authorization protocols(https://github.com/hueniverse/hawk and https://github.com/hueniverse/oz). That won't shine, but since ssl is going nowhere, we'll all benefit. It's not a pure "programmery" thing, but so isn't docker. If you decide to go that way, I guess you'll have to get creative and device something user/groups-related.

Another interesting thing that I'm currently playing and is in the field of docker, cqrs and event sourcing - https://www.wolkenkit.io/. This stuff is wonderful as it removes a lot of the burden of setting up a dev-environment. Intro video: pt1: https://www.youtube.com/watch?v=B5uoLWZv0AA pt2: https://www.youtube.com/watch?v=yAnzic2yGaQ and some blog posts: https://docs.wolkenkit.io/latest/media/online-resources/blog-posts/#english









codefresh.io, helm chart, helm museum










But Docker for self, is not a VM, It runs an application layer on a shared linux kernel, the cost of run an image is the same of a simple process... when you are running in Linux...

Because of that, when you run docker on Mac or Windows you need a VM with a minimum Linux Kernel﻿








Just like configmaps, secrets can be exposed as either environment variables or files.


To specify a regular environment variable, a deployment definition would contain the env key.

containers:
- name: envcontainer
  env:
  - name: VARIABLE
    value: value









To expose the value from a secret as an environment variable, you can refer to a key of a secretKeyRef instead of hardcoding the value.

containers:
- name: envcontainer
  env:
  - name: VARIABLE
    valueFrom:
    secretKeyRef:
      name: mysecretname
      key: keyfromsecret



- [download](https://www.golang.org/dl/)
- vscode
- vscode golang plugin
- Hello, World



https://golang.org/
https://golang.org/dl/
https://golang.org/doc/
https://golang.org/pkg/
	- Standard library
	- Other packages
		- Sub-repositories
		- Community
https://blog.golang.org/
	- https://blog.golang.org/index
https://play.golang.org/