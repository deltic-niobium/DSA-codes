#include <stdio.h>
void sort(int a[], int size)
{
	int i, j, temp;
	for(j=-1; j<size-1; j++)
	{
		for(i=0; i<size; i++)
		{
			if(a[j+1] < a[i])
			{
				temp = a[i];
				a[i] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void print_array(int a[], int size)
{
	int i;
	for(i=0; i<size; i++)
		printf("%d\t", a[i]);
	printf("\n");
}
int main()
{
	int n, m;
	printf("how many elements in array1 and array2\n");
	scanf("%d%d", &n, &m);
	int i,j, a[n], b[m], c[n+m];
	printf("Enter %d elements for array1\n", n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	printf("Enter %d elements for array2\n", m);
	for(i=0; i<m; i++)
		scanf("%d", &b[i]);
	for(i=0; i<n; i++)
		c[i] = a[i];
	for(j=0; j<m; j++)
		c[i+j] = b[j];
	sort(a, n);
	sort(b, m);
	sort(c, m+n);
	printf("sorted array1 is: \n");
	print_array(a, n);
	printf("sorted array2 is: \n");
	print_array(b, m);
	printf("sorted merged array is: \n");
	print_array(c, m+n);
	return 0;
}