//LINKED LIST

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *nxt;

};
struct node *head=NULL;
//input of linked list
void add(struct node**head,int value)
{
    struct node*tmp=NULL;
    struct node*p=*head;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=value;
    tmp->nxt=NULL;
    if(head==NULL)
    {
      *head=tmp;
      return;

    }
    
    while(p->nxt!=NULL)
    p=p->nxt;
    
    p->nxt=tmp;
    return;

            
}
void delete(struct node **head,int key) 
{ 
    
    struct node* tmp = *head, *prev;
    if (tmp!=NULL && tmp->data==key) 
    { 
        *head=tmp->nxt;  
        free(tmp);               
        return; 
    } 
    while (tmp != NULL && tmp->data != key) 
    { 
        prev = tmp; 
        tmp = tmp->nxt; 
    }
    if (tmp == NULL) 
    return; 
    prev->nxt = tmp->nxt; 
    free(tmp);
}
  
    

void print(struct node *node) 
{ 
    while (node!=NULL) 
    { 
        printf("%d",node->data); 
        node=node->nxt; 
    } 
} 
int main()
{   int value,k=0,i;
    printf("no. of values to be inputed");
    scanf("%d",&i);
    while(k<i)
    {
        printf("enter the value");
    scanf("%d",&value);
    add(&head,value);
    k=k+1;
    }
    print(head);
    printf("enter the numb to be deleted");
    scanf("%d",&value);
    delete(&head,value);
    print(head); 

    return 0;

 }