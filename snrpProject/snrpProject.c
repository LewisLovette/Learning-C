//SRPN - Revers Polish Notation with all arithmetic saturated
#include <stdio.h>
#include <ctype.h> //to see if a character is a number or not.
#include <limits.h> //so that we are able to detect int overflow. with 'INT_MAX' and 'INT_MIN'.

void userInput();

int numSP;//--As in 'number Stack Pointer'-- For 'numArray'.
char operatorSP;//--As in 'operator Stack Pointer'-- For 'operatorArray'.
long numArray[1000];	//setting these two arrays to 1,000 means that they won't saturate the full arrays.
char operatorArray[1000];

//each '###Overflow' follows the same structure as 'additionOverflow' does with a few operand changes to fit the intended operand function.
int overflowCheck(long x, long y, char operatorPass){ //as the array is 'long', we pass the number as a 'long' this means that if it is larger than an int, we will be
//				  able to store it, set it as int if we type cast it, though this isn't needed, it makes the code more readble as the original SRPN works to INT_MAX.
	long sum;
	if(operatorPass == '+' || operatorPass == '*' || operatorPass == '/'){
		if(operatorPass == '+')
			sum = x + y;
		else if(operatorPass == '*')
			sum = x * y;
		else if(operatorPass == '/')
			sum = x / y;
	
		if(x > 0 && sum > INT_MAX){//need to check in 'x' is negative or positive as that will change weather we output the maximum positive or negative integer.
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
	} else{
		sum = x - y;
		//same as above except x > 0 and x < 0 are flipped for each 'if' so that it does as the operator intends.
		if(x < 0 && sum > INT_MAX){
			sum = INT_MAX;
			return (int)sum;
		} else if(x > 0 && sum < -2147483647){
			sum = -2147483647;
			return (int)sum;
		} else{

			return (int)sum;
		}
	}
}

//RPN goes:  Operand -> Operator -> Operand -> Operator and so on. -Picture this with stacks.
void calculate(){
	if(operatorSP == numSP){
		printf("Stack underflow.\n");
		userInput();
	} else{
		while(operatorSP > 0){
			numArray[numSP - 2] = overflowCheck(numArray[numSP - 2], numArray[numSP - 1], operatorArray[operatorSP - 1]);
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
	//stage 3: make it so a line can create an output. Such as, Input: 2 5 + d/=   to get the output.
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
	//Remove this printf when completed.
	printf("Lewis' Reverse Polish Notation/Postfix Notation Program.\n");
	userInput();

	return 0;
}