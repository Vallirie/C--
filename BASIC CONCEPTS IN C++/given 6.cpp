#include <iostream>
using namespace std;

int main () 
{
	int days, months, remaining_days;
	days = 100;
	
	months = days / 30;
	remaining_days = days % 30;
	
	cout << "Months: " << months << endl;
	cout << "Days: " << remaining_days << endl;
	
	return 0;
}
