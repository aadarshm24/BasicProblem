/*

**Finding the Greatest Common Divisor (GCD)**
    **Difficulty**: Easy
    **Topics**: Basic Programming, Number Theory
    **Description**: Write a program to find the GCD of two numbers.
    **Example**:
    Input: `a = 48, b = 18`
    Output: `6`
    Explanation: The GCD of 48 and 18 is 6.

*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2,limit,GCD=1;
    cout << "Enter to number: ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        limit = num2;
    }
    else
    {
        limit = num1;
    }

    for (int i = 1; i <= limit; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD=i;
        }
    }

    cout<<endl;
    cout<<"GCD is "<<GCD;
    cout<<endl;

    // Euclidean Algorithm
    
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD is " << a;


    return 0;
}