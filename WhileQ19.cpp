#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter a number: "; 
    cin >> n;

    int i=0;
    int a=0;
    int b=1;
    int sum = 0;

    while(i<n) {
        cout<<a<<" ";
        sum +=a;
        int next=a + b;
         a = b;
         b = next;
         i++;

        }
        cout<<"Sum"<<sum<<" ";

return 0;


}