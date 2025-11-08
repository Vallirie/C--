#include <iostream>
using namespace std;

int main ()
{
	int totalSeconds = 3665;
	int hours = totalSeconds / 3600;
	int minutes = (totalSeconds % 3600) / 60;
	int seconds = totalSeconds % 60;
	cout << "Hours: " << hours << ", Miutes : " << minutes << ", Seconds: " << seconds << endl;
	
	return 0;
}
