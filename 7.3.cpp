#include <iostream>
#include <array>

using namespace std;
const size_t x{5};
void print_arr(array <int,x>c,int y, int z){
    for (int i = y;i < z;i++){
        cout << c[i]<< endl;
    }


}
int main()
{
    array <int, 5> a {45,2,7,3,-17};
    print_arr(a, 2,4);

}
