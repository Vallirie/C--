#include <iostream>  // F
using namespace std;
int main ()     //D
{
	int a, b, c;  
	  
		cout << "Enter value of a: ";  // B
		cin >> a;
		cout << "Enter value of b: ";
		cin >> b;
	
		c = a;  //C
		a = b; //G
		b = c; //E
	
		cout <<" After swaping a: " << a << " b: " << b; //A
	return 0;
 }

