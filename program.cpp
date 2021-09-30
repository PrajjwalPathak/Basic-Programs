//Anuj Singh
//C++ Program to Check Whether a Number is Palindrome or Not
#include <iostream>
using namespace std;

int main()
{
     int n, num, digit, rev = 0;

     cout << "Enter a no: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse is: " << rev << endl;

     if (n == rev)
         cout << "  palindrome.";
     else
         cout << "  not a palindrome.";

    return 0;
}
