//SRPN - Revers Polish Notation with all arithmetic saturated
#include <stdio.h>
#include <ctype.h> //to see if a character is a number or not.
#include <string.h> //to see how many characters were entered in the charArray.
//create a stack type array that you can input the numbers into, if it's char then it goes into a char array instead.
//and then I will make it place numArray[1] then charArray[1] then numArray[2] then charArray[2] and so on.
//using a stack system will mean that it won't pass the number in the array past how many numbers the user has entered.
//-----------------------------------------------------------------------------------------------------------------------------\\
//Note, operator order takes last two stacked operands using LIFO.
//x y z * /          means it goes, y*z -> a  then  x/a 	if you wrote this normally it'd be:
//x / y * z which would be x/y -> a then a*z	--RPN means that you can write the eqation without the rules of BIDMAS.

int numSP;//--As in 'number Stack Pointer'-- For 'numArray'.
char charSP;//--As in 'character Stack Pointer'-- For 'charArray'.
int numArray[1000];	//setting these two arrays to 1,000 means that they won't saturate the full arrays.
char charArray[1000];

//RPN goes:  Operand -> Operator -> Operand -> Operator and so on. -Picture this with stacks.
void calculate(){

	//at the end we reset charSP and numSP so that they place numbers from the beginning, meaning there will be no existing inputs used in next calculation.
}

//I can try to make it place the characters inputted and place that into array then go 1 by 1 and see if it is a number, if it is then it places that num
//into the array until it hits an operand at which point it will move everthing back and start with the next number entered until all numbers are in numArray and
//																																	   all operands are in charArray.
void input(){//#struggling with input zz
	scanf("%c", &charArray);	//so it puts all the characters in - we'll need to count how many go in so we can move the stack point though.
	//charSP = strlen(charArray);
	if(charArray[charSP] == '='){
		//Test.
		printf("Total = ??");
		//send to calculate function.
	} else if(isdigit(charArray[0])){
		//placing each digit into the position on numArray[numSP] such that if we enter 132 it will place that into the stack pointer position for 'numArray'
		for(int x = 0; x <= charSP; x++){
			numArray[numSP] += charArray[x] - '0';
			numArray[numSP] *= 10;
		}
		numArray[numSP] /= 10;
		printf("Number: %d\n", numArray[numSP]);
		numSP++;
	} else{
		printf("%c\n", charArray[charSP]);
		charSP++;
	}
}

int main(){
	printf("Reverse Polish Notation/Postfix Notation.\n");
	input();

	return 0;
}