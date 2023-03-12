#include <iostream>
#include <ctime>

using namespace std;

int primoInt(int n)
{
   int es = 1;
   for(int i=2; i<n; i++)
   {
	if(n % i == 0)
	   es = 0;
   }
   return es;
}     

bool primoBool(int n)
{
   bool es = true;
   for(int i=2; i<n; i++)
   {
	if(n % i == 0)
	   es = false;
   }
   return es;
}     

bool primoFin(int n)
{
   for(int i=2; i<n; i++)
   {
	if(n % i == 0)
	   return false;
   }
   return true;
}    

int rango(int b)
{
   
   int cont = 0, i = 0;
   for(i = 2; i <=b; i++)
   { 
	if(primoFin(i))
        { 
	   cont++;   
        }
   }
   return cont;
} 

main()
{
  int n, cont, b;
  cin>>n;
  cin>>b;
  unsigned t0,t1;
  t0 = clock();
  if(primoInt(n) == 1)
     cout<<"Es primo\n";
  else
     cout<<"No es primo\n";

  if(primoBool(n))
     cout<<"Es primo\n";
  else
     cout<<"No es primo\n";

  if(primoFin(n))
     cout<<"Es primo\n";
  else
     cout<<"No es primo\n";

  
  cont = rango(b);
  cout<<cont;

  t1 = clock();
 
  double timeR = (double(t1-t0)/CLOCKS_PER_SEC);


  cout<<"\n"<<timeR;
   

  return 0;
}
	