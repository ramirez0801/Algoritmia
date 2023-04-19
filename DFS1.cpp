#include <bits/stdc++.h>
using namespace std;
#define lli long long 

const lli N = 1e3;
vector<lli> g[N];
bool vis[N];

void dfs(lli u)
{
    vis[u] = true;
    for(auto v: g[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

lli n,m;

int main()
{
    cin>>n>>m;
    for(int i = 0; i<m; i++)
    {
        lli v,u;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    return 0;
}