//Euler Problem 8 - Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
#include <stdio.h>
#include <string.h>//so that we can use 'strlen' to determine the size of the string(which is 1,000 places!)
//we store this as a string as we are unable to store this as a number.
char thousand[] ="73167176531330624919225119674426574742355349194934"
    "96983520312774506326239578318016984801869478851843"
    "85861560789112949495459501737958331952853208805511"
    "12540698747158523863050715693290963295227443043557"
    "66896648950445244523161731856403098711121722383113"
    "62229893423380308135336276614282806444486645238749"
    "30358907296290491560440772390713810515859307960866"
    "70172427121883998797908792274921901699720888093776"
    "65727333001053367881220235421809751254540594752243"
    "52584907711670556013604839586446706324415722155397"
    "53697817977846174064955149290862569321978468622482"
    "83972241375657056057490261407972968652414535100474"
    "82166370484403199890008895243450658541227588666881"
    "16427171479924442928230863465674813919123162824586"
    "17866458359124566529476545682848912883142607690042"
    "24219022671055626321111109370544217506941658960408"
    "07198403850962455444362981230987879927244284909188"
    "84580156166097919133875499200524063689912560717606"
    "05886116467109405077541002256983155200055935729725"
    "71636269561882670428252483600823257530420752963450";

void adjThirteen(){
	long hold = 0, save; //save is used to hold the biggest number stored in 'hold'.
	int y = 0, x = 0;	//'x' counts the places for strlen(thousand) and 'y' counts 13 consecutive digits.
	//we then do this so that it loops until the last '13' consecutive digits are multiplied, if we don't use -12 then 'y' would go past the length of 'thousand[]'.
	while(x < strlen(thousand) - 12){
		while(y < 13){ //(as it's 13 consecutive digits...)
			if(x + 12 > strlen(thousand)){	//if x + 12 is bigger than the length of 'thousand[]' then it means we have gone past the array limit.
				break;																					  //so we break as this number is irrelevant to this problem.
			}
			if(hold == 0){	//if hold = 0 then it means that we need to make hold = the first digit it sees, so then next time we can multiply without issue.
				hold = thousand[x + y]-'0';//!!!!!adding '0' means that it converts the position in the char array into a number that ISNT it's ASCII value.!!!!!!!!
				y++;	//we then add 1 to 'y' until it reaches 12.
			} else{	//if 'hold' has a value then we can multiply it by the next place in the array.
				hold *= thousand[x + y]-'0';
				y++;
			}
		}
		//this section shows me the largest values ASWELL as giving the largest value to 'save'
		if(hold > save){
			printf("%ld\n", hold);
			save = hold;
		}
		//we then reset 'hold' and 'y' to 0 to start the process over.
		hold = 0;
		y = 0;
		//as well as adding 1 to 'x' so that it is one space further in the array.
		x++;
	}
	//and then we pring the final answer, which is the largest value for 13 consecutive digits.
	printf("Answer = %ld", save);
}

int main(){
	//calling function to solve problem 8.
	adjThirteen();

	return 0;
}