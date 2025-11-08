#include <iostream>
#include <string>
using namespace std;

int main ( ) 
{
	double salary, bonus, total;
	string name, position;
	
		cout << "Name:";
		getline (cin, name);
		cout << "Position:";
		getline (cin, position);
		cout << "Base Salary:";
		cin >> salary;
		cout << "Bonus:";
		cin >> bonus;
	
		total = salary + bonus;
	
		cout << endl;
		cout << "Total Salary:" << total;
		
	return 0;
	
}
