/*
**Identifying Palindromes**
   **Difficulty**: Easy
   **Topics**: Basic Programming, String Manipulation
   **Description**: Write a program to check if a string or number is a palindrome.
   **Example**:
   Input: `string = "radar"`
   Output: `Palindrome`
   Explanation: "radar" reads the same backward as forward.
*/

#include <iostream>
using namespace std;
int main()
{
    string word;
    bool isPlindrome = false;
    cout << "Enter the word: ";
    getline(cin, word);

    int start = 0;
    int end = word.length() - 1;
    while (start < end)
    {
        if (word[start] != word[end])
        {
            isPlindrome = false;
            break;
        }
        else
        {
            isPlindrome = true;
        }
        start++;
        end--;
    }

    if (isPlindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

/*

Two pinter approch here 
1. calculate the size of sting 
start = 0
end = length of string - 1
now loop run until start < end ;
is str[start]!=str[end]
    not palindrom
else
    palindrom

fro number firstly reverse the number then check
*/