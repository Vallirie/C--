#include <iostream>
using namespace std;

int main (){
    int arr[4][5] = {
    {21, 23, 24, 25, 43}, 
    {84, 10, 56, 34, 20},
    {19, 18, 17, 16, 15},
    {81, 82, 83, 86, 87}};
    
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
          cout << arr[i][j] << " ";
        }
        cout << "\n";
     }
    return 0;
}
