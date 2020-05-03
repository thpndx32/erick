#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 0;
    int c=0;
    for (int i=0; i < 2; i++){
        for (int j= 1; j<= 10; j++){
            string x (j,'*') ;
            cout << setw(c)<<x<< endl;
        }
        while (x < 2){
            for (int k=0;k<10; k++){
                    string y (10-k,'*');
                    cout << setw (c)<< y<<endl;
            }
            x++;
            c= 10;
        }
    }
}
