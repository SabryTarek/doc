Java
====

- Or
------------------------------------------------------------------------------------------------
- Java SE -> Java Standard Edition
- Java EE -> Java Enterprise Edition
- Java ME -> Java Micro Edition -> phones and Embedded Systems
- Java Fx -> Java Edition
------------------------------------------------------------------------------------------------
System.out.print("Hello World!");
System.out.println("Hello World!");
System.out.printf("Hello World!");



import java.util.Scanner;
Scanner input = new Scanner(System.in);
System.out.println("Enter your Name ?");
int x = inut.next();






Standard Java Packages: java.* , javax.*

such as java.lang, java.util, java.net, and so on

------------------------------------------------------------------------------------------------
/*
 * Outputs "Hello, World!" and then exits
 * file name = className.java -> HelloWorld.java
 */

public class HelloWorld {
   public static void main(String[] args) {
       System.out.println("Hello, World!");
   }
}
------------------------------------------------------------------------------------------------
# Java is a strong typed language, which means variables need to be defined before we use them.


- byte (number, 1 byte)
- short (number, 2 bytes)
- int (number, 4 bytes)
- long (number, 8 bytes)
- float (float number, 4 bytes)
- double (float number, 8 bytes)
- char (a character, 2 bytes)
- boolean (true or false, 1 byte)



f you want to use float, you will have to cast:

float f = (float) 4.5;
Execute Code
Or, You can use this:

float f = 4.5f (f is a shorter way of casting float)




In Java, a character is it's own type and it's not simply a number, so it's not common to put an ascii value in it, there is a special syntax for chars:

char c = 'g';














String is not a primitive. It's a real type, but Java has special treatment for String.

Here are some ways to use a string:

// Create a string with a constructor
String s1 = new String("Who let the dogs out?");
// Just using "" creates a string, so no need to write it the previous way.
String s2 = "Who who who who!";
// Java defined the operator + on strings to concatenate:
String s3 = s1 + s2;
Execute Code
There is no operator overloading in Java! The operator + is only defined for strings, you will never see it with other objects, only primitives.

You can also concat string to primitives:

int num = 5;
String s = "I have " + num + " cookies"; //Be sure not to use "" with primitives.
------------------------------------------------------------------------------------------------
one file contain your project

java -jar <jar_file_name>.jar

.jar = java archive -> is a compressed file like .rar, .zip, ...








































Methods: Types

A method in Java is one of these types:
Instance methods
Class methods Sttic method
Constructor(s)
Main method (main function)



















Strings in Java


Strings are a sequence of characters. In Java, Strings are objects of the class String.
String declaration:






-
s = “Hi There!”;
charArray = {„H‟, „i‟, „ ‟, „T‟, „h‟, ‟e‟, „r‟, „e‟ };
String constructors ( around 13 constructors ):

-
String
char[]
String s1 = new String();
String s2 = new String(s);
String s3 = new String(charArray);
String s4 = new String(charArray, 3,2);
Strings are constant (immutable); their values cannot be changed after they are
created. If they are changed, the complier creates and returns a new string object.
Immutable Class means its instances cannot be modified






All Java objects implement the method toString() which returns a String object
that best "describes" that object.
Example, if you can print out a red color object using
Color color = new Color( 255, 0, 0 );
String colorStr = color.toString();
Console.println( colorStr );

java.awt.Color[r=255,g=0,b=0]
Sometimes you do not even need to explicitly call toString(). The println()
method has a version that takes an Object as its argument. This version will
implicitly call toString() for you and print the result.













String API

The String API provides method to manipulate Strings:








length(): get the number of characters in a string
charAt(): get the character at a given position within the string –
indexOf() : see if a character or string exists within a string
substring(int, int) : extract a substring from a string
concat(String str): concatenates twp strings
startsWith(String prefix), endsWith(String suffix): tests if string starts/ends with the
specified suffix
toLowerCase(), toUpperCase(): Converts all chars to lower case/ upper case
toCharArray(): returns an array of chars of the string charatcers

























swing -> Cross Platform
javax.swing
mvc

AWT 
java.awt




swing
======




import javax.swing.JFrame


UML Diagrams () Unified Modeling Language
UML Digram types
Introduction to UML, main idea, purpose, diagrams

> Drawing class diagram:
- Visual Paradigm
- rational rose



member
data member
attribute
property
characteristic
field

method
messege
operation
behavior
----------------------------------------------------------------------------------------------------------------------------------------
Class Name
- italic -> abstract class
----------------------------------------------------------------------------------------------------------------------------------------

+ public
- private
# protected
/ derived -> aren't stored, but compute from other attributes e.g: GPA from total grades
underline -> static property

Visibility Name: Type[count] = Default_Value
----------------------------------------------------------------------------------------------------------------------------------------
Visibility Name(parameters): Return_Type
parameters = (name:type)
underline -> static methods
shouldn't include inherited methods or geters/setters
omit return type in:
- Constrictor && Destructor
- void








Student
----------------
+ Name: String
+ Grades: float
----------------
+ Total(): float
+ Display()
----------------


class can contain three different members:
- attributes
- methods
- nested class or interface



relationships:
- Generalization Parent/Child relationship "Engineer is a Employee" -> represented by white arrow (Child -> Parent)
    - inheritance
- Association "a usage relationship"
    - is a relationship between two objects where one class must know about the other class to do its work (Student enroll in Course)
    - indecated by:
        - straight line: each class know about other
        - filled-arrow: one class know about other
    - Aggregation "is part of"
    - Composition "is entirely made of"
    - Regular
    - Dependency "uses temporarily"

superclass = base class
subclass = Derived class