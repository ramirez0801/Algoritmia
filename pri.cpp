#include <iostream>
#include <math.h>
#include <vector>
#include <ctime>

using namespace std;

bool primo(int n,int i)
{
   bool es = true;
   if(i<n)
   {
     if(n % i == 0)
     {
       return false;
     }
     else
     {
       es = primo(n,i+1);
       return es;
     }
   }

   return true;
}

bool priRaiz(int n)
{
   int raiz;
   raiz = sqrt(n);
   for(int i = 2; i<=raiz; i++)
   {
      if(n % i == 0)
        return false;
   }
   return true;
}

bool criba[100000];

void cribaPri(int n)
{
    int raiz;

    for(int i = 2; i<=100000; i++)
    {
        raiz = sqrt(i);
        for(int j = 2; j<=raiz +1; j++)
        {
            if(i % j == 0)
                criba[i] = false;
            else
                criba[i] = true;
        }

    }
}

void mostrarCriba(int n)
{
    for(int i = 2; i<=n; i++)
    {
        if(criba[i])
            cout<<" "<<i<<" ";

    }
}

main()
{
  int n, i = 2;
  unsigned t0,t1;
  t0 = clock();
  cin>>n;

  /*if(priRaiz(n))
  {
    cout<<"Es primo";
  }
  else
  {
    cout<<"No es primo";
  }
*/

  cribaPri(n);
  if(criba[n])
    cout<<"Es primo\n";
  else
    cout<<"No es primo\n";

  t1 = clock();
  double timeR = (double(t1-t0)/CLOCKS_PER_SEC);

 mostrarCriba(n);
  cout<<"\nTiempo: "<<timeR;

  return 0;
}
