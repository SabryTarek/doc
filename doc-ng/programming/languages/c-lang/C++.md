/**************************************************************************************************************************************/

* Primitive Data Types:
    - int: Integer  -> 4 bytes
    - char: Character -> 1 bytes
    - bool: Boolean -> 1 bytes
    - float: Floating Point -> 4 bytes
    - double: Double Floating Point -> 8 bytes
    - viod: Valueless or Void -> 1 bytes
    - wchar_t.: Wide Characte -> 1 bytes

* Abstract or user defined data type:

* Derived data type : 
    - Arrays
    - Structures
    - Class
    - Union
    - Enumeration
    - Pointers 

* Datatype Modifiers
    - Signed
    - Unsigned
    
    - Short
    - Long



|        DATA TYPE       | sizeof() |              RANGE              |
|------------------------|----------|---------------------------------|
| short int              |    2     | -32,768 to 32,767               |
| unsigned short int     |    2     | 0 to 65,535                     |
| unsigned int           |    4     | 0 to 4,294,967,295              |
| int                    |    4     | -2,147,483,648 to 2,147,483,647 |
| long int               |    4     | -2,147,483,648 to 2,147,483,647 |
| unsigned long int      |    4     | 0 to 4,294,967,295              |
| long long int          |    8     | -(2^63) to (2^63)-1             |
| unsigned long long int |    8     | 0 to 18,446,744,073,709,551,615 |
| signed char            |    1     | -128 to 127                     |
| unsigned char          |    1     | 0 to 255                        |
| float	                 |    4     |                                 |
| double                 |    8     |                                 |
| long double            |    12    |                                 |
| wchar_t                |  2 or 4  | 1 wide char                     |



Note : Above values may vary from compiler to compiler. In above example, we have considered GCC 64 bit.

/**************************************************************************************************************************************/
* Loop
    - for
    - for range
    - for each
    - while
    - do while
/**************************************************************************************************************************************/

“<stdio.h>”
- is header file for Standard Input Output -> contains declaration of printf() and scanf() -> contains header information for ‘File related Input/Output’ functions

“<stdlib.h>”
- is header file for Standard Library -> contains declaration of malloc() and free() -> contains header information for ‘Memory Allocation/Freeing’ functions



* It should be noted that a header file can contain not only function declaration but definition of constants and variables as well. Even macros and definition of new data types can also be added in a header file.



| Year |      C++ Standard      | Informal name  |
|------|------------------------|----------------|
| 1998 | ISO/IEC 14882:1998[22] |     C++98      |
| 2003 | ISO/IEC 14882:2003[23] |     C++03      |
| 2011 | ISO/IEC 14882:2011[24] |  C++11, C++0x  |
| 2014 | ISO/IEC 14882:2014[25] |  C++14, C++1y  |
| 2017 | ISO/IEC 14882:2017[9]  |  C++17, C++1z  |
| 2020 |  to be determined      |    C++20[16]   |



C creators:
    - Dennis Ritchie
    - Ken Thompson
    - Brian Kernighan

"The C Programming Launguage K&R 1978-> Dennis Ritchie & Brian Kernighan"

C++ creator:
- Bjarne Stroustrup -> 1979 C with Classes -> The C++ Programming Language 1985

C-like languages:
    - C++
    - Java
    - rust
    - go

C/C++ compilers:
- gcc/[ gcc - g++]
- LLVM/[clang - clang++]
- MSVC
- intel






- move data from array to vector


// std::begin / std::end example
#include <iostream>     // std::cout
#include <vector>       // std::vector, std::begin, std::end

