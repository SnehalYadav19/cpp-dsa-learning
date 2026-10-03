#include <iostream>
#include <cmath> // Required for pow()
using namespace std;

int main() {
    int num, temp, digit;
    int ans = 0;
    
    cout << "Enter an integer: ";
    cin >> num;

    // 1. Find the total number of digits to set the initial value of 'i'
    int count = 0;
    temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    
    // 'i' must start at (total digits - 1). For 123, count is 3, so i starts at 2 (10^2)
    int i = count - 1; 

    // 2. Reverse the number using your formula
    temp = num;
    while (temp != 0) {
        digit = temp % 10; // Extract the last digit
        
        ans = ans + (digit * pow(10, i)); // Add digit * 10^i
        
        temp /= 10; // Move to next digit
        i--;        // Decrease the power of 10
    }

    cout << "Reversed Number = " << ans << endl;

    return 0;
}
