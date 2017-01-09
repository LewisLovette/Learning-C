#include <stdio.h>
//testing multiple character input and analysis for SNRP 
char A[5];

int main(){
	//doing it as %s means it saves each character in a different element in the array!
	scanf("%s", &A);
	//this will print the individual element in the character array.
	for(int x = 0; x < 5; x++){
		printf("%c ", A[x]);
	}

	//Note: printing with %s prints all characters in the array.
	//printf("\n%s", A);
	
	return 0;
}