#include <stdio.h>
#include <stdbool.h>
#include <cmath.h>


// Boolean function that compares 2 numbers
// True if x = y, false otherwise
bool isEqual(int x, int y) {
	if (x == y) {
		return true;
	} 
	return false;
}

int main() {
	
	if (!isEqual(1, 2)) {
		// if this is false, run this part of the code
		printf("1 and 2 are not equal.");
	}


	return 0;
}