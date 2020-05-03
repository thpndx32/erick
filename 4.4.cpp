#include <iostream>

using namespace std;

int main()
{
    double x =0;
    double y =1;
    double c;
    while (1){
        c = x;
        x = x+y;
        y = c;
        cout << x << endl;
    }
}
