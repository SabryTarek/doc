Haskell 
========
- pure functional programming language 
- strongly typed
- combinig functions cloujer to avoid repetition
- compiled language
> Hello world : putStrLn "Hello World"
> The Prelude: a standard module. The Prelude is imported by default into all Haskell modules unless either there is an explicit import statement for it, or the NoImplicitPrelude extension is enabled.
# data types:

- Int
- Float
- Double
- Fractional
- Enum
- Bool [True, False]
- [] #List
- () #Tuple 
- Char
- String #[Char]
- Num [Int | Float | Double]
- Ord
- Val
- Div
- Expr
- Maybe [Nothing, Just]
doubleMe x = x + x
doubleUs x  y = doubleMe x + doubleMe y

/*
# Haskell REPL = ghci -> great haskell compiler interactor
# :set prompet "ghci> "
# everything is a function like: arithmatic operators, 
# runhaskell manin.hs == :l main.hs -> load
# :r -> reload
# :t 'c' -> type | :t (+) // () for operators only
# :i Int -> interface
# (/=) === (!=)
# 5 * -1 erorr the right is: 5 * (-1)
# comment in Haskell --
# Experssion: everything return value
# Defintions (names): function without any parameter 
# "else" is mandatory in if then else
# character between single qutations
# list [] is a linkedlist
# string is list of characters between double qutations
# list ++ , !! , :
*/
lazyness
- head -> head [1,2,3,4,5] => [1]
- last -> last [1,2,3,4,5] => [5]  == head(reverse [1,2,3,4,5])
- tail -> tail [1,2,3,4,5] => [2,3,4,5]
- init  -> init [1,2,3,4,5] => [1,2,3,4]

- reverse  -> reverse [1,2,3,4,5] => [5,4,3,2,1]
- drop  -> drop 2 [1,2,3,4,5] => [3,4,5]
- take  -> take 2 [1,2,3,4,5] => [1,2]
- null  -> null [1,2,3,4,5] => False | null [] => True
- length -> length [1,2,3,4,5] => 5

- minimum  -> minimum [1,2,3,4,5] => [1]
- maximum  -> maximum [1,2,3,4,5] => [5]
- sum -> sum [1,2,3,4,5] => [15]
- sort -> sort [1,2,3,4,5] => [1,2,3,4,5]
- product -> product [1,2,3,4,5] => [120]
- elem -> elem 2 [1,2,3,4,5] => True
# function with 2 params types: 
    - infix -> 2 `elem` [1,2,3,4,5] => True
    - prefix -> elem 2 [1,2,3,4,5] => True
- renge -> [1..5] => [1,2,3,4,5]
- renge -> [1,2..5] => [1,3,5]
- renge -> [1,2..] => [1,3,5..INFINITY]
- renge -> ['a'..'d'] => "abcd"
- renge -> ['A'..'D'] => "ABCD"
- renge -> ['a'..] => "abcd..z"
- 

- zip -> zip [1,2,3,4,5] ["ahmed", "omar", "sabry"] => [(1,ahmed),(2,omar),(3,sabry)]
- list comprehension [(x,y) | x <- [..5], y <- [1..2]] => [(1,1),(1,2),(2,1),(2,2),(3,1),(3,2),(4,1),(4,2),(5,1),(5,2)]
- list comprehension [(x,y,z) | x <- [1..10], y <- [1..10], z <- [1..10], x^2 +y^2 = z] => [(3,4,5),(4,3,5).(6,8,10),(8,6,10)]
- 
let var = expression in body
λ let x = 4 in x * x  # let (optional)
let square x = x * x in square 3 => 9
let add1 x = x + 1 in add1 5 => 6
let second x = snd x in second (3,4) => 4
let square x = x * x in map square [1..10] => [1,4,9,16,25,36,49,64,81,100]
let add1 x = x + 1 in map add1 [1,5,7]
let take5s = filter (==5) in take5s [1,5,2,5,3,5]
let take5s = filter (==5) in map take5s [[1,5],[5],[1,1]]
toUpper 'a'  => 'A' #at char only 
toLower 'A' => 'a'
map toUpper "Chris" => "CHRIS"
let (a,b) = (10,12) in a * 2 => 20
let (a:b:c:[]) = "xyz" in a => 'x'  # let (a:b:c:[]) = "xyz" in a => 'x' , In fact, (a:b:c:d) is short-hand for (a:(b:(c:d))), so you can just ignore the rest in one go:
let (a:_) = "xyz" in a
let (_,(a:_)) = (10,"abc") in a 
let _:_:c:_ = "abcd" in c
let [a,b,c] = "cat" in (a,b,c)
let xc@(a,b,c) = (10,20,30) in (xc,a,b,c)
((10,20,30),10,20,30)
let age = (28,"chirs") in fst age
- compare -> compare 1 5 => LT | compare 5 1 => GT | compare 5 5 => EQ

