#include <stdio.h>
void main()
{
    int G[10][10],n,i,j,i_degree,o_degree;
    printf("\n Enter no of nodes:");
    scanf("%d",&n);
    printf("\n Enter adjacency matrix of the graph:");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        scanf("%d", &G[i][j]);
    }
    for(i=0;i<n;i++)
    {
        i_degree=0;
        for(j=0;j<n;j++)
            if(G[j][i]!=0)
            i_degree++;
        o_degree=0;
        for(j=0;j<n;j++)
            if(G[i][j]!=0)
            o_degree++;
        printf("\n node number %d\t indegree=%d\t outdegree=%d", i,i_degree,o_degree);
    }
}