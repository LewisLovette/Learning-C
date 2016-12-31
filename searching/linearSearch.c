#include <stdio.h>
#define TEN 10
//1.	Implement Linear search in C

int sorted[TEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //we are assuming that it has been sorted though I could implement one of the sorting algorithms if needed.

int input(){
	int user;
	printf("Input a number from 1-10: ");
	scanf("%d", &user);
	return user;
}
void searchAlg(int user){
	for(int i = 0; i <= TEN; i++){
		//This compares the element in position 'i' to what the user input.
		if(sorted[i] == user){
			printf("\nArray position %d = %d\n", user, sorted[i]);
			break;
		} else if(i == TEN){	//if 'i' is equal to 'TEN' and didn't go through the first 'if' statement then the number doesn't exist in the array.
			printf("\nError. %d is not in this array.\n", user);
		}
	}
}
int main(){

	searchAlg(input());

	return 0;
}