/*

**Checking for Prime Numbers**
   **Difficulty**: Easy
   **Topics**: Basic Programming, Number Theory
   **Description**: Write a program to determine if a number is prime.
   **Example**:
   Input: `number = 7`
   Output: `Prime`
   Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Not Prime";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i*i<=n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}