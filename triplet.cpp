#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout<<"Enter any three number : "<<endl;
    cin>>a>>b>>c;
    
    if(a^2==b^2+c^2 || b^2==a^2+c^2 || c^2==b^2+a^2){
        cout<<"The numbers are pythagorian triplet";
    }
    else {
        cout<<"The numbers are not an pythagorian triplet";
    }
    return 0;
}

