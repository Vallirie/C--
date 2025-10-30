#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int size = 5;
    int grade[size];
    int highest, lowest;
    float average;
    float sum = 0;
    
    
    cout << "5 Grades \n";
    
    for (int i = 0; i < size; i++){
        cout << "Grade no. " << i+1 << " : ";
        cin >> grade[i];
        sum += grade [i];
    
    
        if (i == 0) {
            highest = lowest = grade [i];
        }
        else {
            if(grade[i] > highest) highest = grade [i];
            if (grade[i] < lowest) lowest = grade [i];
        }
    }
     cout << "List of the grade: ";
        for (int i = 0; i < 5; i++){
            cout << grade[i] << " ";
        }
        
    average = sum / size;
    cout << fixed << setprecision(1);
    cout << "\nThe average of the grade is " << average;
    cout <<"\nThe highest grade is " << highest;
    cout << "\nWhile the lowest grade is " << lowest;
    
    
    
    
}
