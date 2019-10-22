#include <stdio.h>

int main()
{
  int m, n, p, q, i, j, k, sum = 0;
  int a[10][10], b[10][10], c[10][10];
  clrscr();

  printf("Enter rows and columns: \n");
  scanf("%d %d", &m, &n);
  printf("Enter elements: \n");

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);

  printf("Enter rows and columns: \n");
  scanf("%d %d", &p, &q);

  if (n != p)
    printf("Multiplication not possible!\n");
  else
  {
    printf("Enter elements: \n");

    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
	scanf("%d", &b[i][j]);

    for (i = 0; i < m; i++)
      for (j = 0; j < q; j++){
	for (k = 0; k < p; k++)
	  sum = sum + a[i][k]*b[k][j];
	c[i][j] = sum;
	sum = 0;
      }

    printf("Product of the matrices:\n");

    for (i = 0; i < m; i++){
      for (j = 0; j < q; j++)
	printf("%d\t", c[i][j]);
      printf("\n");
    }
  }
  getch();
  return 0;
}