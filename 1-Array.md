# Linear or One Dimensional Array
<details>
	<summary><b>Implementation of 1-D Array</b> <i>(Click to expand)</i></summary>
	
# Menu driven program for 1-D array operations in C
<p>Here we are gonna make a menu-driven program that will perform some important array operations. We will make a different function for each of the array operations.<br>
Here is a menu-driven program for the following array operations in C<br>
1. Traversal of the linear array.<br>
2. Insertion into a linear array<br>
3. Deletion of the element from a linear array.<br>
4. Linear Search in C</p>
<details>
	<summary>Code snippet! <i>(Click to expand)</i></summary>
	
```c
#include<stdio.h>
#define MAXSIZE 40
int size;
//Traverse, insert, search and delete operations of the array are implemented by assuming that the array is unsorted array
void traverse(int arr[],int n);
void insert(int arr[],int n,int pos,int item);
int search(int arr[],int n,int item);//linear search is used in this program
void delete(int arr[],int n,int pos,int item);
void main(){
	int arr[MAXSIZE],pos,item,choice,del_item;
	char ch='y';
	printf("Enter the size of the array:");
	scanf("%d",&size);
	printf("Enter elements into the array:\n");
	//Initializing array by taking input from the user
	for(int i=0;i<size;i++){
		printf("Element-%d:",i);
		scanf("%d",&arr[i]);
	}
	system("cls");
	do{
	printf("\n \t\t MENU:");
	printf("\n 1. Traverse\n 2. Insert\n 3. Delete\n 4. Search");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			traverse(arr,size);
			break;
		case 2:
			printf("Enter position:");
			scanf("%d",&pos);
			printf("Enter element to insert:");
			scanf("%d",&item);
			insert(arr,size++,pos,item);
			break;
		case 3:
			printf("Enter element to be deleted:");
			scanf("%d",&del_item);
			pos=search(arr,size,del_item);
			if(pos==-1){
				printf("\nElement not found");
				break;
			}
			delete(arr,size--,pos,del_item);
			break;
		case 4:
			printf("Enter the element to be searched:");
			scanf("%d",&item);
			pos=search(arr,size,item);
			(pos==-1)?printf("Element is not present in array"):printf("Element is present at index %d",pos);
			break;
		default:
			printf("\nEntered wrong choice!!");
	}
		printf("\nDo you want to continue?(y/n): ");
		scanf("%s",&ch);
		system("cls");
		}while(ch=='y');
}
//An utility function to traverse the array
void traverse(int arr[],int size){
	printf("Array: ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

//An utility function to insert an element at a position
void insert(int arr[],int n,int pos,int item){
	n++;
    // shift elements forward
    for (int i=n-1; i >= pos; i--)
        arr[i] = arr[i-1];
 
    // insert x at pos
    arr[pos] = item;
}
//Function to search for an element
int search(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x)
			return i;
	}
	return -1;
}
//Function to delete an element from the array
void delete(int arr[],int n,int pos,int item){
	for(int i=pos;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
```
</details>
</details>
	
# Multidimensional Arrays
	
* Two dimensional array
	
<details>
		<summary><b>Implementation of 2-D Array</b> <i>(Click to expand)</i></summary>
	
```c
#include<stdio.h>
int main(){
		int i,j,arr[i][j];
		printf("Enter the number of columns: ");
		scanf("%d",&i);
		printf("Enter the number of rows: ");
		scanf("%d",&j);
		printf("Enter elements into the array:\n");
		for(int a=0;a<i;a++){
				      for(int b=0;b<j;b++){
				      	printf("Element[%d][%d]: ",a,b);
						scanf("%d",&arr[a][b]);
						}
			}
		//print elements of the 2-d array
		printf("\n2-D Array:\n");
		for(int k=0;k<i;k++){
			for(int l=0;l<j;l++){
				printf("Element[%d][%d]: %d\n",k,l,arr[k][l]);
			}
		}
	
	}
```
	
</details>
			
* Three dimensional array
			
<details>
		<summary><b>Implementation of 3-D Array</b> <i>(Click to expand)</i></summary>
	
```c
#include<stdio.h>
int i,j,k;                       //variables for nested for loop
int main()
{
	int arr[2][3][3];            //3D array declaration
	printf("enter the values in the array: \n\n");
	for(i=1;i<=2;i++)            //represents block
	{
		for(j=1;j<=3;j++)        //represents rows
		{
			for(k=1;k<=3;k++)    //represents columns
			{
				printf("arr[%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("\nprinting the values in array: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	//Update the array
	int num;                         //will hold the value to be replaced
	printf("\nEnter the block row and column number: \n");
	scanf("%d %d %d ",&i,&j,&k);         //position where we want to update the element
	printf("Enter the new number you want to update with: ");
	scanf("%d",&num);                 //element to be replaced
	arr[i][j][k]=num;                 //element assigned to array position
	printf("\narray after updating: \n");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

```
	
</details>
	
