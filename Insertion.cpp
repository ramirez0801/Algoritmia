#include <bits/stdc++.h>

using namespace std;

void seleccion(int n, int *arr)
{
    int mini,tmp, comp = 0, movi = 0;
    fstream archI, archM, archC;
    archI.open("Itera.txt",ios::out);
    archM.open("Movi.txt", ios::out);
    archC.open("Comp.txt",ios::out);
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

        //cout<<"\nComparaciones: "<<comp<<" Movimientos: "<<movi<<endl;
        archI<<i<<"\n";
        archM<<movi<<"\n";
        archC<<comp<<"\n";
    }

    archI.close();
    archM.close();
    archC.close();
}

void inserccion(int n, int arr[])
{
    int pos,tmp,i,comp = 0, movi = 0;
    fstream archI, archM, archC;
    archI.open("Itera.txt",ios::out);
    archM.open("Movi.txt", ios::out);
    archC.open("Comp.txt",ios::out);
    for(i = 0; i<n; i++)
    {
        pos = i;
        tmp = arr[i];
        comp++;
        while((pos>0) && arr[pos-1] > tmp)
        {
            arr[pos] = arr[pos-1];
            pos--;
            movi++;
        }
        arr[pos] = tmp;

        //cout<<"\nComparaciones: "<<comp<<" Movimientos: "<<movi<<endl;

        archI<<i<<"\n";
        archM<<movi<<"\n";
        archC<<comp<<"\n";
    }

    archI.close();
    archM.close();
    archC.close();

}


main()
{
    int arr[] = {84,3,1,5,45,10,74,8,4,6}, n = 5;
    n = sizeof(arr)/sizeof(arr[0]);
    seleccion(n,arr);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

   system("py ../graficas.py");

    return 0;

}
