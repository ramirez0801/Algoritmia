#include <bits/stdc++.h>

using namespace std;

void seleccion(int n, int *arr)
{
    int mini,tmp, comp = 0, movi = 0;
    for(int i = 0; i < n-1;i++)
    {
        mini = i;
        for(int j = i+1; j<n; j++)
        {
            comp++;
            if(arr[j] < arr[mini])
            {
                mini = j;
                movi++;
            }
        }
        tmp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = tmp;

        cout<<"\nComparaciones: "<<comp<<" Movimientos: "<<movi<<endl;
    }
}

void inserccion(int n, int arr[])
{

}


main()
{
    int arr[] = {18,12,64,3,6}, n = 5;
    n = sizeof(arr)/sizeof(arr[0]);
    seleccion(n,arr);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}