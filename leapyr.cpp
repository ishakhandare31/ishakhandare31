#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a year ";
    cin >> n;
    
    if(n%4==0){
        cout<<"the year is a leap year"<<endl;
    }
    else {
        cout<<"the year is not a leap year"<<endl;
    }


    return 0;
}

