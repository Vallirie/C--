
#include<iostream>
#include<iomanip>
using namespace std;

void hello(int solve, int num[], int &sum);

int main(){
    int sum = 0;
    int solve = 3;
    int num[solve];
    hello (solve, num, sum);
    
    float average = (float)sum / solve;
    
    cout << "The display of all number is ";
    for (int i = 0; i < solve; i++) {
    cout << num[i] << " ";
    }
    
    cout << "\nThe sum of all number is " << sum;
    cout << "\nThe average of all number is " << average;
    
    
    return 0;
}

void hello (int solve, int num[], int &sum){
    int highest, lowest;
    
    cout << "Enter 3 numbers: ";
    for (int i = 0; i  < solve; i++){
    cin >> num[i];
    sum += num[i];
     
     if (num[i] == 0){
     lowest = highest = num[i];
     }
     else {
     if (num[i] > highest) highest = num[i];
     if(num[i] < lowest) lowest = num[i];
    }
    
    }

}
