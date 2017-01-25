//SRPN - Revers Polish Notation with all arithmetic saturated
#include <stdio.h>
#include <stdbool.h> //create the functions instead of using external libraries.
#include <stdlib.h> //to use the 'srand()' and 'rand()' function  --> http://stackoverflow.com/questions/8049556/what-s-the-difference-between-srand1-and-srand0
//Issues:
//	entering numbers without spaces such as: '11+1+1=' makes the program stop.
//		note: This could also been seen as an improvement as doing this would mean that negative numbers wouldn't exist when using the program without spaces.
//		Though it is specified that it MUST be able to do this.

void userInput();

int numSP; //--As in 'number Stack Pointer'-- For 'numArray'.
int numCheck; //so it doesn't print the answer after printing 'r' then doing an addition.
long numArray[1000];	//setting these two arrays to 1,000 means that they won't saturate the full arrays.

char operatorSP;//--As in 'operator Stack Pointer'-- For 'operatorArray'.
char operatorArray[1000];

char inputA[100];

int randomSP = 1;
int randCheck;
//	'r' feature has been implemented though it doesn't show the same numbers as original (which I believe to be the difference between Java and C's 'rand()' function).

bool digitCheck(){
	if(inputA[0] >= 48 && inputA[0] <= 57){	//checking that it is equal to it's ASCII value to see if the first digit is between 0-9.
		return true;
	} else if(inputA[0] == 45 && inputA[1] >= 48 && inputA[1] <= 57){	//this also checks the ASCII value of '-' to see if the number is a negative.
		return true;
	} else {
		return false;
	}
}

int overflowCheck(long x, long y, char operatorPass){ //as the array is 'long', we pass the number as a 'long' this means that if it is larger than an int, we will be
//				  able to store it, set it as int if we type cast it, though this isn't needed, it makes the code more readble as the original SRPN works to (-)2147483647.
	long sum;
	if(operatorPass == '+' || operatorPass == '*' || operatorPass == '/' || operatorPass == '%'){
		if(operatorPass == '+')
			sum = x + y;
		else if(operatorPass == '*')
			sum = x * y;
		else if(operatorPass == '/')
			sum = x / y;
		else if(operatorPass == '%')
			sum = x % y;

		if(x > 0 && sum > 2147483647){	//need to check in 'x' is negative or positive as that will change weather we output the maximum positive or negative integer.
			sum = 2147483647;
			return (int)sum;
		} else if(x < 0 && sum < -2147483647){	//for some reason putting 'INT_MIN' means that it doesn't check if the sum is below it so passes it to else..
			sum = -2147483647;
			return (int)sum;
		} else{
			return (int)sum;
		}
	} else{
		sum = x - y;
		//same as above except x > 0 and x < 0 are flipped for each 'if' so that it does as the operator intends.
		if(x < 0 && sum > 2147483647){
			sum = 2147483647;
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
	if(randomSP >= 1 && randomSP >= randCheck){
		for(int x = 1; x < randomSP; x++){
			srand(x);
			printf("%d\n", rand());
		}
		randCheck = randomSP + 1;
	}

	if(operatorSP >= numSP){
		if(numSP != 0 || operatorSP != 0){
			printf("Stack underflow.\n");
		}
	} else if(numSP >= numCheck){ //set it to 2 so that i means 'numSP' has a number in it that hasn't been manipulated.
		while(operatorSP > 0){
			numArray[numSP - 2] = overflowCheck(numArray[numSP - 2], numArray[numSP - 1], operatorArray[operatorSP - 1]);
			//We do the sum and then move the stack back 1 so it interacts with the number before it.
			operatorSP--;
			numSP--;
			numArray[numSP] = 0; //this is done so that if we then want to place a new number into this position, it wont add the new number to itself as that is what will happen if 
			//we don't set this position equal to 0 each time.
		}
		numCheck = numSP + 1;
		printf("%d\n", numArray[numSP - 1]);
		//Test to see why it was unable to correctly work after finding the answer to the first inputs.
		//printf("numSP = %d\n", numArray[numSP]);
		userInput();
	}

	userInput();
}

void userInput(){
	//If I need data from this stack pointer, I could make it a global variable(so it can be accessed outside of this scope) and then just make it reset inside of userInput.
	int inputSP = 0;
	int inputCopy = 0; //so that we are able to count to the value of 'inputSP' without manipulating the value of 'inpurSP'.
	scanf("%s", &inputA);

	//Moving stack pointer to the position of the last character entered into 'inputA[]' + 1.
	while(inputA[inputSP] != '\0'){
		if(inputA[inputSP] == 'r'){ //Enter the ghetto 'r' that though it copies SRPN, it is not my desired way by using srand() and rand().
			randomSP++;
		}
		//testing for operators without spaces
		//if(inputA[inputSP] == '*' || inputA[inputSP] == '/' || inputA[inputSP] == '+' || inputA[inputSP] == '-' || inputA[inputSP] == '%'){
		//	operatorArray[operatorSP] = inputA[inputSP];
		//	inputA[inputSP] = '\0';
		//	printf("%c \n", inputA[inputCopy]);
		//}
		inputSP++;
	}
	
	//printf("%s \n", inputA);
	if(inputA[0] == '=' || inputA[0] == 'd'){
		//printf("Test for '='\n");
		calculate();
	} else if(digitCheck()){ //This will check to see if inputA[0] is a digit, OR 'inputA[0] == '-' AND inputA[1]' is a digit. For positive and negative numbers.
		if(inputA[0] == '-'){	//If there is a '-' then it means the number is a negative so this sections converts the string into an int and then into a negative number.
			for(int i = 1; i < inputSP; i++){
			numArray[numSP] += inputA[i] - '0';
			numArray[numSP] *= 10;
			}
			numArray[numSP] /= 10;
			numArray[numSP] = numArray[numSP] - (numArray[numSP] * 2);
		} else { //else it will just convert the string into a number.
			for(int i = 0; i < inputSP; i++){
				numArray[numSP] += inputA[i] - '0';
				numArray[numSP] *= 10;
			}
			numArray[numSP] /= 10;
		}
		numSP++;
		userInput();
	} else if(inputA[0] == '*' || inputA[0] == '/' || inputA[0] == '+' || inputA[0] == '-' || inputA[0] == '%'){
		operatorArray[operatorSP] = inputA[inputSP - 1];
		operatorSP++;

		userInput();
	}

	userInput();
}

int main(){
	//Remove this printf when completed.
	printf("Lewis' Reverse Polish Notation/Postfix Notation Program.\n");
	userInput();

	return 0;
}