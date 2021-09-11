// C program for the above operation
#include <stdio.h>
#include <stdlib.h>

// Structure of a linked list node
struct node {
	int info;
	struct node* next;
};

// Pointer to last node in the list
struct node* last = NULL;

// Function to insert a node in the
// starting of the list
void insertAtFront()
{
	// Stores the number to be inserted
	int data;

	// Initialize a new node
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));

	// Input data
	printf("\nEnter data to be "
		"inserted: \n");
	scanf("%d", &data);

	// If the new node is the only
	// node in the list
	if (last == NULL) {
		temp->info = data;
		temp->next = temp;
		last = temp;
	}

	// Else last node contains the
	// reference of the new node and
	// new node contains the reference
	// of the previous first node
	else {
		temp->info = data;
		temp->next = last->next;

		// last node now has reference
		// of the new node temp
		last->next = temp;
	}
}

// Function to add a new node at the
// end of the list
void addatlast()
{
    // Stores number to be inserted
    int data;
 
    // Initialize a new node
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
    // Input data
    printf("\nEnter data to be "
           "inserted : \n");
    scanf("%d", &data);
 
    // If the new node is the
    // only node in the list
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 
    // Else the new node will be the
    // last node and will contain
    // the reference of head node
    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

// Function to insert after any
// specified element
void insertafter()
{
    // Stores data and element after
    // which new node is to be inserted
    int data, value;
 
    // Initialize a new node
    struct node *temp, *n;
 
    // Input data
    printf("\nEnter number after which"
           " you want to enter number: \n");
    scanf("%d", &value);
    temp = last->next;
 
    do {
 
        // Element after which node is
        // to be inserted is found
        if (temp->info == value) {
            n = (struct node*)malloc(sizeof(struct node));
 
            // Input Data
            printf("\nEnter data to be"
                   " inserted : \n");
            scanf("%d", &data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;
 
            // If temp is the last node
            // so now n will become the
            // last node
            if (temp == last)
                last = n;
            break;
        }
        else
            temp = temp->next;
    } while (temp != last->next);
}

// Function to delete the first
// element of the list
void deletefirst()
{
    struct node* temp;
 
    // If list is empty
    if (last == NULL)
        printf("\nList is empty.\n");
 
    // Else last node now contains
    // reference of the second node
    // in the list because the
    // list is circular
    else {
        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
}

// Function to delete the last node
// in the list
void deletelast()
{
    struct node* temp;
 
    // If list is empty
    if (last == NULL)
        printf("\nList is empty.\n");
 
    temp = last->next;
 
    // Traverse the list till
    // the second last node
    while (temp->next != last)
        temp = temp->next;
 
    // Second last node now contains
    // the reference of the first
    // node in the list
    temp->next = last->next;
    last = temp;
}

// Function to delete an element
// at a specified index in the list
void deleteAtIndex()
{
    // Stores the index at which
    // the element is to be deleted
    int pos, i = 1;
    struct node *temp, *position;
    temp = last->next;
 
    // If list is empty
    if (last == NULL)
        printf("\nList is empty.\n");
 
    // Else
    else {
 
        // Input Data
        printf("\nEnter index : ");
        scanf("%d", &pos);
 
        // Traverse till the node to
        // be deleted is reached
        while (i <= pos - 1) {
            temp = temp->next;
            i++;
        }
 
        // After the loop ends, temp
        // points at a node just before
        // the node to be deleted
 
        // Reassigning links
        position = temp->next;
        temp->next = position->next;
 
        free(position);
    }
}
 
 

// Function to print the list
void traverse()
{
	// If list is empty
	if (last == NULL)
		printf("\nList is empty\n");

	// Else print the list
	else {
		struct node* temp;
		temp = last->next;

		// While first node is not
		// reached again, print,
		// since the list is circular
		do {
			printf("%d ", temp->info);
			temp = temp->next;
		} while (temp != last->next);
		printf("\n");
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
			addatlast();
			break;
		case 4:
			insertafter();
			break;
		case 5:
			deletefirst();
			break;
		case 6:
			deletelast();
			break;
		case 7:
			deleteAtIndex();
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


