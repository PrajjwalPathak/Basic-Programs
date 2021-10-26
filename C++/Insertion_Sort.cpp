/* 
Insertion Sort in C++
Author: Tanya Gupta
Date Modified: 2nd October 2021
*/

#include <bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void InsertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int temp = a[i];

        while (j >= 0 and a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{

    char choose;
    bool loop;
    int n;

    do{
        cin >> n;

        int a[50];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        InsertionSort(a, n);

        cout << "The sorted array: ";
        display(a, n);

        cout<<endl<<----------------------------<<endl;
        cout<<"do you want to continue? Y/N"<<endl<<">>";
        cin>>choose;
        if(choose=='Y'||choose=='y') loop=true;
        else loop=false;
        cout<<endl<<endl;

    }while(loop==true);


    return 0;
}