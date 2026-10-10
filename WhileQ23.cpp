// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout << "Enter the value of a : " << endl;
//     cin >> a;
//     int i = 1;
    
//     while (a!=0)
//     {
//         int rem = a%i;
//         rem = rem!=0;
//         i++;
//         cout<<"Factors of a is :" << rem<<" ";
//     }
//     // return 0;
    
// }

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
