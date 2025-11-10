#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    
    cout << "Enter the rows: ";
    cin >> rows;
    cout << "Enter the columns: ";
    cin >> columns;
    
    
    cout << "Enter the elements of an array: ";
    int arr[rows][columns];
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                cin >> arr[i][j];
            }
        }
    
    cout << "The 2D array is: \n";
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                cout << " " << arr[i][j];
            }
    cout << "\n";
        }
    
    return 0; 
    
}
