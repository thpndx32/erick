#include <iostream>
#include <array>

using namespace std;
const size_t x {10};
int max_valor (array<int,x> a, int y, int z){
    if (y+1 == z){
        return a[y];
    }
    int c = 0;
    float sum = 0;
    for (int i = y; i < z; i++,c++){
        sum = sum + a[i];
    }
    sum = sum / c;
    c = 0;
    for (int i = y; i < z;i++){
        if (a[i] > sum){
            a[z]= a[i];
            c++;
        }
    }
    max_valor (a,z,z+c);
}
int main()
{
        array <int, x> c{15,17,84,-987,17,265,1000,84,13,-48};
        cout << max_valor (c,3,5);

}
