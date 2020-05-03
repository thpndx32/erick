#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
cout << fixed << setprecision(2);
double principal{24.00};
double rate{0.05};

for (int i=0; i<2; i++){
for (unsigned int year{1}; year <= 390; year++) {
double amount = principal * pow(1.0 + rate, year);
cout << setw(4) << year << setw(30) << amount << endl;
}
rate =0.1;
}
}
