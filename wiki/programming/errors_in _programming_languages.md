Errors in Programming Languages
================================

- Errors Types:
    - compile
    - runtime
    - logic


- out of range .
- stack overflow .
- buffer overflow .
- 
- memory leak .
```c++
int main() {
    // OK
    int * p = new int;
    delete p; 

    // Memory leak
    int * q = new int;
    // no delete
}
```
- 