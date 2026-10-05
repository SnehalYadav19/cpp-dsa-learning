#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    int i = 2;

    while (i < n)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }

        i++;
    }

    if (isPrime == true)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}