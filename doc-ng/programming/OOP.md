Object Orianted Programming
============================
index:
- class & object
- proprty & method
- Magic Methods (constractor & destractor - getter & setter)
- acces modifiers (public - protected - private)
- overloading & overwriting
- this (object)
- self (class)
- static (who invoke method)
- final (method - class)
- abstract class (single, extends )
- interface (multi, implements , must implement every method)
- trait (multi , use)
- namespace (use .\.\. as ...)
- Dependancy injection (method - constractor)
- Objects Relations (Inhiritance - Aggrigation - Assosition - Compossion)
- Anonymous Class


SOLID Princeples
=================
- Dependancy inversion

usability <--> modularty











C++
====


header.h
--------

class <class_Name> {
acsess modifiers:
members data == attributes == properities
acsess modifiers:
constractor -> it has a class name
methods == members function == massages
setter
getter
~distrcttor -> it has a class name
} <object_Name> -> optional ;




source.cpp
----------
#include <iostream>
using namespace std;

int main(){

    cout<<"Hello, World!";

    return 0;
}



function.cpp
-------------





**acsess modifiers:**
- public -> Acsessable from outside class
- privte -> Not acsessable from outside class
- protected


> role: Functions Is Public, Data Is Private

• Defining Objects
smallobj s1, s2;
• Calling Member Functions
s1.setdata(1066);
s2.setdata(1776);
• Messages






Destructors
Destructor: A function is
called automatically when
an object is destroyed
They also take no arguments (the assumption being that there’s only one way to destroy an object)
The most common use of destructors is to deallocate memory that was allocated for the object by the constructor.








Member Functions Defined Outside the Class


class VS struct
----------------

class Point {

private:
    int x,
        y;

public:
    void setter(float v, float h){
        x=h
        y=v
    }
    void getter(){
        cout<<x<<"\n"<<y<<"\n";
    }
}\{object\};




int main {

    Point orgin;
    orgin.getter();
    0rgin.setter(2,5);
    orgin.getter();
    
    return 0;
}
------------------------------------------------------------

struct Point {

int x,
    y;

}\{instant\};

int main {

    Point orgin;
    orgin.x=2,
    orgin.y=5;
    cout<<orgin.x<<"\n"<<orgin.y<<"\n";

    return 0;
}
