/*

 **Finding the Least Common Multiple (LCM)**
    **Difficulty**: Easy
    **Topics**: Basic Programming, Number Theory
    **Description**: Write a program to find the LCM of two numbers.
    **Example**:
    Input: `a = 12, b = 15`
    Output: `60`
    Explanation: The LCM of 12 and 15 is 60.

*/

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, limit, LCM = 1;
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

    for (int i = limit; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            LCM = i;
        }
    }

    cout << endl;
    cout << "GCD is " << LCM;
    cout << endl;
    return 0;
}