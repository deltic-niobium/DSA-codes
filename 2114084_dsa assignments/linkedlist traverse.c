#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void  printlist(head)
{
    struct node *ptr;
    if(head == NULL)
    {
         printf("there is an error in acessing the linked list");
         return;
    }
    ptr = head;
    while(ptr !=NULL)
    {
        printf("data=%d\n",ptr->data);
        ptr = ptr->next;
        
    }
    return;
}
int main()
{ 
    int data, position;
    
    struct node *head;
    head= (struct node*)malloc(sizeof(struct node));
    
    struct node *first;
    first= (struct node*)malloc(sizeof(struct node));
    
    struct node *second;
    second= (struct node*)malloc(sizeof(struct node)); 
    
    struct node *third;
    third= (struct node*)malloc(sizeof(struct node));
    
    struct node *fourth;
    fourth= (struct node*)malloc(sizeof(struct node));
    
    struct node *fifth;
    fifth= (struct node*)malloc(sizeof(struct node));
    
    struct node *sixth;
    sixth= (struct node*)malloc(sizeof(struct node));
    
    head->data = 100;
    head->next = first;
    
    first->data = 200;
    first->next = second;
    
    second->data = 300;
    second->next = third;
    
    third->data = 400;
    third->next = fourth;
    
    fourth->data = 500;
    fourth->next = fifth;
    
    fifth->data = 600;
    fifth->next = sixth;
    
    sixth->data = 700;
    sixth->next = NULL;
    
    printf("ENTER THE POSTION YOU WANT TO ENTER THE DATA AND ALSO MENTION THE POSITION:");
    scanf(" %d %d",&data,&position);
    
    printlist(head);
    return 0;
}
