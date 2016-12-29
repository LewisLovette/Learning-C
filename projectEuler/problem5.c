#include <stdio.h>
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

void divide(long num){
	int check;
	while(num <= 1000000000){			//Just so that it will keep going until a number is printed.
		for(int x = 20; x >= 1; x--){		//'x' is equal to 20 and everytime this loops, it takes 1 from 'x' until 'x' is equal to 1.
			if(num % x == 0){				//this checks that 'num' % the value of x is equal to 0.
				check++;					//if it is then it adds 1 to check.
			} else{
				break;						
			}
		}
		if(check != 20){				//if 'check' is not equal to 20 thn it means that 'num' % all the numbers from 1-20 dont equal 0  
			check = 0;					//so we reset 'check' to 0 so it can count up to 20 again
			num++;						//and add 1 to 'num' until the correct number is found.
		} else{																				//else num is equal to 20, it means that 'num' % all numbers from 1-20 equal 0
			printf("%ld is the smallest number evenly divisible by all numbers from 1-20. \n", num);	//and that means that it will print this number
			break;																			//and then it breaks so that it doesn't loop again and therefore program ends.
		}
	}
}

int main(){

	divide(1);						//calls function and places 1 to 'num' as 0 % any number from 1-20 will = 0 which is not what we want as '0' is not a POSITIVE number.

	return 0;
}