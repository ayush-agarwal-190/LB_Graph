#include<bits/stdc++.h>
using namespace std;

// 6 vertices and 5 edges
// two ways to construct a graph is 
// 1 adjecent matix
// 2 adjacency list

// ##########Using adjacency ############
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> g[v+1];
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=1;i<=v;i++)
    {
        cout<<i<<"-->";
        for(int j=0;j<g[i].size();j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}