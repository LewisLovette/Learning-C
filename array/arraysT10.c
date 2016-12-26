#include <stdio.h>
//10.	Write a C program to add two 3x3 matrices

int one[3][3] = {			//reminder that it is [row] then [column]
	{5, 8, 9},
	{3, 1, 5},
	{4, 2, 1}
},	two[3][3] = {
	{4, 3, 1},
	{3, 9, 6},
	{7, 5, 8}
}, sum[3][3];


int addArray(){
	for(int i = 0; i != 3; i++){
		for(int x = 0; x != 3; x++){
			sum[i][x] = one[i][x] + two[i][x];								//this makes the position in the array 'sum', equal to the same position in array 'one' + array 'two'.
			printf("sum position %d,%d = %d\n", i, x, sum[i][x]);			//It then prints off the position, along with that value in that position.
		}
	}
	return 0;
}

int main(){

	addArray();				//Calls function that adds the two arrays together.

	return 0;
}