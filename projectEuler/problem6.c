#include <stdio.h>
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

void squareSum(int sum, int sumSqr, int answer, int count){
	if(count <= 100){												//This means that if the value of 'count' is over 100 it will not run this (so the program doesn loop infinitely)
		sum += count;												//This means that it is adding count to it's current value, which loops.
		sumSqr += count * count;									//This makes 'sumSqr' equal to itself + count squared.
		count++;													//We then increment 'count' by 1 so that it counts up to 100, doing the same calculations with 'count' incremented by 1 each time.
		squareSum(sum, sumSqr, answer, count);						//and then the function calls on itself.
	} else{ 														//once 'count' is greater than 100, it will come to this.
	sum = sum*sum;													//and then we find the swuare of 'sum's current value.
	answer = sum - sumSqr;											//to get the differece between 'sum' and 'sumSqr', I take away 'sumSqr' from 'sum' as 'sumSqr' is the smallest number.
	printf("The answer to Euler problem 6 is: %d\n", answer);		//and then the answer is printed.
	}

}

int main(){

	squareSum(0, 0, 0, 1);											//places these number into squareSum().

	return 0;
}
//	for(int i = 1; i <= 10; i++){
//		sum += i;
//		hold = i*i;
//		sumSqr += hold;
//	}
//
//	sum = sum*sum;						
//	printf("%d %d\n", sum, sumSqr);
//	answer = sum - sumSqr;
//	printf("%d\n", answer);