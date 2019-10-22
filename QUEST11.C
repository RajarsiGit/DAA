#include<stdio.h>
#include<conio.h>
void sort(float a[], int n){
	int i,j;
	float temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int binary_search(float a[], float key, int high, int low){
	sort(a,high+1);
	while(low <= high){
		int mid = (high + low)/2.0;
		if(key == a[mid]){
			return mid;
		}
		else if(key < a[mid]){
			high = mid-1;
		}
		else if(key > a[mid]){
			low = mid+1;
		}
	}
	return -1;
}
int main()
{
	int *a,n,i,flag=0,num;
	clrscr();
	printf("\nEnter number of elements: ");
	scanf("%d",&n);

	a=(int *)malloc(n*sizeof(int));

	printf("\nEnter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("\nEnter number to be searched: ");
	scanf("%d",&num);

	flag=binary_search(a,num,n-1,0);
	if(flag>=0)
		printf("Duplicate Found!");
	else
		printf("Unique Element!");
	getch();
	return 0;
}