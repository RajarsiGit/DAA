#include <stdio.h>
#include <conio.h>
/*  Below program is written in C++ language  */

void swap(int *a, int *b)
{
	int temp;

	temp=*a;
	*a=*b;
	*b=temp;

}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 
    // if left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // if right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // if largest is not root
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
 
        // recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
	int i;
    // build heap (rearrange array)
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // one by one extract an element from heap
    for (i=n-1; i>=0; i--)
    {
        // move current root to end
        swap(&arr[0], &arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
 
/* function to print array of size n */
void printArray(int arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
        printf("%d\t",arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = {121, 10, 130, 57, 36, 17};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    heapSort(arr, n);
 
    printf("Sorted array is \n"); 
    printArray(arr, n);
    getch();
    return 0;
}
