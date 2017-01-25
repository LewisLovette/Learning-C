#include <stdio.h>

// prints all elements of myList
void foo(double myList[]) {

	for(int x = 0; x < 4; x++){
		printf("%f\n", myList[x]);
	}

}

int main() {

	double myList[] = {1.9, 2.9, 3.4, 3.5};

	foo(myList);

	return 0;
}

