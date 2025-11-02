#include <iostream>
#include <iomanip>
using namespace std;

struct zarrah{
    char name[20];
    int age;
    float height;
};


int main (){
    
    struct zarrah utot;
    
    cout << "Enter your name: ";
    cin >> utot.name;
    cout << "Enter your age: ";
    cin >> utot.age;
    cout << "Enter your height: ";
    cin >> utot.height;
    
    cout << "\nName: " << utot.name;
    cout << "\nAge: " << utot.age;
    cout << fixed << setprecision(2);
    cout << "\nHeight: " << utot.height;
    return 0;
}
