#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout<<"Enter the value of a & b :" <<endl;
    cin >>a>>b;

    int sum=0;
    while(a<=b) {
        if(a%8==0) {
            cout<<a<<endl;
            sum += a;
        }
        a++;
    }
    cout<<"Sum of even numbers between a & b is :"<<sum<<endl;
    return 0;
}