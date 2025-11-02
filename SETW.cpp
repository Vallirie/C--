#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main ( )
{

	string year, term, student, name, college, level, program, status;
	double unit, comp;
	double tuition, misc, labu, admission, totala, scholar, net, id, total_ammount;
	
		cout << "Enrollment Status: ";
		getline (cin, status);
		cout << "Term: ";
		getline (cin, term);
		cout << "School Year: ";
		getline (cin, year);
		cout << "Student Number: ";
		getline (cin, student);
		cout << "Name: ";
		getline (cin, name);
		cout << "College: ";
		getline (cin, college);
		cout << "Year Level: ";
		getline (cin, level);
		cout << "Program: ";
		getline (cin, program);
		cout << "Tuition per unit: ";
		cin >> unit;
		cout << "Computer Laboratory Fee: ";
		cin >> comp;
		
			cout << fixed << setprecision(2);
			misc = 9865;
			admission = 500;
			tuition = unit * 17;
			labu = comp * 2;
			totala = misc + tuition + labu + admission;
			
			scholar = 26589.50;
			net = totala - scholar;
			id = 380;
			total_ammount = net + id;
			
	cout << endl << endl;
	cout << "CERTIFICATE OF REGISTRATION" << endl << endl;
	cout << "ENROLLMENT STATUS : " << status << endl << endl;
	
	cout  
		<< "Term : " << status 
		<< setw(30) << "School Year : " << year
		<< endl << endl;
	
	cout
		<< "Student# : " << student
		<< setw(45) << "Collge : " << college
		<< setw(15) << "Program : " << program
		<<endl;
		
	cout 
		<<"Name : " << name
		<< setw(26) << "Year Level : " << level 
		<<endl << endl;
		
	cout << "=================================================================================================================================================================" << endl;
	cout
		<<"Courses" 
		<< setw(30) << "Title"
		<< setw(34) << "Section"
		<< setw(10) << "Units"
		<< setw(10) << "Days"
		<< setw(30) << "Time"
		<< setw(30) << "Room"
		<<endl;
	cout << "=================================================================================================================================================================" << endl;
	
	cout << endl;
	cout 
		<< "CCS0001" 
		<< setw(42) << "INTRODUCTION TO COMPUTING (LEC)"
		<< setw(20) << "TN07"
		<< setw(10) << "2"
		<< setw(10) << "T"
		<< setw(38) << "13:00:00-15:40:00"
		<< setw(25) << "ONLINE"
		<<endl;
		
	cout 
		<< "CCS0001L" 
		<< setw(41) << "INTRODUCTION TO COMPUTING (LAB)"
		<< setw(20) << "TN07"
		<< setw(10) << "1"
		<< setw(10) << "W"
		<< setw(38) << "13:00:00-15:50:00"
		<< setw(24) << "E401"
		<<endl;
			
	cout 
		<< "CCS0003" 
		<< setw(39) << "COMPUTER PROGRAMMING 1 (LEC)"
		<< setw(23) << "TN07"
		<< setw(10) << "2"
		<< setw(10) << "F"
		<< setw(38) << "13:00:00-15:40:00"
		<< setw(25) << "ONLINE"
		<<endl;
			
	cout 
		<< "CCS0003l" 
		<< setw(38) << "COMPUTER PROGRAMMING 1 (LAB)"
		<< setw(23) << "TN07"
		<< setw(10) << "1"
		<< setw(10) << "M"
		<< setw(38) << "13:00:00-15:50:00"
		<< setw(24) << "E401"
		<<endl;
		
	cout 
		<< "GED0004" 
		<< setw(31) << "PHYSICAL EDUCATION 1"
		<< setw(31) << "TN07"
		<< setw(10) << "3"
		<< setw(12) << "M/TH"
		<< setw(46) << "07:00:00-08:50:00 / 07:00:00-08:50:00"
		<< setw(18) << "F301 / F301"
		<<endl;
	
	cout 
		<< "GED0006" 
		<< setw(50) << "PERSONAL AND PROFESSIONAL EFFECTIVENESS"
		<< setw(12) << "TN07"
		<< setw(10) << "3"
		<< setw(12) << "M/TH"
		<< setw(46) << "07:00:00-08:50:00 / 07:00:00-08:50:00"
		<< setw(18) << "F301 / F301"
		<<endl;
		
	cout 
		<< "GED0009" 
		<< setw(41) << "READINGS IN PHILIPPINE HISTORY"
		<< setw(21) << "TN07"
		<< setw(10) << "2"
		<< setw(12) << "F / T"
		<< setw(46) << "09:00:00-10:20:00 / 09:00:00-10:20:00"
		<< setw(20) << "ONLINE / ONLINE"
		<<endl << endl;
		
	cout 
		<< "TOTAL UNITS 17"
		<< endl;
		
	cout << "=================================================================================================================================================================" << endl;	
		
	cout << endl;
	
	cout 
		<< "Tuition Fee (17)"
		<< setw(110) << tuition
		<< endl;
	
	cout 
		<< "Miscellaneous Fee"
		<< setw(108) << misc
		<< endl;
		
	cout 
		<< "Admission Fee"
		<< setw(111) << admission
		<< endl;
	
	cout 
		<< "ITE Computer Laboratory Fee (CCS0001)"
		<< setw(88) << comp
		<< endl;	
		
	cout 
		<< "ITE Computer Laboratory Fee (CCS0004)"
		<< setw(88) << comp
		<< endl;
		
	cout 
		<< "TOTAL ASSESSMENT"
		<< setw(110) << totala
		<< endl;
		
	return 0;	
		
	
	
}
