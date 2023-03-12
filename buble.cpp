#include <bits/stdc++.h>

using namespace std;


void buble(int a[],int n)
{
    int aux, comp = 0, mvt = 0;
    for(int i = 0; i<n; i++)
    {
        cout<<"\nIteracion: "<<i;
        for(int j = 0; j<n-1; j++)
        {
            comp++;
            if(a[j+1] < a[j])
            {
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                mvt++;
            }

        }
        cout<<" Comparacion: "<<comp<<" Movimientos: "<<mvt<<endl<<"Arreglo: ";
        for(int k = 0; k<n; k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}

void bubleBest(int a[],int n)
{
    int aux, comp = 0, mvt = 0, band = 0;
    for(int i = 0; i<n; i++)
    {
        cout<<"Iteracion: "<<i;
        for(int j = 0; j<n-1-i; j++)
        {
            band = 0;
            comp++;
            if(a[j+1] < a[j])
            {
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
                mvt++;
                band = 1;
            }

        }
        cout<<" Comparacion: "<<comp<<" Movimientos: "<<mvt<<endl;
        if(band == 0) break;
    }
}



main()
{
    int i,j,a[] = {84,3,1,5,45,10,74,8,4,6}, n = 10;

    bubleBest(a,n);

    for(i = 0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}




