
#include <iostream>
using namespace std;

int main() {
    string string1;
    int i, length;
    int flag = 0;
    
    cout << "Enter a string: "; cin >> string1;

    int t = 0;



    cin >> t;
    for(int i=0; i<t; i++){

    length = string1.length();
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }



        }
    return 0;
}
