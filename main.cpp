#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x;
    cout << "ingrese un numero" << endl;
    cin >> x ;
    int y = x;
    int z = 1;
    while (y >= 10){
     y = y / 10;
     z = z+1;
    }
    int a,b;
    int c=z;
    while (z != 0){
        b = pow(10,(c-z+1));
        a = (x % b)/(b/10);
        cout << a<< " " ;
        z=z-1;
    }
    return 0;
}
