/*

 **Crafting Star Patterns**
   **Difficulty**: Easy
   **Topics**: Basic Programming, Patterns
   **Description**: Write a program to create different star patterns (e.g., pyramid, diamond).
   **Example**:
   Input: `patternType = "pyramid", height = 5`
   Output:
   ```
       *
      ***
     *****
    *******
   *********
   ```
   Explanation: A pyramid pattern with a height of 5 is generated.


*/

#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Enter the height of pyramid: ";
    cin>>height;

    for(int i =1; i<=height; i++)
    {
        // print sapce
        for (int j = 1; j <= height - i; j++)
        {
            cout << " ";
        }
        // print star
        for (int j = 1; j <= (2*i-1); j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}