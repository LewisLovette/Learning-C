//17. If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
#include <stdio.h>
int hundredsA = 7; //for 'hundred' - all hundred are just a a single followed by 'hundred'.
int tensA[10] = {0, 3, 6, 6, 5, 5, 5, 7, 6, 6}; //teens, ten, twenty, thirty, fourty, fifty, sixty, seventy, eighty, ninety
//											   note, we count teens because if it is a teen then it means that we don't want to add anything to it, onlt the singles.
int singleA[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8}; //as the teens have different number from other 10s,
//																													it means we have to include them into this array.

void solution(){
	int count = 0;
	int x = 1;
	int and = 3; //for when we need to add 'and' to the word count. Such as 'One hundred 'and' one'
	while(x <= 999){
		//found this bad boy to find digits of singles, tens and hundreds. 
		//example 111
		int singles = x % 10;// = 1
		int tens = ((x % 100) - singles) /10;// 11 - 1 (= 10) /10 = 1
		int hundreds = ((x % 1000) - (tens * 10) - singles) / 100; // 111 - (1 * 10) (= 101) - 1 = 100 /100 = 1
		//end.

		if(hundreds > 0){ //if the number is 100+
			count += singleA[hundreds] + hundredsA;
			if(tens > 0 || singles > 0){//adding and if tens or hundres has a number other than '0'
				count += and;
			}
		}
		
		if(tens < 2){//checking for teens.
			count += singleA[tens * 10 + singles]; //-this means that if 'tens' is 1 (which is 10) we then then make it back to a ten(1 * 10) and then add single.

		} else{
			count += tensA[tens] + singleA[singles];
		}
		
		x++;
	}
	//we then add the character in 'one thousand'
	count += 11;//one thousand
	printf("Sum of characters from numbers 1 to 1,000 = %d\n", count);
}

int main(){
	//This toook waaaaaaaaaaaaaaaay longer than it should have zzz
	solution();

	return 0;
}