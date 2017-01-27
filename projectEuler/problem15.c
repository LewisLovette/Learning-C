//How many such routes are there through a 20×20 grid?
#include <stdio.h>
#define ROUTES 2
long randArray[ROUTES][ROUTES]; //so we have a 20 by 20 grid in the form of an array.
//make is a 2x2 array as we know the answer is 6 and then change it to 20x20 - this will be easier to work with.
void solve(){
	for(int x = 0; x <= ROUTES; x++){
		randArray[0][x] = 1;	//this means that positions going down and right will have a value.
		randArray[x][0] = 1;	//but values left will not.
	}
}

int main(){

	solve();

	return 0;
}