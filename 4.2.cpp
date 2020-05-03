#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int y,z;
    y = x /100 ;
    z = x % y;
    y = y / 10;
    int a,b,c;
    a = y /10;
    b = y%10;
    c = b*10 + a;
    if (c == z)
    {
        cout << x << " es palindrome"<< endl;
    }
    else {cout << x << " no es palindrome"<< endl;}

}
