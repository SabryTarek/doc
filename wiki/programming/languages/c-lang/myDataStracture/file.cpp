#define watch(x) cout << (x) << '/n'
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
// #include "file.h"

using namespace std;

void display()
{
    cout << "Student->id "<< '\n';
    cout << "Student->first_name" << '\n';
    cout << "Student->last_name "<< '\n';
    cout << "Student->cources[] "<< '\n';
    cout << "Student->GPA" << '\n';
}
int main(int argc, char const *argv[])
{
    
    ofstream file;
    file.open("./test.txt");
    file << display();
    file.close();




    // your code here




    return 0;
}