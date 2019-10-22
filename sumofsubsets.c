#include<stdio.h>
void find(int *a,int currsum,int index,int sum,int *sol,int N)
{
	int i;
	if(currsum==sum)
	{
	    printf("\nSolution found: ");
	    for(i=0;i<N;i++)
	        if (sol[i] == 1)
	            printf("%d\t",a[i]);
	}
	else if(index==N)
	    return;
	else
	{
	    sol[index]=1;
	    currsum+=a[index];
	    find(a,currsum,index+1,sum,sol,N);
	    currsum-=a[index];
	    sol[index]=0;
	    find(a,currsum,index+1,sum,sol,N);
	}
	return;
}

int main()
{
	int *a,N,*sol,i,sum;
	printf("\nEnter number of elements: ");
	scanf("%d",&N);
	
	a=(int *) malloc(N*sizeof(int));
	sol=(int *) malloc(N*sizeof(int));
	
	printf("\nEnter elements: ");
	for(i=0;i<N;i++)
	    scanf("%d",&a[i]);
	    
	printf("\nEnter sum: ");
	scanf("%d",&sum);
	find(a,0,0,sum,sol,N);
	return 0;
}
