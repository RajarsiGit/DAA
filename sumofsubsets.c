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
	int a[]={10,5,7,12,13,4};
	int N=sizeof(a)/sizeof(int);
	int sol[N];
	find(a,0,0,17,sol,N);
	return 0;
}
