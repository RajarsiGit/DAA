#include<stdio.h>
#define SIZE 10
void Bubble_Sort(int arr[SIZE])
{
	int i,j,temp,flag;
	for(i=0 ; i<SIZE-1 ; i++)
	{
		flag=0;
		for(j=0 ; j<(SIZE-1-i) ; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
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
	Bubble_Sort(arr);
	for(i=0 ; i<SIZE ; i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;

}
