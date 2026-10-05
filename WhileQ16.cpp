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

// this program takes an integer input n and prints all prime numbers from 2 to n using nested while loops. The outer loop iterates through each number from 2 to n, and the inner loop checks if the current number is prime by testing divisibility with all integers less than it. If a number is found to be prime, it is printed to the console.