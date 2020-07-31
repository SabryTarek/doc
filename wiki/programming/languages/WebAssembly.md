WebAssembly ([WASM](https://webassembly.org/))
==============================================
act as jvm

- wasm is the bytecode for javascript virtual machine


- C/C++
- Rust

- CSharp
- 


download precompiled toolchain to compile C/C++ to WebAssembly via GitHub
$ git clone https://github.com/emscripten-core/emsdk.git
$ cd emsdk
$ ./emsdk install latest
$ ./emsdk activate latest

$ source ./emsdk_env.sh --build=Release



$ mkdir hello
$ cd hello
$ cat << EOF > hello.c
#include <stdio.h>
int main(int argc, char ** argv) {
  printf("Hello, world!\n");
}
EOF
$ emcc hello.c -o hello.html

$ emrun --no_browser --port 8080 .




python