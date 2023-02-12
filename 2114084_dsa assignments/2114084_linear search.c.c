#include <stdio.h>

void printArray(int data[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d ", data[i]);
	printf("\n");	
}

int main()
{
	int n, i, key, flag = 0;
	printf("Enter size of data set\n");
	scanf("%d", &n);
	int data[n];
	printf("Enter data\n");
	for(i=0; i<n; i++)
		scanf("%d", &data[i]);
	printf("What element do you want to search?\n");
	scanf("%d", &key);
	for(i=0; i<n; i++)
	{
		if(key == data[i])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		printf("%d found at %d index", key, i);
	else
		printf("Elements not found\n");
	return 0;
}