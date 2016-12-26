#include <stdio.h>
//13.	Write a C program to check whether two matrices are equal or not

int one[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
}, two[3][3] = {
	{5, 6, 7},
	{8, 9, 1},
	{2, 3, 4}
}, oneCopy[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9}
};

int input(){
	int x;
	printf("Press\n'1' to compare array One to array Two \n'2' to compare array Two to Three \n'3' to compare array Three to One: ");
	scanf("%d", x); //this just asks what arrays the user wants to compare.
	return x;
}

void equalCheck(int user, int check){
	if(user = 1){
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 3; y++){
				if(one[x][y] == two[x][y]){				//This checks if the positions in each array are equal - if they are, 1 is added.
					check++;
				}
			}
		} if(check == 9){													//if 'check' is equal to 0, then it means that the arrays are identical.
			printf("Array One and Array Two are equal to eachother!\n");
		} else{
			printf("Array One and Array Two are NOT equal to eachother.\n");
		}
	} else if(user = 2){													//This same method is used for each 'else if' but with different array combinations.
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 3; y++){
				if(two[x][y] == oneCopy[x][y]){
					check++;
				}
			}
		} if(check == 9){
			printf("Array Two and Array Three are equal to eachother!\n");
		} else{
			printf("Array Two and Array Three are NOT equal to eachother.\n");
		}
	} else if(user = 3){													//This same method is used for each 'else if' but with different array combinations.
		for(int x = 0; x < 3; x++){
			for(int y = 0; y < 3; y++){
				if(oneCopy[x][y] == one[x][y]){
					check++;
				}
			}
		} if(check == 9){
			printf("Array Three and Array One are equal to eachother!\n");
		} else{
			printf("Array Three and Array One are NOT equal to eachother.\n");
		}
	} else{
		int x;
		printf("That number is not a valid option.\n 		Enter a number to continue.");			//If the user enters a number over 3 then it will say it's an invalid number and start the function again.
		scanf("%d", &x);
		equalCheck(user, check);
	}
}

int main(){

	equalCheck(input(), 0);

	return 0;
}