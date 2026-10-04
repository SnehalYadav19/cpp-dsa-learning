// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Ente the integer :";
//     cin>>n;

//     int original = n;
//     int temp = n;
//     int sum = 0;
//     int digits = 0;

//     // Count the number of digits in the integer
//     while (temp > 0) {
//         digits++;
//         temp /= 10;
    
//     }

//     // calculate armstrong number sum
//     temp = n;
//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     }

//     if (sum == original) {
//         cout << original << " is an Armstrong number." << endl;
//     } else {
//         cout << original << " is not an Armstrong number." << endl;
//     }
// return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;

    // Count digits
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    // Calculate Armstrong sum
    temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;

        sum = sum + pow(digit, digits);

        temp = temp / 10;
    }

    cout << "Sum = " << sum << endl;

    if (sum == original)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not an Armstrong Number";
    }

    return 0;
}