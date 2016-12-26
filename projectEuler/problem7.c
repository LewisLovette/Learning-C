#include <stdio.h>
//What is the 10 001st prime number?
void primeChecker(){
	int prime = 2, check = 0, y = 0;				//prime starts on 2 as 1 would count as prime when it is not.
	while(y < 10001){								//runs until y = 10,001 as y counts the prime numbers.
		for(long x = 2; x < prime; x++){			//this check weather a number is prime by using mod to make sure it can't be divided evenly by anything.
			if(prime % x == 0){						//if it is divisible by something then it is not prime.
				check++;							//so 1 is added to 'check' and the loop is broken.
				break;
			}
		}
		if(check != 0){								//if check isn't equal to 0 then it means that there wasn't a prime
			prime++;
		} else{										// else 'check' is equal to 0 then it means that the number was prime.
			y++;									//so 1 is added to 'y' which is counting primes.
			prime++;								//and then we add one to prime so that number can be checked in the next loop.
		}
		check = 0;									//we then make 'check' equal to 0 again so that there is no non prime overlap.
	}
	if(y != 10001){							//if y isn't equal to 10,001 then it means that the program failed.
		printf("Fail.\n");
	} else{									//else the program succeded and the 10,001st prime number is found.
		prime -= 1;							//as we added 1 more to prime in the last loop that is not needed,
		printf("%ld \n", prime);			//we then print the last prime number (10,001st in this case).
	}
}


int main(){

	primeChecker();							//calls function that will solve the problem.

	return 0;
}