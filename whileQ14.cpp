#include <iostream>

using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (num < 0) {
        return false;
    }

    int originalNum = num;
    long long reversedNum = 0; // long long prevents integer overflow for large numbers

    while (num > 0) {
        int lastDigit = num % 10;                  // Get the last digit
        reversedNum = (reversedNum * 10) + lastDigit; // Append it to the reversed number
        num /= 10;                                  // Remove the last digit from num
    }

    // Returns true if original matches reversed, otherwise false
    return originalNum == reversedNum;
}

int main() {
    int number;
    
    cout << "=========================================" << endl;
    cout << "       Palindrome Number Checker         " << endl;
    cout << "=========================================" << endl;
    
    cout << "Enter an integer: ";
    cin >> number;

    // Call the function and print the result
    if (isPalindrome(number)) {
        cout << "\nRESULT: " << number << " is a palindrome number." << endl;
    } else {
        cout << "\nRESULT: " << number << " is NOT a palindrome number." << endl;
    }
    
    cout << "=========================================" << endl;

    return 0;
}
