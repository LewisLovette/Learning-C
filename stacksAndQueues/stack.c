//1.	Implement your version of a stack using arrays with operations push(), pop(), peek(), isFull() and isEmpty() in C.
#include <stdio.h>
#include <stdbool.h>
#define MAX 1000 //as in max limit for the array.
void choose();	//so that 'chooes()' can be used above the actual function.
int randArray[MAX]; //we assign the array to have 'MAX' spaces.
int sP = 0;	//so that the 'stackPointer' can be used in any function with ease.

bool isFull(){	//checks if the stack pointer is at the maximum limit for the array.
	if(sP == MAX){
		return false;
	} else{
		return true;
	}
}
bool isEmpty(){	//checks if the stack pointers is at the lowest limitof the array.
	if(sP <= 0){
		return false;
	} else{
		return true;
	}
}
//if 'isFull' is false than the stack pointer is moved 1 place and the user input is entered into the array at 'sP' place.
void push(){
	int x;
	printf("Enter a number to Push it.\n");
	scanf("%d", &x);
	//if this function is true then it means that the stack is full.
	if(isFull()){
		sP += 1;
		randArray[sP] = x;
		choose();		
	} else{
		printf("The stack is full.\n");
		choose();
	}
}
//this moves the stack pointed down 1 if 'isEmpty' is false.
void pop(){
	//if this function returns true then it means that the stack is empty.
	if(isEmpty()){
		printf("Array Position %d popped.\n", sP);
		sP -= 1;
		choose();
	} else{
		printf("Stack is empty\n");
		choose();		
	}
}
//view top of stack
void peek(){
	printf("%d is the stack peek.\n", randArray[sP]);
	choose();
}
//This section will print all the 'stacks'
void showAll(){
	for(int i = 1; i <= sP; i++){
		printf("stack position %d 	= %d\n", i, randArray[i]);
	}
	choose();
}
//This section just lets the user choose what function they want to use.
void choose(){
	int x;
	printf("Input 1 to push, 2 to pop, 3 to peek, 4 to show all stacks or 5+ above to exit.\n");
	scanf("%d", &x);
	if(x == 1){
		push();
	} else if(x == 2){
		pop();
	} else if(x == 3){
		peek();
	} else if(x == 4){
		showAll();
	}
}

int main(){
	printf("Currently 0 stacks.\n");//to inform the user that there is currently no stacks, meaning that they will have to push to do anything.

	choose();	//this function allows the user to choose what they want to do to the stac.

	return 0;
}