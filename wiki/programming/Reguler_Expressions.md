# Regular Expressions (RegEx / RegExp). 

- ()
- {}
- []
- .
- ?
- +

>  Anchors
------------
- ^ == \A
- $ == \Z


>  Quntifires
------------
-  .
- ?
- +  -> Greedy Quntifiers
- *   -> Greedy Quntifiers
- {}   -> Greedy Quntifiers
- {x,y}   -> Greedy Quntifiers
- {x,}  -> Greedy Quntifiers
- {,y}  -> Greedy Quntifiers
- {1,5}? => lazy

 
>  Flags 
------------
- g
- i
- m
- u
- y


> Character Classes
--------------------
- \w
- \W
- \d
- \D
- \s
- \S
- \b
- \B
- \1 => repeat group number 1



> Escaped Character 
--------------------
-  => decimal = char code 
-  \+*?^$\.[]{}()|/    => resved characters
- \n
- \t
- \x => Hexadecimal
- \  => octal
- \u =>unicode


> Groups & Range
----------------------
- [abc]
- [^abc]
- [0-9]
- [a-z]
- [A-Z]
- [A-Za-z0-9]
- ()
- (a|b)



> Lookaround | Assertions | (should use character classes before it)
-----------------
- (?=Expression)  => positive lookahead (lookaround)
- (?!Expression)  => negative lookahead (lookaround)
- (?<=Expression)  => positive lookbehind
- (?<=!Expression)  => negative lookbehind


> Capturing/Non-Capturing Groups & Backreference
--------------------------------------------------
- (     )   -> Capturing Group => saved in memory && you can  Backreference it
- (?:     ) -> Non-Capturing Group => not  saved in memory && you can't  Backreference it
- \1  ->Backreference Group number 1















----------------------------------------------------------------------------------------

Reguler Expression
----------------------------
- ()
- {}
- \[]
- .
- ?
- +

<br>

>  Anchors
------------
	- ^ == \A
	- $ == \Z
<br>

>  Quntifires
------------
	-  .
	- ?
	- +  -> Greedy Quntifiers
	- *   -> Greedy Quntifiers
	- {}   -> Greedy Quntifiers
	- {x,y}   -> Greedy Quntifiers
	- {x,}  -> Greedy Quntifiers
	- {,y}  -> Greedy Quntifiers
	- {1,5}? => lazy
<br>

>  Flags 
------------
	- g
	- i
	- m
	- u
	- y
<br>
> Character Classes
------------------
	- \w
	- \W
	- \d
	- \D
	- \s
	- \S
	- \b
	- \B
	- \1 => repeat group number 1
<br>

> Escaped Character 
-----------------------
	-  => decimal = char code 
	-  \+*?^$\.[]{}()|/    => resved characters
	- \n
	- \t
	- \x => Hexadecimal
	- \  => octal
	- \u =>unicode
<br>

> Groups & Range
----------------------
	- [abc]
	- [^abc]
	- [0-9]
	- [a-z]
	- [A-Z]
	- [A-Za-z0-9]
	- ()
	- (a|b)
<br>

> Lookaround | Assertions | (should use character classes before it)
-----------------
	- (?=Expression)  => positive lookahead (lookaround)
	- (?!Expression)  => negative lookahead (lookaround)
	- (?<=Expression)  => positive lookbehind
	- (?<=!Expression)  => negative lookbehind


> Capturing/Non-Capturing Groups & Backreference
--------------------------------------------------------
	- (     )   -> Capturing Group => saved in memory && you can  Backreference it
	- (?:     ) -> Non-Capturing Group => not  saved in memory && you can't  Backreference it
	- \1  ->Backreference Group number 1











