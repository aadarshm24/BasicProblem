/*

 **Finding the Factorial of a Number**
   **Difficulty**: Easy
   **Topics**: Basic Programming, Mathematical Computations
   **Description**: Write a program to compute the factorial of a given number.
   **Example**:
   Input: `number = 5`
   Output: `120`
   Explanation: 5! (factorial) is 5 × 4 × 3 × 2 × 1 = 120.

*/

#include<iostream>
using namespace std;

long long fact(int n)
{
    if(n==0 ||n==1)
    {
        return 1;
    }
    else 
    {
        return n * fact(n-1);
    }
}
int main()
{
    int num;
    cout<<"Enter nnumber: ";
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<fact(num)<<endl;
    return 0;
}