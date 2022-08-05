#include<bits/stdc++.h>
using namespace std;

// 6 vertices and 5 edges
// two ways to construct a graph is 
// 1 adjecent matix
// 2 adjacency list

// ##########Using adjacency matrix ############
int main()
{
    int v,e;
    cin>>v>>e;
    int g[v+1][v+1];
   for(int i=1;i<=v;i++)
   {
    for(int j=1;j<=v;j++)
    g[i][j]=0;
   }


    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x][y]=1;
        g[y][x]=1;
    }

    for(int i=1;i<=v;i++)
    {
        cout<<i<<"-->";
        for(int j=1;j<=v;j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}