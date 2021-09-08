# Singly Linked List
<details>
  <summary><b>Implemetation of Singly Linked List</b><i> (Click to expand)</i></summary>
  
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* start=NULL;
void traverse(){
	struct node* temp;
	if(start==NULL){
		printf("List is empty\n");
	}
	else{
		temp=start;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	}
	printf("\n");
}
void insertAtFront(){
	int data;
	struct node* temp=malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d",&data);
	temp->data=data;
	temp->next=start;
	start=temp;
}
void insertAtEnd(){
	int data;
	struct node *temp,*head;
	temp=malloc(sizeof(struct node));
	printf("\n Enter number to be inserted: ");
	scanf("%d",&data);
	temp->next=0;
	temp->data=data;
	head=start;
	while(head->next!=NULL){
		head=head->next;
	}
	head->next=temp;
}
void insertAtPosition(){
	struct node *temp,*newNode;
	int pos,data,i=1;
	newNode=malloc(sizeof(struct node));
	printf("\nEnter position and data: ");
	scanf("%d %d",&pos,&data);
	temp=start;
	newNode->data=data;
	newNode->next=0;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	newNode->next=temp->next;
	temp->next=newNode;
}
void deleteFirst(){
	struct node* temp;
	if(start==NULL)
	printf("\nList is Empty");
	else{
		temp=start;
		start=start->next;
		free(temp);
	}
}
void deleteEnd(){
	struct node* temp,*prev;
	if(start==NULL)
		printf("\nList is Empty\n");
	else{
		temp=start;
		while(temp->next!=0){
			prev=temp;
			temp=temp->next;
		}
		free(temp);
		prev->next=0;
	}
}
void deletePosition(){
	struct node *temp,*position;
	int i=1,pos;
	if(start==NULL){
		printf("\nList is Empty");
	}
	else{
		printf("\nEnter index: ");
		scanf("%d",&pos);
		position=malloc(sizeof(struct node));
		temp=start;
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		position=temp->next;
		temp->next=position->next;
		free(position);
	}
}
void maximum(){
	int a[10];
	int i;
	struct node* temp;
	if(start==NULL){
		printf("\nList is empty\n");
	}
	else{
		temp=start;
		int max=temp->data;
		while(temp!=NULL){
			if(max<temp->data){
				max=temp->data;
			}
			temp=temp->next;
		}
		printf("\nMaximum number id: %d",max);
	}
}
void reverseLL(){
	struct node *t1,*t2,*temp;
	t1=t2=NULL;
	if(start==NULL)
	printf("List is empty\n");
	else{
		while(start!=NULL){
			t2=start->next;
			start->next=t1;
			t1=start;
			start=t2;
		}
		start=t1;
		temp=start;
		printf("Reversed linked list is: ");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
int main(){
	int choice;
	char ch='y';
	do{
	printf("\tMENU:\n");
	printf("----------------------------------\n----------------------------------");
	printf("\n\t1. To see list\n");
	printf("\t2. For insertion at starting\n");
	printf("\t3. For insertion at any position\n");
	printf("\t4. For insertion at end\n");
	printf("\t5. For deletion at starting\n");
	printf("\t6. For deletion at any position\n");
	printf("\t7. For deletion at end\n");
	printf("\t8. To find the maximum element\n");
	printf("\t9. To reverse the List\n");
	printf("\t10. To exit\n");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			traverse();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtPosition();
			break;
		case 4:
			insertAtEnd();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deletePosition();
			break;
		case 7:
			deleteEnd();
			break;
		case 8:
			maximum();
			break;
		case 9:
			reverseLL();
			break;
		case 10:
			exit(1);
			break;
		default:
			printf("\nWrong Choice");	
		}
		printf("\nDo you want to continue?(y/n): ");
		scanf("%s",&ch);
		system("cls");
	}while(ch=='y');
	return 0;
}
```
  </details>
	
# Doubly Linked List
<details>
	<summary><b>Implementation of Doubly Linked List</b> <i>(Click to expand)</i></summary>
	
```c
// C program for the all operations in
// the Doubly Linked List
#include <stdio.h>
#include <stdlib.h>

// Linked List Node
struct node {
	int info;
	struct node *prev, *next;
};
struct node* start = NULL;

// Function to traverse the linked list
void traverse()
{
	// List is empty
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	// Else print the Data
	struct node* temp;
	temp = start;
	while (temp != NULL) {
		printf("%d ", temp->info);
		temp = temp->next;
	}printf("\n");
}

// Function to insert at the front
// of the linked list
void insertAtFront()
{
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->prev = NULL;

	// Pointer of temp will be
	// assigned to start
	temp->next = start;
	start = temp;
}

// Function to insert at the end of
// the linked list
void insertAtEnd()
{
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->info = data;
	temp->next = NULL;
	trav = start;

	// If start is NULL
	if (start == NULL) {

		start = temp;
	}

	// Changes Links
	else {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}

// Function to insert at any specified
// position in the linked list
void insertAtPosition()
{
	int data, pos, i = 1;
	struct node *temp, *newnode;
	newnode = malloc(sizeof(struct node));
	newnode->next = NULL;
	newnode->prev = NULL;

	// Enter the position and data
	printf("\nEnter position : ");
	scanf("%d", &pos);
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	newnode->info = data;
	temp = start;

	// If start==NULL,
	if (start == NULL) {
		start = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
	}

	// If position==1,
	else if (pos == 1) {
		newnode->next = start;
		newnode->next->prev = newnode;
		newnode->prev = NULL;
		start = newnode;
	}

	// Change links
	else {
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		temp->next->prev = newnode;
	}
}

// Function to delete from the front
// of the linked list
void deleteFirst()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->next;
		if (start != NULL)
			start->prev = NULL;
		free(temp);
	}
}

