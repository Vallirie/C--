#include <iostream>
#include <string> // this allows us to use the string class
using namespace std;

int main() {
    string name = "Anna";  // declaring a string variable and assigning a value

    cout << "My name is: " << name << endl;  // printing the string

    cout << "Length of name: " << name.length() << endl;  // returns 4
    cout << "First letter: " << name[0] << endl;  // prints 'A'
    cout << "Last letter: " << name[name.length() - 1] << endl; // prints 'a'

    name += " Marie";  // appending another string
    cout << "Full name: " << name << endl;  // now it prints "Anna Marie"

    return 0;
}
