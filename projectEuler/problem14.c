#include <stdio.h>
//Which starting number, under one million, produces the longest chain?

void longestChain(){
	int chain = 0, chainHold, xSave, x = 2;
	long xCopy = x;
	while(x < 1000000){
		if(xCopy == 1){
			xCopy = x;
			chain++;
			if(chain > chainHold){	//This sections checks if the Collats Problem chain is larger than the previous largest - only the largest chain under
				chainHold = chain;													//a million will keep this place as no other chain will be longer than it.
				xSave = xCopy - 1;			//+1 is added as excess, so needs to be taken away when the number is displayed.
				printf("%ld - Chain: %d\n", xCopy - 1, chain); //prints the most recent number with the largest chain.
			}
			x++;
			chain = 0;
		} else if(xCopy % 2 == 0){
			xCopy /= 2;
			chain++;
		} else{
			xCopy = (xCopy * 3) + 1;
			chain++;
		} 
	}
	printf("The number with the longest chain under 1 million is: %d\n", xSave); //we take 1 away from 'xSave' as 1 has been added after the while loop.
}

int main(){

	longestChain();

	return 0;
}