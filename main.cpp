#include <iostream>

using namespace std;

int gcd (int x, int y){
    if (x < y){
        int c = x;
        x= y;
        y = c;
    }
    if (y == 0) {
        return x;
    }
    else {
        return gcd(y, x%y );
    }
}
int main()
{
    cout << gcd (24,84)<< endl;
    return 0;
}
