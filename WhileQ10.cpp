#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int i=n,mul=1;
    while(i!=0) {
        mul = mul * i;
       
        i--;
    }
    cout<<"Factorial of "<< n <<" is: "<< mul << endl;
    return 0;
}