#include <iostream>
#include <math.h>
using namespace std;
bool primo (int x){
    int y = int (sqrt(x));
    for (int i=2; i <=y;i++){
        if (x%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    for (int i = 1; i <= 10000; i ++){
        if (primo (i)){
            cout << i<< endl;
        }
    }
}
