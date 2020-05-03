#include <iostream>

using namespace std;
int potencia (int x,unsigned int y){
    int z = x;
    for (int i = 1;  i < y; i++){
        x = x *z;
    }
    return x;
}

int main()
{
    int x;
    unsigned int y;
    cin >> x;
    cin >> y;
    cout << potencia(x,y)<< endl;
    return 0;
}
