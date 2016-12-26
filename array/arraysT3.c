#include <stdio.h>
//3.	Write a program to find sum of all array elements using recursion.

int array[4] = {4, 8, 3, 6};		//random number placed into 4 positions in this array

void arraysSum(int x, int total){
	if(x <= 3){
		total += array[x];			//this means that total is equal to itself + the value in 'x' position in the array. 
		x++;						//we then add 1 to 'x' so that it changes the position in the array and stops the recursion once x = 3.
		arraysSum(x, total);		//if x != 3 then it will call the function again to start the process over.
	} else{
		printf("The sum for all elements in this array is: %d", total);		//once x == 3 it will come to this that prints the value of 'total'.
	}
}

int main(){

	arraysSum(0, 0);				//calls the function arraySum and places 0 to 'x' and 0 to 'total' through arguments.

	return 0;
}