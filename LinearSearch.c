#include<stdio.h>
#define SIZE 10

/* Returne index */
int Linear_Search(int arr[SIZE], int num)
{
	int i;
	for(i=0 ; i<SIZE ; i++)
	{
		if(arr[i]==num)
			return i;
	}
	return -1;
}


int main()
{
	int arr[SIZE],i,num,flag;
	for(i=0 ; i<SIZE ; i++)
	{
		printf("Enter %d no. : ",i+1);
		scanf("%d",&arr[i]);	
	}
	printf("\nEnter search element : ");
	scanf("%d",&num);
	flag=Linear_Search(arr,num);
	if(flag==-1)
		printf("\nElement is not present in an array.");
	else
		printf("\nnumber ( %d ) is present at position %d ",num,++flag);
	return 0;

}
