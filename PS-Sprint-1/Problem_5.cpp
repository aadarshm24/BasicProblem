/*
**Generating the Fibonacci Series**
   **Difficulty**: Easy
   **Topics**: Basic Programming, Sequences
   **Description**: Write a program to generate the Fibonacci series up to a given number.
   **Example**:
   Input: `limit = 10`
   Output: `[0, 1, 1, 2, 3, 5, 8]`
   Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8].
*/

#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1;
    cout << "Enter limit of the seires: ";
    cin >> n;
    while (a <= n)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}