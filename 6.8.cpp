#include <iostream>

using namespace std;

double fibonacci (int x){
    if (x <= 2){
        return 1;
    }
    int y = 1;
    int z = 1;
    for (int i =0; i < x-2; i++){
        int c = y;
        y = y + z;
        z = c;
    }
    return y;
}
int main()
{
    cout << fibonacci (7) << endl;
}
