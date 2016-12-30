#include <stdio.h>
//What is the value of the first triangle number to have over five hundred divisors?

void searching(){
	int x = 1, triangle, z;
	printf("This program takes a while.\n");
	while(triangle <= 500){
		z += x;
		for(int i = 1; i <= z; i++){
			if(z % i == 0){
				triangle++;
			}
		}
		if(triangle > 500){
			printf("%d is the first triangle number to have over 500 divisors\n", z);
			break;
		} else{
			triangle = 0;
			x++;
		}
	}
}

int main(){

	searching();

	return 0;
}