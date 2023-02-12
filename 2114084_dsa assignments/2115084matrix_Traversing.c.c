#include <stdio.h>
int main()
{
	int n;
	printf("how many elements will you enter?\n");
	scanf("%d", &n);
	int a[n];
	int i;
	printf("enter %d elements\n", n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++)
	{
		printf("%d element is %d\n", i, a[i]);
	}
	return 0;
}
