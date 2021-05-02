/*
Question: Given two strings, write a method that decide that one is a permutation of other

Time complexity: O(n log(n))

Space Complexity: O(n)
*/




#include <iostream>
#include <algorithm>
using namespace std;


bool check_permutation(string a, string b){
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    int x = a.compare(b);
    if(x == 0 )
    {
        return true;
    }

    return false;
}

int main()
{
    string a = "ABCD", b = "ABDCE";
    bool result = check_permutation(a,b);
    if(result) cout<< "permutation"<< endl;
    else cout<< " not a permutation"<< endl;
    return 1;
}
