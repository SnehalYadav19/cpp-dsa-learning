#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = 2;

    while (num <= n)
    {
        bool isPrime = true;

        int i = 2;

        while (i < num)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }

            i++;
        }

        if (isPrime == true)
        {
            cout << num << " ";
        }

        num++;
    }

    return 0;
}