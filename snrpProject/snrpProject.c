//SRPN - Revers Polish Notation with all arithmetic saturated
#include <stdio.h>
//create a stack type array that you can input the numbers into, if it's char then it goes into a char array instead.
//and then I will make it place numArray[1] then charArray[1] then numArray[2] then charArray[2] and so on.
//using a stack system will mean that it won't pass the number in the array past how many numbers the user has entered.
int stackPointer;
int numArray[1000];	//setting these two arrays to 1,000 means that they won't saturate the full arrays.
char charArray[1000];

//trying to get user input but don't know how to without making it either 'int' or 'char' hmm
void input(){
	char x;
	scanf("%c", x);

}

int main(){



	return 0;
}