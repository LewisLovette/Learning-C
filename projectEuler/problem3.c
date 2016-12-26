#include <stdio.h>
//What is the largest prime factor of the number 600851475143 ?

void primeFactor(long original){
	for(long x = 1000000000; x >= 0; x--){											//x = ~300billion, this will stop the loop once it reaches 0
		if(original % x == 0){														//if original mod 'x' is equal to 0 then it will stop the loop.
			if(x % 2 != 0 && x % 3 != 0 && x % 5 != 0 && x % 7 != 0){				//This will check to see if the number is prime	
				for(int y = 2; y <= x; y++){
					if(x % y == 0){
						printf("The highest prime factor of '600851475143' is: %d\n", y);	//of the number is prime then it will print that number
						{break;}
					}
				}
			}
		} 
	}
}

								//well this isn't very efficient :thinking: oh well
int main(){

	long x = 600851475143;
	primeFactor(x);

	return 0;
}