#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n" << endl;
    cin>>n;
  

    int sum=0;
    int i=1;
    while(i<=n) {
        // cout<<i<<endl;
        sum=sum + i;
        i++;
        cout << sum << endl;
    }
}