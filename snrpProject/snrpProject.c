//SRPN - Revers Polish Notation with all arithmetic saturated
#include <stdio.h>
#include <ctype.h> //to see if a character is a number or not.
#include <limits.h> //so that we are able to detect int overflow. with 'INT_MAX' and 'INT_MIN'

void userInput();

int numSP;//--As in 'number Stack Pointer'-- For 'numArray'.
char operatorSP;//--As in 'operator Stack Pointer'-- For 'operatorArray'.
long numArray[1000];	//setting these two arrays to 1,000 means that they won't saturate the full arrays.
char operatorArray[1000];

int additionOverflow(long x, long y){
	//test num passthrough
	//printf("%d %d\n", x, y);
	long sum = x + y;
	//test sum is adding correctly.
	//printf("Sum: %ld\n", sum);

	//need to check in 'x' is negative or positive as that will change weather we output the maximum positive or negative integer.
	if(x > 0 && sum > INT_MAX){
		sum = INT_MAX;
		//printf("Overflow: %ld\n", sum);
		return (int)sum;
	} else if(x < 0 && sum < -2147483647){ //for some reason putting 'INT_MIN' means that it doesn't check if the sum is below it so passes it to else..
		sum = -2147483647;
		//printf("Underflow: %ld\n", sum);
		return (int)sum;
	} else{
		//printf("Nope %ld\n", sum);
		return (int)sum;
	}
	//this is a cheap way of checking, if the number is pass the LONG_MAX then it will spit out errors and is only intended to be tested against integers.
}

//RPN goes:  Operand -> Operator -> Operand -> Operator and so on. -Picture this with stacks.
void calculate(){
	if(operatorSP == numSP){
		printf("Stack underflow.\n");
		userInput();
	} else{
		while(operatorSP > 0){
			if(operatorArray[operatorSP - 1] == '*'){
				numArray[numSP - 2] *= numArray[numSP - 1];
			} else if(operatorArray[operatorSP - 1] == '/'){
				numArray[numSP - 2] /= numArray[numSP - 1];
			} else if(operatorArray[operatorSP - 1] == '+'){
				numArray[numSP - 2] = additionOverflow(numArray[numSP - 2], numArray[numSP - 1]);
			} else if(operatorArray[operatorSP - 1] == '-'){
				numArray[numSP - 2] -= numArray[numSP - 1];
			}
			//We do the sum and then move the stack back 1 so it interacts with the number before it.
			operatorSP--;
			numSP--;
			//test
			//printf("In Calculate = %d\n", numArray[numSP - 1]);
		}
		printf("%d\n", numArray[numSP - 1]);
		userInput();
	}
}

void userInput(){
	//stage 2: make it so a line can create an output. Such as, Input: 2 5 + d/=   to get the output.
	//This means that spaces need to be able to seperate operands from eachother and other operators.
	char inputA[100];
	int inputSP = 0;
	scanf("%s", &inputA);
	//Moving stack pointer to the position of the last character entered into 'inputA[]' + 1.
	//We could make the while loop incapsulate the whole algorithm, so that it check between spaces, places a number/operator then 
	//																												moves eveything back and checks the string again.
	while(inputA[inputSP] != '\0'){
		inputSP++;
	}
	//test
	//printf("%d\n", inputSP);
	if(inputA[0] == '=' || inputA[0] == 'd'){
		//printf("Test for '='\n");
		calculate();
	} else if(isdigit(inputA[0]) || inputA[0] == '-' && isdigit(inputA[1])){
		if(inputA[0] == '-'){
			for(int i = 1; i < inputSP; i++){
			numArray[numSP] += inputA[i] - '0';
			numArray[numSP] *= 10;
			}
			numArray[numSP] /= 10;
			numArray[numSP] = numArray[numSP] - (numArray[numSP] * 2);
		} else {
			for(int i = 0; i < inputSP; i++){
				numArray[numSP] += inputA[i] - '0';
				numArray[numSP] *= 10;
			}
			numArray[numSP] /= 10;
		}
		numSP++;
		userInput();
	} else if(inputA[0] == '*' || inputA[0] == '/' || inputA[0] == '+' || inputA[0] == '-'){
		operatorArray[operatorSP] = inputA[inputSP - 1];
		operatorSP++;
		//test
		//for(int j = 0; j < operatorSP; j++){
		//	printf("operatorSP %d = %c\n", j, operatorArray[j]);
		//}
		userInput();
	}
}

int main(){
	printf("Reverse Polish Notation/Postfix Notation.\n");
	userInput();

	return 0;
}