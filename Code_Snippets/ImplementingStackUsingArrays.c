//C Program for array implementation of stack
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>

//A structure to represent a stack
struct Stack{
       int top;
       unsigned capacity;
       int* array;
       };
//function to create a stack of given capacity.It initializes size of stack as 0
struct Stack* createStack(unsigned capacity){
       struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
       stack->capacity=capacity;
       stack->top=-1;
       stack->array=(int*)malloc(stack->capacity * sizeof(int));
       return stack;
       }
//stack is full when top is equal to the last index
int isFull(struct Stack* stack){
    return stack->top==stack->capacity-1;
}
//Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack){
    return stack->top==-1;
}
//Function to add an item to stack. It increases top by 1
void push(struct Stack* stack,int item){
      if(isFull(stack))
         return;
      stack->array[++stack->top]=item;
      printf("%d pushed to stack\n",item);
      }
//Function to remove an item from stack. It decreases top by 1
int pop(struct Stack* stack){
    if(isEmpty(stack))
    return INT_MIN;
    return stack->array[stack->top--];
}
//Function to return the top from stack without removing it
int peek(struct Stack* stack){
    if(isEmpty(stack))
    return INT_MIN;
    return stack->array[stack->top];
}

//Driver program to test above functions
int main()
{
    struct Stack* root=createStack(100);
	int choice,item;
	char ch;
    do{
    	printf("**********MENU**********");
    	printf("\n1. Push\n");
    	printf("2. Pop\n");
    	printf("3. Display the top element\n");
    	printf("4. Quit\n");
    	printf("------------------------------------------------------------\n------------------------------------------------------------\n");
    	printf("Enter your choice: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			printf("\nEnter the item to be pushed: ");
    			scanf("%d",&item);
    			push(root,item);
    			break;
    		case 2:
    			item=pop(root);
    			printf("\n Popped item is: %d\n",item);
    			break;
    		case 3:
    			printf("\nItem at the top is: %d\n",peek(root));
    			break;
    		case 4:
    			exit(1);
    		default:
    			printf("Wrong choice\n");
		}printf("Do you want to continue?(y/n): ");
		scanf("%s",&ch);
		system("cls");
	}while(ch=='y');
	return 0;
}

/* Pros: Easy to implement. Memory is saved as pointers are not involved.
Cons: It is not dynamic. It doesn't grow and shrink depending on needs at runtime.*/
