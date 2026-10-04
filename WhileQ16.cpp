#include <iostream>
using namespace std;

int main()
{
    int n = 2;

    while (n <= 100)
    {
        int i = 2;
        bool isPrime = true;

        while (i < n)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }

            i++;
        }

        if (isPrime)
        {
            cout << n << " ";
        }

        n++;
    }

    return 0;
}