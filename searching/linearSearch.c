#include <stdio.h>
#define TEN 10
//1.	Implement Linear search in C

int sorted[TEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //we are assuming that it has been sorted though I could implement one of the sorting algorithms if needed.

int input(){
	int x;
	printf("Input a number from 1-10: ");
	scanf("%d\n", &x);
	return x;
}

void searchAlg(int user){
	printf("test\n");
	for(int i = 0; i <= TEN; i++){
		if(sorted[i] == user){
			printf("Array position %d = %d\n", user, sorted[i]);
			break;
		} else if(i == TEN){
			printf("Error. %d is not in this array.\n", user);
			break;
		}
	}
}

int main(){

	searchAlg(input());

	return 0;
}