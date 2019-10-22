#include<stdio.h>
#define SIZE 10
void Selection_Sort(int arr[SIZE])
{
	int i,j,temp;
	for(i=0 ; i<SIZE-1 ; i++)
	{
		for(j=i+1; j<SIZE ;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main()
{
	int arr[SIZE],i;
	for(i=0 ; i<SIZE ; i++)
	{
		printf("Enter %d no. : ",i+1);
		scanf("%d",&arr[i]);	
	}
	printf("Sorted array is : \n");
	Selection_Sort(arr);
	for(i=0 ; i<SIZE ; i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;

}
