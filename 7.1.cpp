#include <iostream>
#include <array>
#include <stdexcept>
#include <iomanip>

using namespace std;

int main()
{
    array<int,7> a1;
    array<int,10> a2;
    cout << "Size of array a1 is "<< a1.size() << "\n after initialization is:";
    for (int i = 0; i < a1.size();i++){
        cout << a1[i];
    }
     cout << "\nSize of array a2 is "<< a2.size() << "\n after initialization is:";
    for (int i = 0; i < a2.size();i++){
        cout << a2[i];
    }
    cout << "\nEnter 17 integers:" << endl;
    for (int i = 0; i < a1.size();i++){
        cin >> a1[i];}
    for (int i = 0; i < a2.size();i++){
        cin >> a2[i];}

    cout << "\nAfter input, the arrays contain:\n";
    for (int i = 0; i < a1.size();i++){
        cout << a1[i];
    }
    cout << endl;
    for (int i = 0; i < a2.size();i++){
        cout << a2[i];
    }
    cout << "\nEvaluating: a1 != a2" << endl;
    for (int i = 0; i< a2.size(); i++ ){
        if (a1[i] != a2[i]){
            cout << "a1 y a2 no son iguales"<< endl;
            break;
        }
    }
    array<int,7> a3 = a1;
        cout << "Size of array a3 is "<< a3.size() << "\n after initialization is:";
    for (int i = 0; i < a3.size();i++){
        cout << a3[i];
    }
    cout << "\nAssigning integers2 to integers1:" << endl;
for (int i = 0; i< a2.size(); i++ ){
        a1[i] = a2[i];
    }
    for (int i = 0; i < a1.size();i++){
        cout << a1[i];
    }
    cout << endl;
    for (int i = 0; i < a2.size();i++){
        cout << a2[i];
    }
}
