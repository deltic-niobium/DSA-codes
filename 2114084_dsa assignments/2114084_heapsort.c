#include <stdio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int N, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left < N && arr[left] > arr[largest])
		largest = left;
	if (right < N && arr[right] > arr[largest])
		largest = right;
	if (largest != i) 
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}

void heapSort(int arr[], int N)
{
	int i;
	for(i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	for(i = N - 1; i >= 0; i--) 
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

void printArray(int arr[], int N)
{
	int i;
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int n, i;
	printf("Enter size of data set\n");
	scanf("%d", &n);
	int data[n];
	printf("Enter data\n");
	for(i=0; i<n; i++)
		scanf("%d", &data[i]);
	printf("Unsorted Array\n");
	printArray(data, n);
	heapSort(data, n);
	printf("Sorted array is\n");
	printArray(data, n);
	return 0;
}
