#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    float x = 4;
    float z = 0;
    for (int i =0; i < 200000; i++){
        float y = ((2*i)+1)* pow(-1,i);
        z = z + x/y;
        cout << i<< "  "<<z << endl;
    }
}
