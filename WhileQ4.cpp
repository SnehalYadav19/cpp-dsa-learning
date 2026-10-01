#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n :" ;
    cin>>n;

    int i=2;
    while(i<=n ) {
        cout<< i << " ";
        i=i+2;
    }
    return 0;
}