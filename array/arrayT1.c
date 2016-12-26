#include <stdio.h>
//1.	Write a C program to read and print elements of an array using recursion

int array[4] = {10, 3, 4, 5};

void arrayPrint(int x){
	if (x <= 3){												//this means that it only prints enough for all the digits in the array.
		printf("Array position %d: %d \n", x, array[x]);		//this is print the position of the array and the value in that position.
		x++;													//this means the recursion isn't infinite
		arrayPrint(x);
	} else{
		printf("This is all the numbers in this array.");		//once x = 3 (4 loops) it will print this out and the program will end.
	}
}

int main(){
	
	arrayPrint(0);

	return 0;
}