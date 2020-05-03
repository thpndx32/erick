#include <iostream>
#include <vector>

using namespace std;
int promedio_v (vector<int>x)
{
    int y=0;
    for (int i= 0;i < x.size(); i++ ){
        y = y +x[i];
    }
    y = y/x.size();
    return y;
}
int menor (vector<int> x){
    vector <int> c;
    if (x.size() == 1 )
    {
        return x[0];
    }
    int y = promedio_v(x);
    for (int i= 0;i < x.size(); i++){
        if (x[i]<y){
            c.push_back(x[i]);
        }
    }
    return menor(c);

}
int main()
{
    int x,y;
    vector<int> nmros;
    cin >> x;
    for(int i=0; i < x; i++)
    {
        cin >> y;
        nmros.push_back(y);
    }
    cout << menor(nmros);
    return 0;
}
