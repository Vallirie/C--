#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
void table ();

int main (){
	int choice;
	int a, b;
	int pw, sum, sub, mul, div, mod;
	char tryagain;
	
	do {
		
		table ();
		cout << "Type here: ";
		cin >> choice;
		cout << "\nEnter the 1st number: ";
		cin >> a;
		cout << "Enter the 2nd number: ";
		cin >> b;
		
		switch (choice){
			case 1: 
			sum = a + b;
			cout << "\nThe sum is " << sum;
		break;
		
			case 2:
			sub = a - b;
			cout << "\nThe difference is " << sub;
		break;
			
			case 3:
			mul = a * b;
			cout << "\nThe times is " << mul;
		break;
		
			case 4:
			div = a / b;
			cout << "\nThe answer is " << div;
			
		break;
		
			case 5:
			pw = pow(a,b);
			cout << "\nThe power of " << pw;
		break;
		
			case 6:
			mod = a % b;
			cout << "\nThe modulo of " << mod;
		break;
		
			default:
				cout << "\nWrong choices \n \n";
			
		}
	
	cout << "\nDo you want to solve again?";
	cin >> tryagain;
	
	} while (tryagain == 'Y'|| tryagain == 'y' );
	
	cout << "Thank you for using our application <3";
	
}

void table () {
	cout << "\n======================================= \n";
	cout << "== CHOOSE THE OPERATION YOU WILL USE == \n";
	cout << "==  1. Addition                      == \n";
	cout << "==  2. Subtraction                   == \n"; 
	cout << "==  3. Multiplication                == \n";
	cout << "==  4. Division                      == \n";
	cout << "==  5. Power                         == \n";
	cout << "==  6. Modulo                        == \n";
	cout << "======================================= \n \n";
	
}
