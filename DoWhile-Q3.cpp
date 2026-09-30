#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n" << endl;
    cin>>n;

    int sum=0;
    while (n!=0)
    {
        sum=sum+n;
        cin>>n;
    }

    cout<<"Sum of all num "<<sum<<endl;

    return 0;
    

}