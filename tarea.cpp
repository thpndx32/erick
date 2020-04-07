include <iostream>

using namespace std;

int main()
{
    int x,y;
    int a,b,c;
    cout << "Dale un valor a x" << endl;
    cin >> x;
    cout << "Dale un valor a y" << endl;
    cin >> y;
    a=x+y;
    b=x*y;
    c=x-y;
    cout << "La suma de x e y: " << a << endl;
    cout << "El producto de x e y" << b << endl;
    cout << "La diferencia de x e y: " << c << endl;
    return 0;
}
