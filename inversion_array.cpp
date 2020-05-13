#include <iostream>

using namespace std;

int inv (int arr[],int tam){
    int j = tam-1;
    int temp;
    for (int i = 0;i<(tam+1)/2; i++,j--){
        temp = arr[i];
        arr [i] = arr [j];
        arr[j] = temp;
    }
    return 0;
}
int inv_rec (int arr[], int tam,int i = 0){
    if (tam <= i)
        return 0;
    int temp = arr[i];
    arr [i] = arr [tam-1];
    arr[tam -1] = temp;
    inv_rec (arr, tam-1, i+1);
}
int main()
{
    int arr[5] = {24,13,12,17,18};
    int tam = sizeof(arr)/sizeof(arr[0]);
    inv_rec(arr,tam);
    for (int i = 0; i < tam; i++)
        cout << arr [i] << " " ;
}
