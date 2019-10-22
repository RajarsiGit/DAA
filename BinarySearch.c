#include<stdio.h>
#define SIZE 10
void Insertion_Sort(int[]);
int Binary_Search(int[], int);

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
	Insertion_Sort(arr);
	flag=Binary_Search(arr,num);
	if(flag==-1)
		printf("\nElement is not present in an array.");
	else
		printf("\nnumber is present in an arrya. ");
	return 0;
}

void Insertion_Sort(int arr[SIZE])
{
	int i,j,key;
	for(i=0 ; i<SIZE ; i++)
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

int Binary_Search(int arr[SIZE], int num)
{
	int low=0,high,mid;
	high=SIZE-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(num==arr[mid])
			return mid;
		else if(num>arr[mid])
			low=mid+1;
		else
			high=mid-1;
		mid=(low+high)/2;
	}
	return -1;
}
