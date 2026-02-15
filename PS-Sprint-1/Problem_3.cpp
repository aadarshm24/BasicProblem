/*
 **Validating Leap Years**
   **Difficulty**: Easy
   **Topics**: Basic Programming, Date Handling
   **Description**: Write a program to check if a given year is a leap year.
   **Example**:
   Input: `year = 2020`
   Output: `Leap Year`
   Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.
*/

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter year";
    cin>>year;

    if (year%4==0)
    {
        cout<<"leap year";
        return 0;
    }

    else if (year%100==0)
    {
        if (year%400==0)
        {
            cout<<"Leap year";
            return 0;
        }
        
        else
        {
            cout<<"Not a leap year: ";
            return 0;
        }
    }

    else
    {
        cout<<"Not a leap year";
    }
    
    

    return 0;

}