#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    
};
struct node* head=NULL;
void insertatlast(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=head;
    newnode->data=value;
    newnode->next=head;
    if(head!=NULL){
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

    }
    else{

    newnode->next=newnode;
    head=newnode;
    }
   


}

void display_List() 
{ 
    struct node* temp = head; 
    while(temp -> next != head)  
        {  
          
            printf("%d ->", temp -> data);  
            temp = temp -> next;  
        }  
        printf("%d ->NULL", temp -> data);  
} 
  
    
void insertatbeg(int value)
{
    struct node* temp=head;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=newnode;
        head=newnode;
    }
    else
    {
      newnode->next=head;  

    while(temp->next!=head)
    {
        temp=temp->next;
    }

    head=newnode;
   
    temp->next=newnode;
    }
}
int main()
{
    insertatbeg(10);
    insertatbeg(20);
    insertatbeg(30);
    insertatlast(49);
    insertatlast(49);
    insertatlast(50);
    insertatlast(60);
    

    display_List();

    return 0;
}