int main () {
  int foo[] = {10,20,30,40,50};
  std::vector<int> bar;

  // iterate foo: inserting into bar
  for (auto it = std::begin(foo); it!=std::end(foo); ++it)
    bar.push_back(*it);

  // iterate bar: print contents:
  std::cout << "bar contains:";
  for (auto it = std::begin(bar); it!=std::end(bar); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}













vscode:

-  you no longer have to list out
in a system include path in here
explicitly
- browse path optional
- C-t -> search in all workspace




in vector: sort(v.begin(), v.end());
in array: sort(arr, arr+n) // n = number of array elements


    for (int i=1;i<n-1;i++)
    {
        if (v[i-1]+v[i] == v[i+1]) {

        }
    }




enum gender {male, female};
gender g;
g = male;
if(g = male) watch("hi");




GCC (GNU Compilers collections)
================================
- gcc -> c compiler
- g++ -> c++ compiler
- gcc main.c -> binary file call a.out
- -g -> enable debuging flag 
- -Wall
- 



- gdb -> debuger for c/c++
    - disassemble



g++ main.cpp -g

pip install gdbgui
gdbgui ./a.out

clang-3.7 main.c
clang++-3.7 main.cpp -std=c++14
./a.out

g++-6 main.cpp -o main.o -g -std=c++14


|  Back-end | Front-end |
|-----------|-----------|
| DragonEgg |    GCC    |
|   LLVM    |   Clang   |



from problem to solution in O(1)


debug vs log in C++

| GCC | LLVM |
|-----|------|
| GDB | LLDB |

الحوار التقليدي بيني وبين زميلي
اقول له ضيف سجل واعد التشغيل
Echo var dump log

وهو يرد علي
لا ما في داع
Break point
بمسكها على ال
debug







> Lambda "C++11"

- Genaric Lambda "C++14"
auto "C++14"
	auto sortByLength = [](const auto& a, const auto& b) { return a.size () < b.size (); };
 segment tree, sparse table, LCA













s1.c_str() -> convert string to array of char

const time O(1)
linear time O(n)




there are built in function in c++ 17 call gcd it takes the two numbers and get their gcd .
You must include<numeric> before the main to use this function


------------------------------------------------------------------------------------------------------

CMake
=====

- CMake is a cross-platform and open-source build system generator just a meta description for the build system which you use 
- allow you to test, compile and create packages of your source code
- CMake tries to solve is the problem of Makefiles Autoconfigure on cross-platforms (different make interpreters have different command) and the    ease-of-use on linking 3rd party libraries
- Simple configuration files placed in each source directory (called CMakeLists.txt files) are used to generate standard build files (e.g. Ninja, makefiles on Unix and projects/workspaces in Windows MSVC) which are used in the usual way


- first release at 2000



cmake_minimum_required(VERSION 3.0)
project()
set()
add_excutable(
    a.out
    main.cpp
)

cmake
ccmake
cmake-gui

cmake --build .
C++ in cmake called CXX
A buffer flush is the transfer of computer data from a temporary storage area to the computer’s permanent memory.
------------------------------------------------------------------------------------------------------
 file guards are just protecting the body of
our message H file from being included
more than one time




the - C flag says don't try to create an
executable but instead just compile this
into an object file a file that the
computer can understand and by default
when we use the - C flag it will keep
the name of the file but instead of dot
CPP it will remove the CPP and replace
it with a dot o so this is how we're


.cpp file (main )
.o object file
excutable file



build = comple + link => excutable file


touch main.cpp doesn't change the content but give it new timestamp


------------------------------------------------------------------------------------------------------

> Makefile

taget: dependancy files
    action

output: main.o class.o
    g++ main.o class.o -o output && ./output

main.o: main.cpp
    g++ -c main.cpp

main.o: class.cpp class.h
    g++ -c class.cpp


clean:
    rm *.o output


make
make clean

------------------------------------------------------------------------------------------------------


> LLVM
- Apple -> swift
- MIT -> Julia
- Dropbox -> python


Clang Is Now Used to Build Chrome for Windows instead of mvsc



BSD Licence DEveloper hates GPL as it restricted developers and in there opinion the developer freedom important than end-user one
مطورين bsd يكرهون رخصت gpl لعدة اسباب منها انه لا تسمح ب اغلاق كود مصدر برنامج حر فعادت مطورين bsd يصنع برنامج وعندما يشعر انه غير قادر علا تطويره بنفسه يفتح المصدر ثم يغلقه بعد استقراره ..... في الواقع فكرت السماح ب اغلاق الكود الحر خطء فتخيل شخص يءخذ كودك المصدري ويعمل نسخت معدلت من برنامجك ويغلق المصدر وتكون البرنامج كله ب اسمه ولم يذكر صاحب الكود الاصلي المتفرع منه اصلا (يضهر كءنه برنامج مصنوع من جديد ) .... صراحة هاذه هي سرقة الحريات بكل معنا الكلمة ... الشركات تحب رخص bsd لهاذ السبب كي تسرق حق المطور ب الكامل وهو لا يشعر بذالك

نعم هذا صحيح وهو ما حدث بالفعل مع ماكنتوش الذي هو عبارة عن نسخة من BSD مغلقة المصدر لو كان Darwin برخصة GPL لاضطرت أبل لفتح مصدر ماكنتوش





https://www.youtube.com/channel/UC1dkO571jGLzSJcsOE-ESZg

https://www.youtube.com/watch?v=4Q72kbwyEmk


ADL








<sstream> -> string stream

stringstream s;
s << t;
return s.str();
/***************************************************************************************************/
> Ask C++ Weekly: `std::exchange` vs `std::swap`

<utility>  //exchange



12 Comments

int val = 1;
auto oldVal = std::exchange(val, 2);

std::exchange() is used when you want to assign something while making a "backup" of its old value

"y = std::exchange(x, y);"      is equivalent to      "std::swap(x,y);"


> C++ Weekly - Ep 14 Standard Library Gems: `next` and `exchange`


27 Comments

Another good use of std::exchange is when deleting raw pointers.
You can delete the pointer and assign nullptr (for double-delete safety) in one line:
delete std::exchange(ptr, nullptr);



std::next really shines when you discover it has a second (optional) parameter, indicating the number of iterator advances (default 1). With that, it can be regarded as a non-mutating version of std::advance.﻿

swap() algorithm implemented using std::exchange():
template <typename T> void swap(T& a, T& b) { a = std::exchange(b, a); }﻿


/***************************************************************************************************/
>  Ep 22 C++17's Nested Namespaces and `std::clamp`

(argc < 2)?(2:(argc > 5)5:argc)

===

clamp(argc, 2, 5)



namspace org {
    namspace group {
        namspace project {
            namspace internal {
                struct Student {
                    string name;
                    int id;
                }
            }
        }
    }
}


int main() {
org::group::project::internal::Student s1;
}


===
- Nested namespace:

namespace org::group::project::internal {
    struct Student {
        string name;
        int id;
    }
}


6 Comments

std::clamp is broken the same way as std::min and std::max are: if you pass an rvalue as one of its arguments, you risk getting a dangling reference. Why do they continue adding such dangerous functions to the standard library instead of fixing the old ones? It should be entirely possible with some type_traits' usage and SFINAE tricks (which may be replaced by concepts in the future)

/***************************************************************************************************/
> C++ Weekly - Ep 68 - std::iota // tool that initializes a container with a bunch of incrementing values in c++11
#define all(x) begin(x), end(x)
#include <iostream>
#include <array>
#include <algorithm> // generate -> c++98
#include <numeric> //iota -> c++11

using namespace std;
int main() {
	array<int, 10> arr; //arr = {0,0,0,0,0,0,0,0,0,0};
	iota(all(arr), 0);   //arr = {0,1,2,3,4,5,6,7,8,9};
	generate(all(arr), [i=0]()mutable{return i=i+3;}); //arr = {2,4,6,8,10,12,14,16,18,20};
			   //stateful lambda -> c++14
    cout << arr.back() << '\n';

	return 0;
}
/***************************************************************************************************/
> Lambda //anonymous function
- Genaric
- Stateful
empty () -> optional

# lambdas can be used with zero costbut there's maybe perhaps one caveat there is a cost associated with using lambdas if you're doing a debug build kind of cases and you have your optimizations turned off but there is an alternative
the most recent builds of GCC offer -Og to enable optimizations that do not get
in the way of debugging and recommending using that if you are doing
debug builds because this kind of thing
it's not worth not using lambdas or
using higher-level features that might
generate more code with optimizations
disabled when you could just be using a
smarter build flag
clang not support it I would also suggest at
least probably -O1 under debug builds
at this point but og definitely helpful
definitely something to consider there
you have it the potential cost of using
lambdas if you do not have optimizations
enabled but in every optimization level
above zero they pretty much go away to
the equivalent code of doing it all just
by hand and they are certainly equal or
better than literally implementing the
lambda yourself by hand in an object
struct Lambda {
    auto opeator ()() const {return 5;}
};

===

[](){return 5;};




int main() {
    int i = 1;
    auto l = [](){return i;};


    return l();
}


> C++ Weekly - Ep 37 - Stateful Lambdas

12 Comments

Wow that is amazing. Does it mean that I can pass a lambda as function pointer with state? That would solve a problem that you can't pass a lamba as function pointer which catches variables.


https://www.youtube.com/watch?v=_1X9D8Z5huA&t=1s



Why is C++17 also called C++1z?

Because 17 implies that it will definitely be agreed to in 2017. If it gets delayed, it may be called 18 instead. And they use "z" as a stand-in for the digit presumably because "x" was used for C++11 (aka C++0x/C++1x - it was delayed quite a bit), and "y" for C++14 (aka C++1y) - for the same reasons.



> C++ Weekly - Ep 32 - Lambdas For Free === Cost of Lambda

15 Comments

Does this cost really have anything to do with lambdas specifically?  Wouldn't you see the exact same effect for many other language constructs?  A video that points out code gen differences between debug and release builds would be a great idea though.  Maybe also from the other angle -- how optimized builds change the resulting code in subtle ways.
    
    Yeah, I just wanted to address the fact that with optimizations disabled, some off these constructs have a cost you wouldn't expect if you don't know how they are implemented. But with optimizations enabled it all just goes away.﻿


Actually it would be interesting to have timings of the instructions for some CPU models. Counting the instructions is a bit vague. Of course modern CPU don't execute code in strict linear manner, but it would still give a better estimate.














/***************************************************************************************************/
> C++ Weekly - Ep 52 - C++ To C Compilation



15 Comments





Would it be hard to configure this to go from D to C?

    Should be doable for any language that has an LLVM front end. D, however, might be a problem because of its runtime and garbage collector. I honestly don't know.



/***************************************************************************************************/
> C++ Weekly - Ep 70 - C++ IIFE in quick-bench.com








you should Const
everything you possibly can and if you
get it into your mind that you want to
Const the string because you know that
it is not needing to be mutated later



Immediately invoked lambda which is
the C++ equivalent of a fee or IIFE the immediately invoked function expression from JavaScript 





9 Comments

Note: the website used for benchmarking seems to use the micro-benchmarking library google/benchmark. Using it in your own projects requires compiling it using CMake (what I could do without encountering any particular difficulty).﻿


-Wextra -Wdeprecated








C++ Weekly - Ep 67 - C++17's std::gcd and std::lcm




 least common multiple
 greatest common divisor


 hidden gems that were added in C++
Seventeen's standard library
8 Comments


/***************************************************************************************************/
> C++ Weekly - Ep 67 - C++17's std::gcd and std::lcm


#inclide <numeric>

std::gcd(640,480);
std::lcm();





8 Comments

So we have std::gcd, but still nothing like std::avg (yea, there is std::accumulate for STL elements) or std::transform equivalent that maps to a different type... :D﻿



https://stackoverflow.com/questions/27866965/does-c-have-a-package-manager-like-npm-pip-gem-etc


vcpkg episode is recorded and will air in 2 weeks. vcpkg has 2 steps to set up (1 to download, 2 install) conan has one step (pip install). Actual configuration within cmake is nearly identical. Neither one is really easier than the other.