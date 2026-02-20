/*

 **Summing Digits of a Number**
   **Difficulty**: Easy
   **Topics**: Basic Programming, Mathematical Computations
   **Description**: Write a program to calculate the sum of digits of a number.
   **Example**:
   Input: `number = 1234`
   Output: `10`
   Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10.

*/

#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
   
    // finding each digit in number
    while(num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        num/=10;
    }
    cout<<sum;
    return 0;
}