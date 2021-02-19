#include <stdio.h>
int main()
{
	int a[100][100], b[100][100], cc[100][100];
	int i, j, k, r, c;
	printf("\n Enter the number of rows and columns of the  matrix respectviely: ");
	scanf("%d %d", &r, &c);
	printf("\n Enter the elements of the  matrix\n: ");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			b[j][i] = a[i][j];
	}
	printf("\n The transpose matrix is: \n");
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < r; j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}

	printf("\n Product of matrices is :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r; j++)
		{
			cc[i][j] = 0;
			for (k = 0; k < c; k++)
			{
				cc[i][j] += a[i][k] * b[k][j];
			}
			printf("%d\t", cc[i][j]);
		}
		printf("\n");
	}
	return 0;
}
