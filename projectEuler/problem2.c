#include <stdio.h>
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

void evenFib(long total, int x, int y, long last){
	if(last <= 4000000){
		x = y;
		y = last;
		last = x + y;									//Fibonacci Sequance, we've all seen it before - get over it.
		if(last % 2 == 0){								//This checks if the number is even.
			total += last;								//If the number is even, it is added to total.
			evenFib(total, x, y, last);					//It then calls itself until the fibanacci sequence exceeds 4 million.
		} else{
			evenFib(total, x, y, last);					//if the number is not even, it will call itself without adding anything.
		}
	} else{
		printf("The total sum for all even numbers in the Fibonacci sequence\nthat doesn't exceed 4 Million is:\n%ld", total);		//Once the sequence exceeds 4 million, it will print total.
	}
}

//done it in like 6 minuets :')
int main(){

	evenFib(0, 0, 1, 0);

	return 0;
}