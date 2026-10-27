#include <iostream>
using namespace std;

int main () {
  
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    while (a>0 && b>0) {
        if (b>a) {
            cout << "b is greater than a" << endl;
        }
         if (a>b) {
            cout << "a is greater than b" << endl;
        }

        else if {
            cout << "a is equal to b" << endl;
        }

        break;
    }
    return 0;
}