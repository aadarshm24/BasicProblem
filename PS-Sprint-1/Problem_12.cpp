/*

 **Counting Vowels and Consonants in a String**
    **Difficulty**: Easy
    **Topics**: Basic Programming, String Manipulation
    **Description**: Write a program to count vowels and consonants in a given string.
    **Example**:
    Input: `string = "hello world"`
    Output: `Vowels: 3, Consonants: 7`
    Explanation: "hello world" contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d).

*/
#include<iostream>
using namespace std;
int main()
{
    int start,end,vowels=0,cons=0;
    string word;
    cout<<"Enter the word: ";
    getline(cin,word);

    start=0;
    end=word.length()-1;

    while (start<=end)
    {
        if (word[start] == 'a' || word[start] == 'e' || word[start] == 'i' || word[start] == 'o' || word[start] == 'u')
        {
           vowels++;
        }
        else
        {
            cons++;
        }
        start++;
        end--;
    }
    cout<<endl;
    cout<<"Vowels: "<<vowels;
    cout<<"Consonants: "<<cons;
    
    
    return 0;
}