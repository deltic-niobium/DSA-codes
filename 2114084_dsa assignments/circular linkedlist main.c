// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
struct node* head = NULL;

int size(void)
{
    struct node* temp = head;
    if(temp == NULL)
    return 0;
    else
    {
        int count = 1;
        while(temp->next !=head)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
}

void insert(void)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    printf("ENTER DATA\n");
    scanf("%d", &new_node->data);
    new_node->next =NULL;
    int n;
    if(head == NULL)
    {
        head = new_node;
        new_node->next = head;
        return;
    }
    struct node* temp = head;
    printf("position?\n");
    scanf("%d" , &n);
    if(n ==1)
    {
        struct node* temp = head;
        while(temp->next !=head)
        temp = temp->next;
        temp->next =new_node;
        new_node->next = head;
        head =new_node;
    }

    else if(n<size()+1)
    {
        struct node* p = head;
        struct node* q = head;
        int i = 0;
        for(i=0;i<n-2;i++)
        q = p->next;
        new_node->next = q;
        p->next = new_node;

    }

    else
    {
        struct node* temp = head;
        while(temp->next !=head)
        temp = temp->next;
        temp->next = new_node;
        new_node->next = head;
    }

}

void display(void)
{
    struct node* temp = head;
    while(temp->next!=head)
    {
        printf("%d\n" , temp->data);
        temp = temp->next;
    }
    printf("%d\n" , temp-> data);
    temp = head;
}

void delete1()
{
    struct node *p= head, *q = head, *temp = head;
    int n ,i;
    printf("position?\n");
    scanf("%d" , &n);
    if(n==1 && size()==1)
    {
        while(temp->next != head)
        temp = temp->next;
        temp->next = head->next;
        q = p->next;
        head = q;
        p->next = NULL;
        free(p);
    }
    else if(n==1 && size()==1)
    {
        free(p);
        head = NULL;
    }
    else if(n<size())
    {
        for(i=0; i<n-2; i++)
        q = p->next;
        p->next = q->next;
        q->next = NULL;
        free(q);
    }
    else
    {
        for(i=0; i<size()-2; i++)
        p = p-> next;
        q->next = NULL;
        p->next = NULL;
        free(q);



    }

}

int main()
{
    int choice;
    while(1)
    {
        printf("1.insert\n  2.display\n 3.Delete\n");
        scanf("%d" , &choice);
        switch(choice)
        {
            case1:
            insert();
            break;

            case2:
            display();
            break;

            case3:
            delete1();
            break;

            default:
            exit(1);
            break;

        }
    }
    return 0;
}