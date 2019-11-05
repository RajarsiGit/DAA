#include<stdio.h> 
#include<limits.h>
#define N 8 
#define INF INT_MAX 

int shortestDist(int graph[N][N])
{ 
	int dist[N]; 
	dist[N-1] = 0; 

	for (int i = N-2 ; i >= 0 ; i--) 
	{ 
		dist[i] = INF;
		for (int j = i ; j < N ; j++) 
		{ 
			if (graph[i][j] == INF) 
				continue;
			dist[i] = (dist[i] < graph[i][j]+dist[j]) ? dist[i] : graph[i][j]+dist[j];
		} 
	} 
	return dist[0]; 
} 

int main() 
{ 
    int i,j;
	int graph[N][N] = 
	{{INF, 1,   2,   5,   INF, INF, INF, INF}, 
	{INF, INF, INF, INF, 4,   11,  INF, INF}, 
	{INF, INF, INF, INF, 9,   5,   16,  INF}, 
	{INF, INF, INF, INF, INF, INF, 2,   INF}, 
	{INF, INF, INF, INF, INF, INF, INF, 18}, 
	{INF, INF, INF, INF, INF, INF, INF, 13}, 
	{INF, INF, INF, INF, INF, INF, INF, 2}};
	
	printf("MULTISTAGE GRAPH PROBLEM\n\n"); 
	for(i=0;i<N-1;i++)
	{
	    for(j=0;j<N;j++)
	        if(graph[i][j]==INF)
	            printf("INF\t");
	        else
	            printf("%d\t",graph[i][j]);
	    printf("\n");
	}

	printf("\nShortest distance: %d",shortestDist(graph)); 
	return 0; 
} 
