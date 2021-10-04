/*
Author: mayanjain17
Date Modified: 2nd October 2021
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool isValid(string s) {
        stack<char> stk;
        for(auto c:s){
            switch (c){
            case '(': stk.push(')');break;
            case '{': stk.push('}');break;
            case '[': stk.push(']');break;
            default :
            if(stk.empty()||stk.top()!=c)return false;
            else stk.pop();
        }}
        if(stk.empty())return true;
        return false;
    }
};
