// C program for linked list implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
 
// A structure to represent a stack
struct StackNode {
    int data;
    struct StackNode* next;
};
 
struct StackNode* newNode(int data)
{
    struct StackNode* stackNode =
      (struct StackNode*)
      malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}
 
int isEmpty(struct StackNode* root)
{
    return !root;
}
 
void push(struct StackNode** root, int data)
{
    struct StackNode* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    printf("%d pushed to stack\n", data);
}
 
int pop(struct StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
    struct StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
 
    return popped;
}
 
int peek(struct StackNode* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
void printList(struct StackNode* head){
     struct StackNode* ptr=head;
     while(ptr){
                printf("%d ",ptr->data);
                ptr=ptr->next;
                }
                printf("\n");
                }
int main()
{
    struct StackNode* root=NULL;
	int choice,item;
	char ch;
    do{
    	printf("**********MENU**********");
    	printf("\n1. Push\n");
    	printf("2. Pop\n");
    	printf("3. Display the top element\n");
    	printf("4. Display all stack elements\n");
    	printf("5. Quit\n");
    	printf("------------------------------------------------------------\n------------------------------------------------------------\n");
    	printf("Enter your choice: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			printf("\nEnter the item to be pushed: ");
    			scanf("%d",&item);
    			push(&root,item);
    			break;
    		case 2:
    			item=pop(&root);
    			printf("\n Popped item is: %d\n",item);
    			break;
    		case 3:
    			printf("\nItem at the top is: %d\n",peek(root));
    			break;
    		case 4:
    			printList(root);
    			break;
    		case 5:
    			exit(1);
    		default:
    			printf("Wrong choice\n");
		}printf("Do you want to continue?(y/n): ");
		scanf("%s",&ch);
		system("cls");
	}while(ch=='y');
	return 0;
}

