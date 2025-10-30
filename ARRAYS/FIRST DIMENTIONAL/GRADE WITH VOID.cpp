#include <iostream>
#include <math.h>
using namespace std;

void hello(int sample,int arr[]);

int main (){
    int sample;
    float average;
    int sum = 0;
    
    cout << "Grades that we will inputed: ";
    cin >> sample;
    
    int arr[sample];
    cout <<"Enter the grades: ";
    
    hello(sample, arr);
    
    return 0;
}

void hello(int sample,int arr[]){
    int highest;
    int lowest;
    int keme = 0;
    int sum = 0;
    float average;
    
    
    for(int i = 0; i < sample; i++){
        cin >> arr[i];
        sum += arr[i];
        
        if(i == 0){
            highest = lowest = arr[i];
        }
        else{
            if(arr[i] > highest) highest = arr[i];
            if(arr[i] < lowest) lowest = arr[i];
        }
    }
    
    average = (float)sum / sample;
    
    for (int i = 0; i < sample; i++){
        if(arr[i] >= 75)
        keme++;
    }
     cout << "\nThe average of the grade is: " << average;
     cout << "\nHighest grade is: " << highest;
     cout << "\nLowest grade is: " << lowest;
     cout << "\nCounts of student passed: " << keme;
    
    
}
