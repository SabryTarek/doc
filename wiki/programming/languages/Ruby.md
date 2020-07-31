#تويتر اول موقع  مشهور تم بنائه بواسطة
Ruby on Rails
وهذه مجموعة مواقع مشهورة بنيت ايضا بنفس الفريم ورك
http://www.hulu.com/welcome
https://www.airbnb.com/?
https://www.codecademy.com/
https://soundcloud.com/
https://www.indiegogo.com/
https://www.groupon.com/?



https://ruby-lang.org
rubygems.org
bundle install
rake task runner -> rake -T -> tasks -> rake db:create
liberary package gem
virtualenv - gemset

rvm nvm [install - list - use]
rvm gemset [create - list - use]

rails new <project_name> -d <database_name>
rails server -p 3000

Perl -> Catalyst 
bio[perl - python]
perl used in NLP




cpan Catalyst::Runtime Catalyst::Devel


dnf groupinstall "development tools" === apt-get install build-essinatial  -> gcc + make + ...


#!/usr/bin/ruby -w

# single line comment

=begain
multi line comment
=end

=begin
 Author : ahmed youssef 
 Language: Ruby
 Purpose : printing Hello, World! 
=end

puts "Hello, World! ^_^\n"



name = "Ahmed"
age = 20
=== name, age=”Ahmed”, 20

print <<EOT, <<__EOT
hi ali
EOT
hi other one
__EOT

variable types
- global $
- instance @ -> object property
- class variable @@ -> static



- General perpuse language
- open source
- Dynamic
- interpreted
- portable === cross plateform
- Readable
- OOP
- written in C

- Syntax highlighting
- code folding
- line numbering


ruby -e "puts 'Hello!'"
e is a switch mean execute

yum install irb sudo apt-get install irb
irb(main):001:0> puts "Hello, RUBY!" Hello, RUBY! => nil#
irb = interpreter ruby
nil = null = None


every thing is an object
========================
irb(main):020:0> name="Ahmed"
=> "Ahmed"
irb(main):021:0> name.class
=> String

irb(main):022:0> x=10 => 10
irb(main):023:0> x.class
=> Fixnum##


irb(main):025:0> f=x.to_f
=> 10.0###


- .to_f
- .to_i
- .to_s
- to_a
- to_hash
- .class

irb(main):030:0> 14.to_s(2) #binary
=> "1110"
irb(main):031:0> 14.to_s(16) #hex
=> "e"

- Intege
- Float
- Fixnum
- Bignum
- Rational

