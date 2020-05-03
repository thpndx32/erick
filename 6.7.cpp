#include <iostream>

using namespace std;
int pot_rec(int x, unsigned int y){
    if (y == 1){
        return x;
    }
    x = x * pot_rec(x,y-1);
    return x;
}
int main()
{
    cout << pot_rec(3,5) << endl;
    return 0;
}
