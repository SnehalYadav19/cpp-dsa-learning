#include <iostream>
using namespace std;


int main () {
    int n;
    cout<<"Enter the value of n :";
    cin>> n;

    int i =1;
    while(i<=n) {
        int sqr = i * i *i ;
        cout<<"Cube of "<< i <<"=" <<sqr<< endl;
        i++;
    }
    return 0;
}

