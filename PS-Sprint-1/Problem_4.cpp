/*
**Calculating Armstrong Numbers**
   **Difficulty**: Easy
   **Topics**: Basic Programming, Number Theory
   **Description**: Write a program to check if a number is an Armstrong number.
   **Example**:
   Input: `number = 153`
   Output: `Armstrong Number`
   Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
*/

#include<iostream>
using namespace std;
int main()
{   
    int num,sum=0,digit=0,rem;
    cout<<"Enter number: ";
    cin>>num;
    // finding number of digits in number
    int orignal=num;
    while(num>0)
    {
        num/=10;
        digit++;
    }
    cout<<digit<<endl;

    num =orignal;
    // caluclating the sum 
    while(num!=0)
    {
        rem=num%10;
        sum = sum+pow(rem,digit);
        num/=10;
    }
    if(orignal==sum)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout << "Not a Armstrong";
    }
    return 0;
}

/*
1. prserve orignal number
2. finding digit in number 
3. finding sum of each number to the power of digit 
4. check the sum is equal to the num
*/