Pretty functions like this are written like (:) when you talk about them.   
'a' : [] === ['a']  # on the fly append 'a' to empaty list in haskell called "constructed a list" call it 'cons' for short
'a' : 'b' : 'c' : [] == ['a','b','c'] == "abc" # ['a','b','c'] is a syntactic suger
tuple
=====
- fst (25, "sabry") => 25 == let (a,b) = (10,12) in a
20
- snd (25, "sabry") => "sabry"

# pure function styles in functional paradigm like : Haskell, scala, OCaml, Clojure, Elixir,  Erlang
- pattern matching from top bottom if not find error: non-exhaustive patterns  
lucky :: intger -> string "lucky maps intger to string" -- type checker "define function signture" | (type signture)
lucky x = if x == 88
                then "you are lucky"
                else "well, you aren't lucky"

# any function take one param only
# to take more than 1 param use currying

lucky 88 = "you are lucky"
lucky x = "well, you aren't lucky" // catch all pattern or catch all expression
# partial function : not defined over all the entire domain of the input type
# recursive function 
# base case
# there is no loop in functinal programming recursive only
# type student = id Int
                | name String
                | GPA Double

# prepend operator :
# show vs read
# :t head => head :: [a] -> a
# main  = print "Hello, World! T-T"
# polymerphism onlt from oop
# type class LIKE interface
lambda function (\x -> x > 2)
- filter -> filter (\x -> x > 2) [1,2,3,4,5] => [3,4,5]




*/
doubler x = x * 2

factorial x = if x == 0
		then 1
		else x * (factoial (x-1))










Higher-Order Functions
======================
- map (+1) [1..5] => [2,3,4,5,6]
- map (*99) [1..10] => [99,198,297,396,495,594,693,792,891,990]
- map (/5) [13,24,52,42] => [2.6,4.8,10.4,8.4]

-  filter (>5) [62,3,25,7,1,9] => [62,25,7,9]










- Lambda Calculus: the simpist universial functional programming equivelant to turen machine
- turen machine: 
- Lambda Expression: E = V | function | application
- function = λ V. E
- application = E E = EE = (EE) = (E)(E)
- λx.x = identify finction
- (λx.x)y = application ? (E)E
- free & bounded variable






>math behind the functional programing
- Category Theory
- Lambda Calculus


Functional Programming Concepts
=================================

> Function 


> First-class citizen
> First-Class Function : function is a value We can treat functions like any other data type and there is nothing particularly special about them — they may be stored in arrays, passed around as function parameters, assigned to variables, etc.

> Pure Functions
A pure function is a function that, given the same input, will always return the same output and does not have any observable side effects

> Side Effects
Side effects may include, but are not limited to

changing the file system
inserting a record into a database
making an http call
mutations
printing to the screen / logging
obtaining user input
querying the DOM
accessing system state

> Curried Functions
currying is the concept of calling a function with fewer arguments than it expects
curried function is the concept that allow us to partially (apply in functional) == (calling in inpartive) function


> Function Composition
 mixing more than one small function to make a bigger one
// compose is the same as pipe 
// the difference is the order of calling functions
// compose from right to left same time called pipe R to L
// pipe from left to right same time called pipe L to R 
gof (mathmatic notation) == g after f // definition from Category Theory



Funtional Programming Patterns :
- Container Style Composition
- 



> Higher-Order Function: function with  anther one as a argument 
    - Filter
    - Map
    - Reject
    - Find
    - Reduce

- #Filter vs Reject# : Method on the array object that takes another function as its argument and uses that function to Filter the array. In this episode. We're gonna learn about something new and awesome

- #Map# :
Just like filter map is another higher-order function
Also, like filter it goes through an array, but unlike filter it doesn't throw the objects away instead it
Transforms them.


#Closure# : in JavaScript functions are not just functions they are also closures what that means is that the function body has access to variables that are defined outside the function



