#include <stdio.h>
//4.	Write a program to find the reverse of an array (keep the reverse in another array)

int normal[7] = {5, 10 , 15 , 20, 25 , 30, 35};
int reverse[7];

int reverseArrays(int x, int y){
	if(x >= 0){
		reverse[y] = normal[x];
		printf("Normal Array position  %d = %d\n", x, normal[x]);
		printf("Reverse Array position %d = %d\n", y, reverse[y]);
		x--;
		y++;
		reverseArrays(x, y);
	} else{
		printf("As you can see, the arrays are reverse of eachother!");
		return 0;
	}

}

int main(){

	reverseArrays(7, 0);

	return 0;
}
