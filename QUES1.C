#include<stdio.h>
#include<conio.h>
int main()
{
	int *a,n,i,j,*dup,flag=0,c=0,nounique=0;
	clrscr();
	printf("\nEnter number of elements: ");
	scanf("%d",&n);

	a=(int *)malloc(n*sizeof(int));
	dup=(int *)malloc(n*sizeof(int));

	printf("\nEnter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++){
		dup[i]=a[i];
		flag=0;
		c=0;
		for(j=i+1;j<n;j++){
			if(a[j]==dup[i])
				c++;
			if(c>0){
				printf("\nDuplicate element found at position: %d",j);
				flag=1;
				break;
			}
		}
		if(flag)
			nounique=1;
	}
	if(!nounique)
		printf("\nUnique elements found!");
	getch();
}