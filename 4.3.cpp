#include <iostream>
#include <math.h>

using namespace std;
bool binario(unsigned int x){
    while (x >= 10){
        if (x % 10 > 1){
            return 0;
        }
        x= x / 10;
    }
    return 1;
}
int main()
{
    unsigned int x;
    int c = 0;
    int d= 0;
    cin >> x;
    while ( binario(x) == 0 ){
        cout << "ingrese un valor binario"<< endl;
        cin >> x;
    }
    while (x >= 1)
    {
        d = d+ (x%10 * pow(2,c));
        x= x/10;
        c++;
    }
    cout << d << endl;

}
