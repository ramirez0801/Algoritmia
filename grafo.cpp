#include <bits/stdc++.h>
#define lli long long int

using namespace std;
const lli N = 20;

void adyacencia(lli g[N][N])
{
    lli u,v,n,m;
    cin>>n>>m;
    for(int i = 0; i<n; i++)
    { 
        cin>>u>>v;
        g[u][v] = 1;
    }
}

void incidencia(lli g[N][N])
{
    lli u,v,n,m;
    cin>>n>>m;
    

    for(int j = 0; j<m; j++)
    {
        cin>>u>>v;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    
}



main()
{
    lli g[N][N];//n Vertices, m Aristas

    for(int i = 0; i<N; i++)
        for(int j = 0; j<N; j++)
            g[i][j] = -1;
    

    adyacencia(g);
    
    
}