#include <iostream>
using namespace std;

void display();
void kase(int kiko, int bam, int manny);
int main(){
    display();
    int vote;
    int kiko =0;
    int bam = 0;
    int manny = 0;
    
    cout << "\n\nEnter the number of voters: ";
    cin >> vote;
    
    int arr[vote];
    for (int i = 0; i < vote; i++){
        cout << "Voter #" << i + 1 << " enter your vote (1-3): ";
        cin >> arr[i];
        
        if (arr[i] == 1){
            kiko++;
        }
        else if(arr[i] == 2){
            bam++;
        }
        else if(arr[i] == 3){
            manny++;
        }
        else {
            cout << "Invalid vote, skipped.\n";
        }
    }
        cout << "\nVoting results:";
        cout << "\nVoters for Kiko Pangilinan: " << kiko;
        cout << "\nVoters for Bam Aquino: " << bam;
        cout << "\nVoters for Manny Paquiao: " << manny;
        
        kase(kiko, bam, manny);
    return 0;
}

void display(){
    cout << "SIMPLE VOTING SYSTEM!!";
    cout <<"\nChoose your candidates"
        << "\n1. Kiko Pangilinan"
        <<"\n2. Bam Aquino"
        <<"\n3. Manny Paquiao";
}

void kase(int kiko, int bam, int manny){
    if (bam > kiko && manny){
    cout << "\n\nThe winner is Bam Aquino";
    }
    else if(kiko > bam && manny){
    cout << "\n\nThe winner is Kiko Pangilinan";
    }
    else if(manny > kiko && bam){
    cout << "\n\nThe winner is Manny Paquiao";
    }
    else {
        cout <<"\n\nThere's no winner";
    }
}
