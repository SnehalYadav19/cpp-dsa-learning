#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    int sum =0;

    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout <<"sum of given factors :"<<sum<< endl;

    return 0;
}
