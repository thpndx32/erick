#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Car"<< setw(10) << "Hours"<< setw(20)<< "Charge" << endl;
    float x,y,z,h;
    for (int i=1;i< 3; i ++){
        cout<< fixed << setprecision(1);
        cin >> x;
        while (x > 24 || x <=0){
            cin >> x;
        }
        int x1 = int (x + 0.5);
        switch ( (x1-1) / 3 ){
        case 0:
            y = 20.00;
            break;
        case 1:
        case 2:
            y = 20.00 + ((x-3)*5);
            break;
        default:
            y = 50.00;
            break;
        }
        z = z + y;
        h = h + x;
        cout << i << setw(10)<< x ;
        cout << fixed << setprecision(2);
        cout << setw(20) << y << endl;
    }
    cout << "TOTAL"<< setw(10) << h << setw(20)<< z << endl;
    return 0;

}
