/*
Question: 

Time complexity: O(n log(n))

Space Complexity: O(n)
*/

#include <iostream>
#include <algorithm>
#include<string.h>

using namespace std;

string replace( string s, int length)
{
    int new_lenght = 0;
    for(int i = 0; i < length; i++){
        if(s[i] == ' ')
        {
            new_lenght += 3;
        }
        else {
            new_lenght++;
        }
    }

    char result[new_lenght + 1] ;
    for(int i = 0,j = 0; i < length; i++){
        if(s[i] == ' ')
        {
            result[j] = '%';
            result[j+1] = '2';
            result[j+2] = '0';
            j += 3;
        }
        else{
            result[j] = s[i];
            j++;
        }
    }
    return result;
}

int main()
{
    string s = "I will finish CCI ";
    int length = 10;
    string r = replace(s,length);
    cout<<r<<endl;
    return 1;
}