/*
C++ Program to break a Palindrome
Author: mayanjain
Date Modified: 2nd October 2021
*/

class Solution
{
public:
    string breakPalindrome(string p)
    {
        int n = p.size();
        if (n == 1)
            return "";
        for (int i = 0; i < n / 2; i++)
        {
            if (p[i] != 'a')
            {
                p[i] = 'a';
                return p;
            }
        }
        p[n - 1] = 'b';
        return p;
    }
};
