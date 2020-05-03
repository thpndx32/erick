#include <iostream>

using namespace std;

int minutos(int hora, int dia, int mes){
    int mins;
    mins = (hora * 60) +(dia *1440);
    return mins;
}
int main()
{
    int hora,dia,mes;
    cin >> hora;
    cin >> mes;
    cin >> dia;
    int x = minutos (hora,dia,mes);
    cout << x;
}
