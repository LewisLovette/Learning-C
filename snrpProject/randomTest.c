//Testing my Random function.
#include <stdio.h>
#include <stdlib.h>
int randSP;

 int main(){
 	for(int x = 0; x < 100; x++){
 		srand(x);

 		printf("%d\n", rand());
 	}

 	return 0;
 }