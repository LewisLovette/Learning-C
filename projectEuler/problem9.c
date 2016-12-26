#include <stdio.h>
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

void pythagTriplet(){
	int num = 100000000, numCopy, a, b, c, answer;			// num is == 100million so that when we find the modulus for a, b and c - it will be a 3 digit number for each -(which it needs to be to = 1000 added).
	
	while(num <= 999999999){								//we then set the limit of 'num' to 999million as anything over this will mean the numbers a+b+c is definitely higher than we want it to add up to.
		numCopy = num;										//we then make a copy of 'num' so that we are able to manipulate 'num' without loosing it's current value.

		a = numCopy % 1000;									//we then find numCopy % 1,000 as this will give us a 3 digit number (as that is what is left when you % 1000)
		numCopy /= 1000;									//we then divide by 1,000 so that the same number isn't used.
		b = numCopy % 1000;									//and then repeat this until a, b and c all have a 3 digit number as a value.
		numCopy /= 1000;
		c = numCopy % 1000;			

		if(a*a + b*b == c*c && a + b + c == 1000){											//this means that, if 'a'squared + 'b'squared is equal to 'c'squared AND a + b + c is equal to 1,000 we will have our answer.
			answer = a * b * c;																//so then we find the product of 'abc' (which the answer wants.) - so 'answer' = a * b * c.
			printf("a = %d  b = %d(squared)  c = %d(squared) \nProduct = %d\n", a, b, c, answer);		//we then print the value of a, b and c - as well as the product (which is answer.)
			break;																			//and then the loop is broken as the program has ended so doesn't neet to loop anymore.
		} else{												//if a, b and c don't meet the criteria in the 'if' statement then it comes here.
			num++;											//where we add 1 to num so that a different number combination can be used.
		}													//and then it loops around again to test the new number.
	}
}


int main(){

	pythagTriplet();										//calls on the function that will work out the answer to EulerProject problem 9.

	return 0;
}