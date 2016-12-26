#include <stdio.h>
//5.	Write a C program to sort even and odd elements of an array separately
//		(Make 2 more arrays for odd and even)

int array[5] = {5, 6, 3, 45, 78};
int odd[5], even[5];

void evenOdd(int x, int y, int z){
	if (x <= 5){														//this means that the program will not loop infinitely.
		if(array[x] % 2 == 0){											//This checks if the number is even.
			even[y] += array[x];										//if it is even then it will place the current value of array into that position for the 'even' array. (it will start from position 0 in 'even' array)
			printf("array = %d	even = %d\n", array[x], even[y]);		//It will then print the original array number, along with the even array number.
			x++;														//then I add 1 to 'x' so that it will stop the recursion at some point. - aswell as changing the position in 'array'.
			y++;														//I then add 1 to 'y' so that it will move to the next place in the 'even[]' array.
			evenOdd(x, y, z);
		} else{															//if the number is not even then that means that it is odd - 'else, it is odd'.
			odd[z] += array[x];											//repeat above excep even is changed out for odd. and instead of y, z is used for odd as it starts at position 0 for odd numbers.
			printf("array = %d	odd  = %d\n", array[x], odd[z]);
			x++;
			z++;
			evenOdd(x, y, z);											//(Note that this prints the array[] in order of the 'x' number, even[] in order of 'y's number and odd[] in order of 'z's number.)
		}
	} else{																//Once x == 5, it will print this, which tells the user that the program has ended.
		printf("Program Finished.\n");
	}


}

int main(){

	evenOdd(0, 0, 0);													//This places 0s into evenOdd()s variables that are used for the loop.

	return 0;
}