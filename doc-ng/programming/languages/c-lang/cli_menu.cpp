#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int option = 0;
    cout << "Menu" << '\n';
    cout << "1- Hello World" << '\n';
    cout << "2- Goodby World" << '\n';
    cout << "3- Say Hi" << '\n';
    cout << "4- Exit" << '\n';
    cout << "Enter your option" << '\n';
    cin >> option;

    switch (option)
    {
    case 1:
        system("cls");
        cout << "\n\n\n\n\n\n";
        cout << "Hello, World! ^_^" << '\n';
        break;
    case 2:
        system("clear");
        cout << "\n\n\n\n\n\n";        
        cout << "Goodby Cruel World!" << '\n';
        break;
    case 3:
        system("clear");
        cout << "\n\n\n\n\n\n";        
        cout << "Hi!" << '\n';
        break;
    case 4:
        exit(0);
    defult:
        cout << "Enter your option" << '\n';
    }

    return 0;
}