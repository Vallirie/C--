#include <iostream>    //c
using namespace std;
int main ()           //D
{
	int year;
	cout << "Enter a year: ";
	cin >> year;
		if ((year % 4) == 0)     //A
		{
			cout << "Leap Year ";
		}
		else                     //E
		{
			cout << "Not a Leap Year" << endl;
		}
	return 0;            //B
	
}

