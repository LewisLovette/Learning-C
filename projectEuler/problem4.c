#include <stdio.h>
//Find the largest palindrome made from the product of two 3-digit numbers.
void palCalc(){
	for(int x = 100; x <= 999; x++){
		for(int y = 100; y <= 999; y++){					//these two mean that there is a different comination of numbers being multiplied for two 3-digit numbers.
			int z = x * y;									//this means that 'z' is equal to the current value of x * current value of y. (which will change each time it loops.)
			int zCopy = z;									//a copy so that we are able to compare the reversed number to the original number while manipulating this variable.
			int zReverse = 0;								//Number to hold the reversed number.
			while(zCopy != 0){							    //this section reverses the number.
				zReverse += (zCopy % 10);
				zReverse *= 10;
				zCopy /= 10;
			}
			zReverse /= 10;								//as we multiplied 'zReverse' * 10 one to many times, we need to divide it once
			if(zReverse == z){							//if the number is a palindrome then it will be printed.
				printf("%d\n", z);
			}
		}
	}
}

int main(){

	palCalc();	//calls function that prints the calculations.

	return 0;
}