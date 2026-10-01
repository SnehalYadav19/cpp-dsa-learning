#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int i=1 , sum =0;
    while(i<=n ) {
        sum = sum + i;
        cout<< i << " "<<endl;
        i++;
    }
    cout<<"Sum of first "<< n <<" natural numbers is: "<< sum << endl;
    return 0;
}