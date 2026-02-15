/*
1. **Determining Even/Odd Numbers**
   **Difficulty**: Easy
   **Topics**: Basic Programming
   **Description**: Write a program to check whether a number is even or odd.
   **Example**:
   Input: `number = 4`
   Output: `Even`
   Explanation: Since 4 is divisible by 2, it is an even number.
*/

#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}