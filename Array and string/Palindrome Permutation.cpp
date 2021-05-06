/*
Question: Given a string, write a function to check if it is a permutation of a palindrome.

Time complexity: O(n)

Space Complexity: O(n)
*/

#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

string is_palindrome(string word)
{
    unordered_map<char, int> map;
    int odd_count = 0;
    int lenght = word.length();
    for (auto c : word)
    {
        map[c]++;
    }

    if (lenght % 2 == 0)
    {
        for (auto i : map)
        {
            if (i.second % 2 != 0)
            {
                return "does not";
            }
        }
    }

    else
    {
        for (auto i : map)
        {
            if (i.second % 2 != 0)
            {
                odd_count++;
            }
        }
        if (odd_count > 1)
        {
            return "does not";
        }
        
    }
    return "";
}

int main()
{
    list <string> inputs = {"maam","mmaad","hello","ok"};
    for(auto input : inputs){
        string result = is_palindrome(input);
        cout<< "the string '" <<input <<"' "<<result<<" has a palandron permutation"<<endl;
    }
    return 1;
}
