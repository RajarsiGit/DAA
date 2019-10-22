#include<stdio.h>
 int main(){
 int edges=0,i,j,cost=0,n,u=0,v=0,min;
 int adj[10][10],span[10][10],selected[10]={0};
 printf("Enter the number of nodes: \n");
 scanf("%d",&n);
 printf("Enter the adjacency matrix: \n");
  for(i=1;i<=n;i++){
  for(j=1;j<=n;j++)
  {

    span[i][j]=9999;
    if(i!=j){
        printf("enter the cost for %d to %d edge",i,j);
        scanf("%d",&adj[i][j]);
        if(adj[i][j]==0)
            adj[i][j]=9999;
    }
    else{
        adj[i][j]=0;
    }
  }
  }
    selected[1]=1;
    while(edges<n-1){
            min=9999;
           // u=0;
           // v=0;
            for(i=1;i<=n;i++)
            {
                if(selected[i]==1){
                for(j=1;j<=n;j++){
                    if(selected[j]==0 && adj[i][j])
                        if(min>adj[i][j]){
                            min=adj[i][j];
                            u=i;
                            v=j;
                        }
                    }
                }
            }
        span[u][v]=min;
        span[v][u]=min;
        cost=cost+min;
        selected[v]=1;
        printf("\n %d ------> %d ,weight: %d\n",u,v,min);
        edges++;
    }
        printf(" adjacency matrix:\n");
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                printf("%d\t",adj[i][j]);
            }
            printf("\n");
        }
        printf("final matrix:\n");
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                    if(span[i][j]==9999)
                        span[i][j]=0;
                        printf("%d\t",span[i][j]);
            }
            printf("\n");
        }
        printf("Cost for the shortest path:%d",cost);
        return 0;
  }