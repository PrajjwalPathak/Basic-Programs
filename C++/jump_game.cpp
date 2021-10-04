/*
Author: jainanubhuti
Date Modified: 2nd October 2021
*/

#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& v) {
        if(v.size()==1)return true;
        int mx=0,n=v.size();
        for(int i=0 ; i<min(mx+1,n-1) ; i++){
            mx=max(i+v[i],mx);
            if(mx>=v.size()-1)return true;
        }
        return false;
    }
};
