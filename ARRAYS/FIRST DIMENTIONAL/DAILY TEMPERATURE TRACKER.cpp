#include <iostream>
using namespace std;

int main (){
    float temp[7];
    float highest, lowest;
    float sum = 0;
    
    cout <<"Daily Temperature Tracker!!\n";
    
    for (int i = 0; i < 7; i++){
        cout << "Enter the temperature " << i+1 << " : ";
        cin >> temp[i];
        sum += temp[i];
        
        if (i == 0){
            highest = lowest = temp[i];
        }
        else {
            if (temp[i] > highest) highest = temp[i];
            if (temp[i] < lowest) lowest = temp[i];
        }
    }
    
    cout << "\nList of the temperatures: ";
    for (int i = 0; i < 7; i++){
        cout << temp[i] << " ";
    }
    
     double average = (double)sum / 7;
     cout << "\nThe average of the temperature: " << average;
     cout << "\nThe highest temperature: " << highest;
     cout << "\nThe lowest temperature: " << lowest;
    
    return 0;
    
}
