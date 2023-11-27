// Simple C code to delete node at particular position

#include <stdio.h>
#include <stdlib.h>
 

void insert(int);
void display_Middle();
int count_List();
void display_List();

struct node // Structure declaration
{
	int data;
	struct node* next; // Self referral pointer
}* head = NULL,
*tail
= NULL; // Initial value of Head and Tail pointer is NULL



void insert(int value)
{
	struct node* newnode; // Creating a new node
	newnode = (struct node*)malloc(
		sizeof(struct node)); // Allocating dynamic memory

	newnode->data = value; // Assigning value to newnode
	newnode->next = NULL;

	if (head == NULL) // Checking if List is empty
	{
		head = newnode;
		tail = newnode;
	}
	else // If not empty then...
	{
		tail->next = newnode;
		tail = newnode; // Updating the tail node with each
						// insertion
	}
	return;
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
int  count_List()
{
    int count;
	struct node* temp; // Creating a temporary pointer to
					// the structure
	temp = head; // temp points to head;
	while (temp != NULL) {
		count++;
		
		temp = temp->next; // Traversing the List till end
	}
	
	return count;
}
void display_Middle(int size)
{
	struct node* temp=head;
	
	
	for(int i=1;i<=(size/2)+1;i++)
	{
		temp=temp->next;
	}

	
}
// --Driver Code--
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	printf("\n--Created Linked List--\n");
	display_List();
    int size=count_List();
	display_Middle(size);
	
	 
	
	//return 0;
}
// This code is contributed by Sanjeeban Mukhopadhyay.
