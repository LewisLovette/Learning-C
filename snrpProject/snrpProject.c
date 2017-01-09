//SRPN - Revers Polish Notation with all arithmetic saturated
#include <stdio.h>
#include <ctype.h> //to see if a character is a number or not.

void userInput();

int numSP;//--As in 'number Stack Pointer'-- For 'numArray'.
char operatorSP;//--As in 'operator Stack Pointer'-- For 'operatorArray'.
int numArray[1000];	//setting these two arrays to 1,000 means that they won't saturate the full arrays.
char operatorArray[1000];

//RPN goes:  Operand -> Operator -> Operand -> Operator and so on. -Picture this with stacks.
void calculate(){
	if(operatorSP != numSP - 1){
		printf("Stack Underflow.\n");
		userInput();
	}else{
		while(operatorSP > 0){
			if(operatorArray[operatorSP - 1] == '*'){
				numArray[numSP - 2] *= numArray[numSP - 1];
			} else if(operatorArray[operatorSP - 1] == '/'){
				numArray[numSP - 2] /= numArray[numSP - 1];
			} else if(operatorArray[operatorSP - 1] == '+'){
				numArray[numSP - 2] += numArray[numSP - 1];
			} else if(operatorArray[operatorSP - 1] == '-'){
				numArray[numSP - 2] -= numArray[numSP - 1];
			}
			//We do the sum and then move the stack back 1 so it interacts with the number before it.
			operatorSP--;
			numSP--;
			//test
			//printf("In Calculate = %d\n", numArray[numSP - 1]);
		}
		printf("%d\n", numArray[0]);
		userInput();
	}
}

void userInput(){
	char inputA[100];
	int inputSP = 0;
	scanf("%s", &inputA);
	//Moving stack pointer to the position of the last character entered into 'inputA[]' + 1.
	while(inputA[inputSP] != '\0'){
		inputSP++;
	}
	//test
	//printf("%d\n", inputSP);
	if(inputA[0] == '='){
		//printf("Test for '='\n");
		calculate();
	} else if(isdigit(inputA[0])){
		for(int i = 0; i < inputSP; i++){
			numArray[numSP] += inputA[i] - '0';
			numArray[numSP] *= 10;
		}
		numArray[numSP] /= 10;
		numSP++;
		//test
		//for(int j = 0; j < numSP; j++){
		//	printf("numSP %d = %d\n", j, numArray[j]);
		//}
		userInput();
	} else if(inputA[0] == '*' || inputA[0] == '/' || inputA[0] == '+' || inputA[0] == '-'){
		operatorArray[operatorSP] = inputA[inputSP - 1];
		operatorSP++;
		//test
		//for(int j = 0; j < operatorSP; j++){
		//	printf("operatorSP %d = %c\n", j, operatorArray[j]);
		//}
		userInput();
	} else{
		userInput();
	}

}

int main(){
	printf("Reverse Polish Notation/Postfix Notation.\n");
	userInput();

	return 0;
}