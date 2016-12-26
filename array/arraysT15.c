#include <stdio.h>
//15.	Write a C program to find the sum of main diagonal elements of a matrix.

int randArray[3][3] = {
	{6, 2, 7},
	{1, 5, 8},
	{9, 4, 3}
};

void diagSum(){
	int answer, x = 0, y = 0;					//answer adds the number together, y and x give the co-ordinates in the array.

	while(x <=3){
		answer += randArray[x][y];				//this means that 'answer' is equal to itself plus the position in the array.
		y++;									//we then add 1 to 'x' and 'y' to change the position of the array.
		x++;									//this means that it is going from top left to bottom right - 0,0 - 1,1 - 2,2.
	}
	y = 0;										//then we need to make y = 0 so that it is in the first column.
	x = 2;										//and x = 2 so it is in the last row.			//this means it is in the bottom left column.
	while(x >= 0){
		answer += randArray[x][y];				//we then do the same.
		x--;									//except we take 1 away from 'x'. Instead of adding.
		y++;									//this means we are printing from bottom left to top right - 2,0 - 1,1 - 0,2.
	}
	printf("The sum for the main diagonals in this array is: %d\n", answer);						//We then print the total sum of all the diagonals.
}

int main(){

	diagSum();									//calling function that adds the main diagonals for an array.

	return 0;
}