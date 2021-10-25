/* 
Linear Search in C++
Author: Tanya Gupta
Date Modified: 3rd October, 2021
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ele, a[50];
    bool loop;
    char decision;

    do
    {
        cout << "Enter the size of the array: ";
        cin >> n;

        cout << "Enter the element to be searched: ";
        cin >> ele;

        cout << "Enter the array elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == ele)
            {
                cout << "Element found at index " << i << endl;
            }
        }

        cout<<"Do you want to continue? Y/N \n >>";
        cin>>decision;
        if(decision=='Y'||decision=='y') loop=true;
        else loop=false;
        
    }while(loop==true);



    return 0;
}