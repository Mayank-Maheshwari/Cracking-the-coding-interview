/*
Question: Implement an Algorithm to determine if a string has all unique characters. 
What if you can not use additional data structure?


Time complexity: O(n)

Space Complexity: O(n)
*/

#include <iostream>
#include <unordered_map>
#include<list>
using namespace std;

bool check_unique(string s)
{
    unordered_map<char, int> m;
    for (auto c : s)
    {
        m[c]++;
    }
    for (auto c : m)
    {
        if (c.second > 1)
            return false;
    }
    return true;
}

int main()
{
    list <string> inputs = {"abc","abcdef","acbcab"};

    for(auto input: inputs)
    {
        bool result = check_unique(input);
        if(result) cout<< endl<< input<< " is a string that contains unique characters";
        else cout<< endl<< input<< " is a string that does not contains unique characters";
    }
    return 1;
}