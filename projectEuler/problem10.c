#include <stdio.h>
//Find the sum of all the primes below two million.

void primeCount(){
	int count = 3, notPrime;						//count is set to 3 so that 2 is counted as prime - though 1 will need to be taken away to make up for this later.
	long total = 2;
	printf("This program will take a while.\n");
	while(count < 2000000){							//this will break once count is equal to 2 million.
		for(int x = 2; x < (count/2); x++){		//this for loops checks if the current value of 'count' is divisible by any number in between 2 and half of 'count'
			if(count % x == 0){
				notPrime++;							//if it is then it will break and add 1 to notPrime, otherwise it will continue to the end - adding nothing to notPrime.
				break;
			}
		}
		if(notPrime == 0){							//if prime is equal to 0.
			total += count;							//then total is equal to itself + the current value of count which is prime if notPrime is equal to 0.
		}
		notPrime = 0;								//then notPrime is reset back to 0 so there is no overlapping for non-prime to prime numbers.
		count++;									//we then add 1 to 'count' so that the loop is able to test the new number.
	}
	total -= 1;										//1 is taken away from total as its starting value is offset by 1 so that '2' can be counted as prime but not 1.
	printf("The total sum of all prime below two million is: %ld\n", total);	//and then the total is printed.
}

int main(){

	primeCount();									//calling on the function that will solve Euler problem 10.

	return 0;
}