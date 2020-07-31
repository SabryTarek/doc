int x = 8;

int* p = &x

watch(x);
watch(*P);

watch(&x);
watch(p);

watch(&(*p));


pointer to:
    - int 4 byte
    - float
    - char 1 byte
    - node
    - pointer


// (int*p = int * p = int* p = int *p)
// I prefer int* p

// 2081 in binary = 00000000 00000000 00001000 00100001
//                     0        0        8       33

int x = 2081;
int* p1;
p1 = &x;

char* p2 = (char*)p1;
cout << (int)*p2 << '\n'; // => 33

p2++;
cout << (int)*p2 << '\n'; // => 8


p2 = p2 +2;
cout << (int)*p2 << '\n'; // => 0


==========================================================================
viod increament(int x) {
    x++;
}
int main() {
int x = 5;
increment(x);
cout << x << '\n'; // => 5 // function doesn't save the state
}
==========================================================================
viod increament(int* x) {
    x++;
}
int main() {
int x = 5;
increment(&x);
cout << x << '\n'; // => 6
}
==========================================================================
viod increament(int& x) {
    x++;
}
int main() {
int x = 5;
increment(x);
cout << x << '\n'; // => 6
}
==========================================================================
referance vs. pointer

referance:
- must have insialize value
- you can't chance it insialize value
- address of referance = address of insialized value
==========================================================================
arr[3] = {3, 25. 6};
int* p = arr;

cout << arr << '\n'; // => address of first element in array
cout << &arr[0] << '\n'; // => address of first element in array
cout << p << '\n'; // => address of first element in array

*(p+1) = p[1] = arr[1]
==========================================================================
- source code: save code instruction
- global/syatic
- stack: local variables & functions & functions calls // the biggest on ein size
- heap: free poll of memory // dymanic memory


every program take a space frim memory stack mayby 2 megabyte

dynamic allocation reserve variable in heap
c functions:
- malloc
- calloc
- realloc
- free
c++ operators:
- new
- delete

new int(7); // => reserve 4 byte at RAM and store number 7 at the free (so you can't access it)
int* p = new int(7);

==========================================================================
// bad practice
int* p = new int(7);
p = new int(5); // => pointer p point at 5 and 7 at free
==========================================================================
int* p = new int(7);
delete p;
int* p = new int(5);
==========================================================================
// in c
int* p = (int*)malloc(sizeof(int)); // malloc return a pointer to void so i convert it to pointer to int
==========================================================================
[] () {};
[] () {}();
[] () -> {};
==========================================================================
const MAX_AGE = 90;

int* p = new int;

*p = 5;
p = (int*)&MAX_AGE;

------------------
const int* p = new int;
*p = 5; // error
p = (int*)&MAX_AGE; // right
int* const p = new int;
*p = 5; // right
p = (int*)&MAX_AGE; //error
==========================================================================
const int* p === int const* p
int* const p
const int* const p === const int const* p

nullptr
NULL


class entity {
    int x, y;
public:
 getter() const {    // evey data member is a const // data is read-only for this method
     x = x+3  //error
     return x;
    }
}


For people having trouble remembering the order in which const keyword is to be used, here's a quick tip.
You have to read it backward, like the compiler does. For instance : 

-const int * A; -> "A is a pointer to an int that is constant."
(or, depending on how you prefer to write it)
int const* A; -> "A is a pointer to a const int"
but both are the same as explained in the video.

-int * const A; -> "A is a const pointer to an int."
-const int* const A; -> "A is a const pointer to an int that is constant".﻿