.NET (C#, VB)


puts 1.succ #returns 2
puts 5.next #returns 6

Integer (00001110) => 584
Integer("56") => 56
floatVar=10.8 => 10.8
intVar=Integer(floatVar) => 10

if name=="ahmed" then
puts "hi ahmed"
end

if 1<2 then
puts "math genius"
end

puts "hi ahmed" if name=="ahmed"


puts "Not 10" unless x== 10
puts "Not 10" if not x== 10
Not 10
Not 10


name=="ahmed"?  "Python" : "ruby" => "Python


programmer=”StrikerX”
if programmer==”StrikerX” then
val= “Python time”
elsif programmer==”St0rM”then
val= “C time”
elsif programmer==”MutatioN” then
val=  “Ruby time”
elseif programmer==”SpAwN” then
val=  “Perl time” else
val= “Who the hell are you?”
end

programmer=”StrikerX”
val= case programmer
when “StrikerX”: “Python time”
when “St0rM” : “C time”
when “MutatioN” : “Ruby time”
when “SpAwN”  :”Perl time”
else  “who the hell are you ?”
end



age=100
state= case age
when 1..5 : “Child”
when 6..12: “Kid”
when 13..17: “Teen”
when 18 .. 40: “Adult”
when 41..60: “waiting death”
when 61.. 120: “dead”
else “not human?”
end

-------------------------------------------------------------------------------------
def about()
puts "This program is written by: ahmed youssef"
end

5.times {
    puts "Hello!"
    }

    5.times do
       puts "Hello!"
    end

def sayHi3Times()
    3.times do
        puts "Hi"
    end
end

def sayHi3Times()
    puts "Hi"
    puts "Hi"
    puts "Hi"
end

1.upto(4){
      puts "Hello!"
       }


5.downto(0){
      puts "Hello!"
       }


5.times {|i|
  puts "I: " << i.to_s
   }

   5.times do|i|
     puts "I: " << i.to_s
      end


ary=[1, 2, 3, 4, 5]
for el in ary
    puts "el: " << el.to_s
end


loopCounter=0
while loopCounter<10
 puts "LoopCounter: # " << loopCounter.to_s
 loopCounter += 2 #increment the counter
end


ary=[1, 2, 3, 4, 5]
ary.each{|el|
  puts "el: " << el.to_s
   }

ary.each do |el|
  puts "el: " << el.to_s
end


lc=0 #set
until lc>5 #condition
    puts "lc: " << lc.to_s  lc += 1 #increment
end
-------------------------------------------------------------------------------------
Procedure in pascal is a void function (function with no return)
for in ruby is foreach

print("Enter your name: ") #Builtin-Function to display an object (to_s)
name=gets     #Builtin-function to read a string from the standard input (stdin).
puts "Hello, "+ name


puts "hi" = cout << "hi" << "\n";
print "hi" = cout << "hi";

- Concatenation (+)

populating: put initialize values for a data structure like array

pwd = getwd

Ruby is Fully OOP
chdir(to)
mkdir(new_dir_name, permissions)
Dir.delete(dir_name)
Dir.unlink(dir_name)
Dir.rmdir(dir_name)

delete(file1, file2, file3)
rename(from, to)

r    => read only
r+  => read/write
w   => write only
w+ => write/read
a    => append at the end or create
a+  => append at the start or create
b    => binary


class Human
  def initialize

      end 
end

-------------------------------------------------------------------------------------
>string
=======

- length

- downcase/downcase!
- upcase/upcase!
- capitalize/capitalize!
- reverse/reverse!

- Heredoc string: multi­line string
---
s="this is a string"
puts s.length #output: 16
---
x=s.downcase #returns a copy "downcase"
puts x #output: hello, world. sup!?
puts s #output: HELLO, WORLD. SUP!?
s.downcase! #destructive method
puts s #output: hello, world. sup!
---
s="this is a string"
revS=s.reverse #returns a reversed copy of the string puts revS #output: gnirts a si siht
s.reverse! #modify the object, reverse it! puts s #output: gnirts a si siht
---
str="this is a string"
puts s.count("i") #count how many iS in str #output: 3
---
puts "it's empty" if "hello".empty?
---
puts s.include?("w")  #has "w" char #output: true
puts s.include?("he") #has "he" substring ? #output: true
---
s="Hello" puts s.gsub('e', '3') #output: H3llo
puts s.gsub('lo', '10') #output: Hel10 s="I LOVE Ruby!"
puts s.gsub(/Ruby/, "Python") #output: I LOVE Python!
---
s="Hello" s.freeze
s. s << ", World!" #can't be done as "s" is frozen!
puts "freezed!" if s.frozen? #output: freezed!
---
puts s[1..4] #output: his
---
puts s[0]#first, returns the ascii value #output: 116
puts s[0].chr #converted to a char #output: t
puts s[-1] #last, returns the ascii value #output: 103
puts s[-1].chr #converted to a char #output: g
---
heredocString=<<start
Hello,
i
am
a multi-line
string
start

puts heredocString
---
s="Hello, "
s.concat("World!")
puts s #output: Hello, World!
-
s="Hello, "
s << "World!"
puts s #output: Hello, World!
-
s="Hello, " s += "World!"
puts s #output: Hello, World!
---
words=s.split(' ') #split the space separator. p words
#output: ["hello,", "world.", "sup!?"]
---
joinedString=words.join(' ') #join the array elements with a separator
puts joinedString #output: hello, world. sup!?

joinedString=words.join('<>') #join the array elements with a separator
puts joinedString #output: hello,<>world.<>sup!?
---
chars=s.scan(/./) p chars #inspect
#output: ["h", "e", "l", "l", "o", ",", " ", "w", "o", "r", "l", "d", ".", " ", "s", "u", "p", "!", "?"]

s="Hello, World, Test, what?"
scann=s.scan(/\w+/) #scan for word+char p scann
#output: ["Hello", "World", "Test", "what"]
---
---
---
---
---

gem
- install  <gem>
- uninstall  <gem>
- search  <gem>  --remote  --local  --both
- list
- help <command>
- gem_server


--------------------------------------------------------------------------------------------
array
=====
- .length

--------------------------------------------------------------------------------------------
require 'shorturl'
def shortize(url)
return ShortURL.shorten(url, :tinyurl)
end
puts shortize("www.linuxac.org/forum") #output: http://tinyurl.com/5rrela

--------------------------------------------------------------------------------------------
require 'fastercsv'


data =<<d
ahmed, 18, male
tina, 18, female
omar, 18, male
ayman, 17, male
rogina, 20, female
d 

FasterCSV.parse(data) do |rec|
   name=rec[0]
   age =rec[1]
   sex =rec[2]

   puts "Name: #{name}, Sex: #{sex}, Age:#{age}"
end 
#Output: Name: ahmed, Sex:  male, Age: 18 Name: tina, Sex:  female, Age: 18 Name: omar, Sex:  male, Age: 18 Name: ayman, Sex:  male, Age: 17 Name: rogina, Sex:  female, Age: 20 

--------------------------------------------------------------------------------------------
sqlite:
- Zero­Configurations
- Serverless Database Engine
- Database at a file


ActiveRecord ORM


HTML for show
XML for data store

lilo & grub


class Human
    @@NUMBER_OF_HUMANS=0
    #The Constructor
    def initialize(name, sex, color)
        @name =name
        @sex  =sex
        @color=color
        @legs=2
        @eyes=2

        @@NUMBER_OF_HUMANS += 1
    end
    def move()
        #moving code
    end
    def sleep()
        #sleeping code
    end
    def drink()
        #drinking code
    end
    def Human.numberOfHumans
        return @@NUMBER_OF_HUMANS  
    end
end



if a function return boolean called pridict (?) (convintion function_name?)


hashes is a assiative array lilke php ->(hash table)
hashes key can be string or ather data types aginist all programming language

range 1..2 

function call
add 3, 7 === add (3, 7)

variable length argument *arg

if you didn't write return in a function it will return last line in it


range
=====

hash
====

symboles
========


OOP
===

modules
=======

block | generators
==================

yield


{}


do |<parameter_name>|

end


template string
===============
#{}

state : the data which object contain it

built-in type constractor function

user-defined object | built-in object

delete obj.name

strict mode "use strict"

typeof instanceof

.inspect


http://rubylearning.com/



- rspec -> test runner



run built-in dev web server"

ruby -run -e httpd . -p 3000