#include <stdio.h>
//6.	Write a program to search an element in an array
int randArray[5] = {22, 34, 52, 63, 57,};

void searchArray(int x){
	printf("Enter a number to see the corresponding value for the postion in the array.\nChoose between 0-5: ");
	scanf("%d", &x);

	printf("Array position %x = %x \nEnter a number to continue: ", x, randArray[x]); //is simple, just prints the position of x.
	scanf("%d", &x);
							//intentionally made it loop so the user can search for a different position in the array if they want to.
	searchArray(x);
}

int main(){

	searchArray(0);

	return 0;
}