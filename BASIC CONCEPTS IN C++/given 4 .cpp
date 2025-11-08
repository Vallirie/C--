#include <iostream>
#include <math.h>

using namespace std;

int main (){
	double a, b, c;
	double s, area;
	a = 7;
	b = 8;
	c = 9;
	
	s = (a + b + c) / 2;
	area = sqrt (s * (s - a) * (s - b) * (s - c));
	cout << "A: " << area << "cm";
	
	return 0;
}