// Function to delete from the end
// of the linked list
void deleteEnd()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	temp = start;
	while (temp->next != NULL)
		temp = temp->next;
	if (start->next == NULL)
		start = NULL;
	else {
		temp->prev->next = NULL;
		free(temp);
	}
}

// Function to delete from any specified
// position from the linked list
void deletePosition()
{
	int pos, i = 1;
	struct node *temp, *position;
	temp = start;

	// If DLL is empty
	if (start == NULL)
		printf("\nList is empty\n");

	// Otherwise
	else {
		// Position to be deleted
		printf("\nEnter position : ");
		scanf("%d", &pos);

		// If the position is the first node
		if (pos == 1) {
			position = start;
			start = start->next;
			if (start != NULL) {
				start->prev = NULL;
			}
			free(position);
			return;
		}

		// Traverse till position
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		// Change Links
		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
		temp->next = position->next;

		// Free memory
		free(position);
	}
}

// Driver Code
int main()
{
	int choice;char ch='y';
	do{
		printf("\n--------------------------------------------\n--------------------------------------------\n");
		printf("\t\tMENU\n");
		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at"
			" starting\n");
		printf("\t3 For insertion at"
			" end\n");
		printf("\t4 For insertion at "
			"any position\n");
		printf("\t5 For deletion of "
			"first element\n");
		printf("\t6 For deletion of "
			"last element\n");
		printf("\t7 For deletion of "
			"element at any position\n");
		printf("\t8 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			traverse();
			break;
		case 2:
			insertAtFront();
			break;
		case 3:
			insertAtEnd();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
			deleteFirst();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePosition();
			break;

		case 8:
			exit(1);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
			continue;
		}
		printf("\nDo you want to continue?(y/n): ");
		scanf("%s",&ch);
		system("cls");
	}while(ch=='y');
	return 0;
}
```
</details>
	
# Circular Linked List
<details>
	<summary><b>Implementation of Circular Linked List</b> <i>(Click to expand)</i></summary>
	Yet to be added
</details>	
