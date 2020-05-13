#include <iostream>
#include <array>

using namespace std;
const size_t x{1000};
void prim_arr(array<bool, x > c)
{
    for (int i = 2; i < x;i++){
        for (int j = 2; j <= x/i;j++){
            int temp= i*j;
            c[temp] = 0;
        }
        if (c[i]){
        cout << i<< endl;
        }
    }
}
int main()
{
    array <bool, x> a;
    for (int i = 0; i < x; i++){
        a[i]= 1;
    }
 prim_arr(a);

}
