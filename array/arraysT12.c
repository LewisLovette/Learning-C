#include <stdio.h>
//12.	Write a C program to perform Scalar matrix multiplication

int randArray[3][3] = {
	{5, 2, 5},
	{2, 7, 9},
	{7, 2, 3}
};

int user(){
	int x;

	printf("Enter a number to scalar multiply the 3x3 matrix.\n");
	scanf("%d", &x);
																		//taking user input and returning it so it can be used in a different function.
	return x;
}

void scalar(int user){
	for(int x = 0; x < 3; x++){					//these for loops change the position in the array so that it can change each of the individual values and print them in a loop until it has 
		for(int y = 0; y < 3; y++){																																				//reached all 9 values of the array.
			randArray[x][y] *= user;																//this multiplies the position in the matrix by the scalar that the user entered.
			printf("randArray position %d,%d * %d = %d\n", x, y, user, randArray[x][y]);			//this prints out the position in the matrix, followed by what it is being scaled by and the value of the position.
		}
	}
}

int main(){

	scalar(user());					//this calls a function, and uses another function as an argument to pass what the user enters into 'int user' in the function 'scalar(int user)'.

	return 0;
}