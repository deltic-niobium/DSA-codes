#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node;
node* head = NULL;
node* tail = NULL;

void enqueue()
{
	node *new_node = (node*)malloc(sizeof(node));
	new_node->next = NULL;
	printf("enter data\n");
	scanf("%d", &new_node->data);
	if(head == NULL)
	{
		head = new_node;
		tail = head;
	}
	else
	{
		tail->next = new_node;
		tail = tail->next;
	}
}

void dequeue()
{
		if(head == NULL)
		{
			printf("underflow\n");
		}
		else
		{
			node* temp = head;
			head = head->next;
			printf("%d\n", temp->data);
			temp->next = NULL;
			free(temp);
		}
}

void peek()
{
	if(head == NULL)
	{
		printf("underflow\n");
	}
	else
	{
		printf("%d\n", head->data);
	}
}

int main()
{
	int choice;
	while(1)
	{
		printf("1. enqueue\t2. dequeue\t3. peak\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				peek();
				break;
			default:
				exit(45);
				break;
		}
	}
	return 0;
}