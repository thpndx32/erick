#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    cin >> x;
    string lol (x,'*');
    cout << lol<< endl;
    for (int i = 0; i <= (x-2); i++){
        cout << '*' << setw(x-1)<< '*'<< endl;
    }
    cout << lol<<endl;
    return 0;
}
