//What is the sum of the digits of the number 2 to the 1000?
#include <stdio.h>
//2 to the 1,000 is such a big number - how do I even store that??????.
void calculate(){
	unsigned long long total = 2;
	int sum;
	for(int i = 2; i <= 1000; i++){ //we set 'i' to 2 as we set total = 2 which is basically '2^1' which would mean the number displayed is wrong.
		total *= 2;
		printf("%d 	: %llu\n",i, total);
	}
	printf("Final: %llu\n", total);
	while(total > 0){
		sum += total % 10;
		total /= 10;
	}
	printf("The sum of digits for 2 to the 1000 is: %d\n", sum);
}

int main(){

	calculate();

	return 0;
}