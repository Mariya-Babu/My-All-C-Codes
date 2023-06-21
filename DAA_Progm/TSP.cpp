#include<stdio.h>
#include<limits.h>
int cost=0;
 int find_next_node(int node ,int n,int graph[][n],int visited[])
 {
   int nd,democost,min=INT_MAX,min_index,i;
   for(i=0;i<n;i++)
   {
     if(!visited[i]&&graph[i][node]<min&&graph[node][i]!=0)
     {
       democost=graph[node][i];
       min=graph[node][i];
       min_index=i;
     }
  
   }
      cost+=democost;
     nd=min_index;
     return nd;
 }
void TSP(int node ,int visited[],int n, int graph[][n])
{
visited[node]=1;
int next_node;
printf("%d->",node);
next_node=find_next_node(node,n,graph,visited);
if(node==INT_MAX)
{
  printf("not ");
}
 TSP(next_node,visited,n,graph);
}
void main()
{
  int n;
  printf("enter the no of vertices of graph:");
  scanf("%d",&n);
  int graph[n][n],visited[n],i,start,j;
  printf("enter the connected edges:");
  for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       scanf("%d",&graph[i][j]);
     }
   }
  printf("the matrix is:");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d",graph[i][j]);
    }
    printf("\n");
     }
       for(i=0;i<n;i++)
    {
      visited[i]=0;
    }
printf("enter the starting vertex:");
scanf("%d",&start);
TSP(start,visited,n,graph);
}
