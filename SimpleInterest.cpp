#include <iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Enter Principle: ";
    cin>>p;
    cout<<"Enter Rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    float si = (p*r*t)/100;
    cout<<"Simple interest is: "<<si;
}