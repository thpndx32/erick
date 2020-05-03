#include <iostream>

using namespace std;
bool isFactor (int x,int y){
    if(x%y == 0){
        return 1;
    }
    return 0;
}
int main()
{
    int x,y;
    cin >> x;
    cin >> y;
    cout << isFactor(x,y) << endl;
    return 0;
}
