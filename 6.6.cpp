#include <iostream>
#include <math.h>

using namespace std;
int reverted(int x){
    int x1 = x;
    int c = 0;
    while (x1 >= 1){
        x1 =x1/10;
        c++;
    }
    for (int i= 0; i <= c; i++){
        int y = x%10;
        x1 = x1 + y*pow(10,(c-i-1));
        x = x/10;
    }
    return x1;

}
int main()
{
    cout << reverted (2263511);
}
