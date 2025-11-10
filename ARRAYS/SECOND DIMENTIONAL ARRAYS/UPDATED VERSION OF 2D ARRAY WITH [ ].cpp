#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    cout << "Enter the rows: ";
    cin >> rows;
    cout << "Enter the columns: ";
    cin >> columns;
    
    
    int arr[rows][columns];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
        cout << "Enter the elements for [" << i 
        << "][" << j << "]: ";
        cin >> arr[i][j];
        }
    }
    
    cout << "\nThe 2D array is: \n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
        cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
