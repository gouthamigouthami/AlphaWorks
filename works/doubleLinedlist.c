#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head=NULL;
void insertatbeg(int value)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    newnode->prev=NULL;
    head=newnode;


}
void display_List()
{
	struct node* temp; // Creating a temporary pointer to
					// the structure
	temp = head; // temp points to head;
	while (temp != NULL) {
		if (temp->next == NULL) {
			printf(" %d->NULL", temp->data);
		}
		else {
			printf(" %d->", temp->data);
		}
		temp = temp->next; // Traversing the List till end
	}
	printf("\n");
	return;
}
void insertatlast(int value)
{
    struct node* temp=head;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    newnode->next=NULL;
    newnode->prev=temp;
    temp->next=newnode;
    }
int main()
{
    insertatbeg(10);
    insertatbeg(20);
    insertatbeg(30);
    insertatlast(49);
    display_List();

    return 0;
}