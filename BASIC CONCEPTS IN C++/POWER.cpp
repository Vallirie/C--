#include <iostream>
#include <math.h>
using namespace std;

int main (){
    
    int number1, number2;
    int cube;
    
    cout << "Enter the first and second number: ";
    cin >> number1 >> number2;
    
    cube = pow (number1, number2);
    
    cout << "The answer is " << cube;
    
    return 0;
    
}
