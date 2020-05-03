#include <iostream>
#include <math.h>
using namespace std;
int par_v (int x){
    int c = 0;
 while (x % 2 == 0){
    c++;
    x = x / 2;
 }
 return c;
}
void tor_han(int x){
    int z = pow(2,x);
    for (int i =1; i < z; i++){
        string frase;
        cout << "se mueve el disco " <<par_v(i)+1;
        if (par_v(x)>0){
                switch(i%3){
                case 1 :
                    frase = "auxiliar";
                    break;
                case 2 :
                    frase = "destino";
                    break;
                case 0 :
                    frase = "origen";
                    break;
                }
        }
        else {
            switch(i%3){
                case 1 :
                    frase = "destino";
                    break;
                case 2 :
                    frase = "auxiliar";
                    break;
                case 0 :
                    frase = "origen";
                    break;
                }
        cout << " a " << frase << endl;
        }
    }

}

int main()
{
    int x;
    cin >> x;
    tor_han(x);
}
