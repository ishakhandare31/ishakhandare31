#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter any three numbers :"<<endl;
cin>>a>>b>>c;

if(a>b && a>c)
{
    cout<<a<<" is the greatest. "<<endl;
}
else if(b>a && b>c)
{
    cout<<b<<" is the greatest. "<<endl;
}
else
{
    cout<<c<<" is the greatest. "<<endl;
}


return 0;
}
