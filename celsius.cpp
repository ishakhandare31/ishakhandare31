#include <iostream>
using namespace std;

int main() {
    float n;
    
    cout<<"Enter Fahrenheit temperature : ";
    cin>>n;
    
    auto celsius= (n-32)*(0.5555555555555556);
    
    cout<<"The temperature in Celsius is "<<celsius;
    
    return 0;
}
