#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head = NULL;
int size(void)
{
	int count = 1;
	struct node* ptr;
	if(head == NULL)
		return 0;
	else
	{
		ptr = head;
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
			count += 1;
		}
	return count;
	}
}
void insert(void)
{
	int n, pos, i;
	printf("Enter data\n");	
	scanf("%d", &n);
	struct node *new_node, *p, *q;
	p = head;
	q = head;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = n;
	new_node -> next = NULL;
	if(head == NULL)
   	head = new_node;
	else
	{
		printf("At what position do you want to insert?\n");
		scanf("%d", &pos);
		if(pos == 1)
		{
			new_node -> next = head;
			head = new_node;
      }
		else if(pos<size()+1)
		{
			for(i=0; i<pos-1; i++)
				p = p->next;
			for(i=0; i<pos-2; i++)
				q = q->next;
			new_node->next = p;
			q->next=new_node;
		}
		else
		{
			while(p->next!=NULL)
				p = p->next;
			p->next = new_node;
		}
	}
}
void display()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("size 0 :/\n");
		return;
	}	
	else
	{
		ptr = head;
		while(ptr->next!=NULL)
		{
			printf("%d\t", ptr->data);
			ptr = ptr->next; 
		}
		printf("%d\n", ptr->data);
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("1. Insert\t2. Display\t3. Size\t4. Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
					insert();
					break;
			case 4:
					exit(2);
					break;
			case 2:
					display();
					break;
			case 3:
			{
				printf("There are %d nodes\n", size());
				break;
			}
			default:
			{
				printf("wrong input, program exiting\n");
				exit(3);
				break;
			}
		}
	}
	return 0;
}