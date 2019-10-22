#include<stdio.h>
#define SIZE 10
void Insertion_Sort(int arr[SIZE])
{
	int i,j,key;
	for(i=1 ; i<SIZE ; i++)
	{
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
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
	Insertion_Sort(arr);
	for(i=0 ; i<SIZE ; i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;

}
