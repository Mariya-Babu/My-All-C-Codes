#include<stdio.h>
#include<stdlib.h>
int i,j,a,b,u,v,n,no_edges=1;
// n is for number of vertices
// no_edges is for number of edges
int min,mincost=0,cost[100][100],parent[100];
int find(int);
int uni_on(int,int);
int main()
{
 printf("\n Enter the no. of vertices:");
 scanf("%d",&n);
 printf("\n Enter the adjacency matrix of costs or weights :\n");
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++) 
{
 scanf("%d",&cost[i][j]);
 if(cost[i][j]==0)
 cost[i][j] = 999999;
 }
 }
 printf("The edges of Minimum Cost Spanning Tree are :\n");
 while(no_edges<n)
 {
 min=999999;
 for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
 if(cost[i][j]<min)
{
 min=cost[i][j];
 a=u=i;
 b=v=j;
 }
 }
 }
 u=find(u);
 v=find(v);
 if(uni_on(u,v))
{
 printf(" \n%d-%d = %d\n",a,b,min);
 mincost+=min;
 }
 cost[a][b]=cost[b][a]=99999;
 }
 printf("\n\tThe Minimum cost for the given MST = %d\n",mincost);
 
 }
 int find(int i)
 {
 while(parent[i])
 i=parent[i];
 return i;
 }
 int uni_on(int i,int j) 
{
 if(i!=j)
 {
 parent[j]=i;
 return 1;
 }
 return 0;
 }
