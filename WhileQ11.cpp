#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int mul=1;
    if (n == 0) {
       cout << "Product of digits: 0";
    }
    else {
        while(n>0) {
           int digit = n %10;
            mul = mul * digit;
            n= n / 10;
        }
        cout << "Product of digits: " << mul;
    }
return 0;
}