#include <stdio.h>
#include <stdlib.h>
int insert_array(int a[], int *n)
{
	int pos, val;
	printf("at which index do you want to enter\n");
	scanf("%d", &pos);
	printf("What value do you want to enter?\n");
	scanf("%d", &val);
	if(pos==*n)
	{
		a[*n] = val;
	}
	else
	{
		int i;
		for(i=*n-1; i>=pos; i--)
		{
			a[i+1] = a[i];
		}
		a[pos] = val;
	}
	*n += 1;
	return 0;
}
int print_array(int a[], int *n)
{
	int i;
	for(i=0; i<*n; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}
int delete_array(int a[], int *n)
{
	int pos;
	printf("At what index do you want to delete?\n");
	scanf("%d", &pos);
	if(pos == *n-1)
	{
		*n -= 1;
	}
	else
	{
		int i = pos;
		for(i = pos; i<*n; i++)
		{
			a[i] = a[i+1];
		}
		*n -= 1;
	}
	return 0;
}
int search(int a[], int *n)
{
	printf("What element do you want to search for?\n");
	int val, i, flag=0;
	scanf("%d", &val);
	for(i=0; i<*n; i++)
	{
		if(a[i] == val)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		printf("%d is found at %d index\n", val, i);
	else
		printf("%d not found\n", val);
	return 0;
}
int main()
{
	int a[50], n, i;
	printf("how many elements do you want to enter?\n");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	int choice=0;
	while(1)
	{
		printf("1. Insert\t2. Print\t3. Delete\t4. Searching\t5. Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				insert_array(a, &n);
				break;
			case 2:
				print_array(a, &n);
				break;
			case 5:
				exit(1);
				break;
			case 3:
				delete_array(a, &n);
				break;
			case 4:
				search(a, &n);
				break;
			default:
				{
					printf("Wrong input, program exitting\n");
					exit(2);
					break;
			    }
		}
	}
	return 0;
}