#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    const int num = 5;
    int grade[num];
    float average;

   
        int sum = 0;

        cout << "Enter the student's name: ";
        getline(cin, name);

        for (int i = 0; i < num; i++) {
            cout << "Enter the grade for no. " << i + 1 << ": ";
            cin >> grade[i];
            sum += grade[i];
        }

        int lowest = grade[0];
        int highest = grade[0];

        for (int i = 1; i < num; i++) {
            if (grade[i] > highest) highest = grade[i];
            if (grade[i] < lowest) lowest = grade[i];
        }

        average = (float)sum / num;

        cout << "\n\n-------SUMMARY-------\n";
        cout << "Name: " << name << "\n";
        cout << "Total Score: " << sum << "\n";
        cout << "Average Score: " << average << "\n";
        cout << "Highest Score: " << highest << "\n";
        cout << "Lowest Score: " << lowest << "\n";

        if (average >= 90) {
            cout << "Letter Grade: A\n";
        }
        else if (average >= 80) {
            cout << "Letter Grade: B\n";
        }
        else if (average >= 70) {
            cout << "Letter Grade: C\n";
        }
        else if (average >= 60) {
            cout << "Letter Grade: D\n";
        }
        else {
            cout << "Letter Grade: F\n";
        }


    cout << "\n\nThank you!!";
    return 0;
}
