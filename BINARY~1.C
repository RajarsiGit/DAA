#include <stdio.h>
#include <conio.h>

int binary_search(float a[], float key, int high, int low);
void sort(float a[], int n);

int main(){
	int i,n,result;
	float *a, key;
	printf("Enter array length: ");
	scanf("%d",&n);
	a = (float *)malloc(n*sizeof(float));
	printf("\nEnter array elements: \n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	printf("\nEnter key element: ");
	scanf("%f",&key);
	sort(a, n);
	result = binary_search(a,key,n-1,0);
	if(result>-1){
		printf("\nElement found at %d!",result);
	}
	else {
		printf("\nNot found!");
	}
	getch();
	return 0;
}

int binary_search(float a[], float key, int high, int low){
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