notice that we are not passing  an
argument here we're just calling it
without any arguments we are directly
referring to the me that is assigned
outside of the function scope






most non functional programming languages there is a upper limit to how far you can go (call stack "stack overflow")
 functional programming language has never had this limit because you use recursion for everything
and then you can have this limit
javascript has this limitation in ECMA
script 5 but it is removed in ECMA
script 6 even though that Babel can't
simulate it because it's an engine thing


this feature is called tail
call optimization by the way because
it's this big tail of function calls



#factories# : factories are simply functions that create objects and return them in most cases you can use factories instead of classes and
factories are much simpler and less convoluted than classes are this is a
weekly show where we try to become more
confident and excited about programming
by learning intriguing things that we






[+, -, *, /, ^, =, /=, mod]

Haskell as a general-purpose programming
language you can do front-end web
development you can do back-end web
development you can do concurrent
parallel programming cluster confucian
and there are a lot of banks that use it
for finance remodeling and the list goes
on so Haskell's not a toy language or a
language that was amended it was
invented in the academics but it's also
very practical to use in day to day work
and there are many examples and we'll
kind of look at these examples that I
discovered in my journey




- purly functional
- static typed
- type infrance engine
- immutable data structures
- green threads: In computer programming,  are threads that are scheduled by a runtime library or virtual machine (VM) instead of natively by the underlying operating system.
- lazylanguage

- functionalprogramming add a new layer of Astraction
built-in function == local function



Haskell is a lazy
language so expressions are only
evaluated when you actually need them
right so in this case you can think of
this as a stream of numbers starting at
2 and then the filter prime function






safeDiv :: Int -> Int -> Maybe Int
safeDiv n m = if m == 0 then
                Nothing
                else
                Just (n/m)




every type have constractors (interface)
ex: Maybe type have to constractors Nothing and Just
ex: Bool type have to constractors True and False


>>= sequancing operator

Anonymous function lambda notation do notation

C-ike lunguages

data Bool = True | False

not:: Bool -> Bool
not True = False
not False = True


sum:: [Int] -> Int
sum [n] = n
sum (n:ns) = n + sum ns

- Monades



- anonymous functions



* limitations
    - no loops
    - no if ternary only
    - single return
    - no side-effects
    - no assinment inside function
    - no arrays
    - function have 0 or 1 argument



maximum' :: (Ord a) => [a] -> a
maximum' [] = error "maximum of empty list"
maximum' [x] = x
maximum' (x:xs)
    | x > maximum' xs = x
    | otherwise = maximum' xs




    | x > maxTail = x
    | otherwise = maxTail
    where maximum' xs = maxTail  #binding

- maximum' : function name
- :: : maps
- Ord : typeclass
- a : typevariable
- -> : to




recursive
- edge case || edge condiction
- numer of prams

sum' :: (Ord a) => [a] -> a
sum' [] = erorr "sum of empty list"
sum' [x] = x
sum' (x:xs) = x + sum' xs

--------------------------------------------------------------------------------------------------------------
TodoList App
============

type Todo = String

add :: Todo -> [Todo] -> [Todo]
add todoItem todoList = todoItem : todoList

remove :: Todo -> [Todo] -> [Todo]
remove todoItem todoList = filter (\t -> t /= todoItem) todoList
--------------------------------------------------------------------------------------------------------------



Resources
=========
- https://www.tryhaskell.org



- Ninety-Nine Prolog Problems
    - Ninety-Nine Lisp Problems
        - H-99: Ninety-Nine Haskell Problems


--------------------------------------------------------------------------------------------------------------
Church-Turing hypothesis
state-based notation model of computation -> Alen Turing
    - assembley style based-on it
    - then impartive style based-on it
functional-based notation model of computation -> Alonzo Church -> function is a black box -> no internal state
- lambda culclus is the simplest universal (as it can compute any function)programming launguage
theoratical model of computation
    - functional style based-on it




Y combinator actually is, is a way of doing recursion in a language which doesn't have any recursion, or any looping mechanism at



--------------------------------------------------------------------------------------------------------------
Monad
=====
- functors
- applicatives
- monads  >>=     >>= haskell logo
category theory
intellectual terrorism 

- Haskell
- Ptyhon
- Perl
- C#
- Scala
- clojur
- F#


- the best way to learn functional style ? Haskell




> Recurtion

- starting conditions
- edge cases

