#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the value of n :";
    cin>> n;

    int i = 0;
    int a = 0;
    int b = 1;
    while(i<n) {
        cout<<a<<" ";
        int next = a + b;
        a = b;
        b = next;
        i++;


     
    }
    return 0;
}