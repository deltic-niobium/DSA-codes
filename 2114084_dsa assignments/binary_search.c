// C program to implement recursive Binary Search
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main(void)
{
    int i, n, key;
    printf("Enter size of data set\n");
	scanf("%d", &n);
	int data[n];
	printf("Enter data\n");
	for(i=0; i<n; i++)
		scanf("%d", &data[i]);
	printf("What element do you want to search?\n");
	scanf("%d", &key);
	int result = binarySearch(data, 0, n - 1, key);
	(result == -1) ? printf("Element is not present in array") : printf("%d is present at index %d", key, result);
	return 0;
}