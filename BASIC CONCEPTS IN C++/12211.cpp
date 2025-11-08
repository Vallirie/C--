#include <iostream>
using namespace std;

typedef struct name{
    int *grade;
    int size;
}name;

int main(){
    name s1;
    cout <<"Enter the students you wanted to add: ";
    cin >> s1.size;

    s1.grade = new int[s1.size];
    for (int i = 0; i < s1.size; i++){
        cout << "Enter a grade for " << i + 1 << " : ";
        cin >> s1.grade[i];
    }

    for (int i = 0; i < s1.size; i++){
        cout << s1.grade[i] << " ";
    }
    delete[]s1.grade;
}