#include <stdio.h>
#include <stdbool.h>

int main() {
	int A[3][3], B[3][3];
	int row, col;
	bool isEqual;

	printf("Enter elements in matrix A of size 3x3: \n");
	for (row = 0; row < 3; row++) {
		for (col = 0; col < 3; col++) {
			scanf("%d", &A[row][col]);
		}
	}

	printf("Enter elements in matrix B of size 3x3: \n");
	for (row = 0; row < 3; row++) {
		for (col = 0; col < 3; col++) {
			scanf("%d", &B[row][col]);
		}
	}

	// Assume that the matrices are equal.
	isEqual = true; // true means equal, false means not equal

	for (row = 0; row < 3; row++) {
		for (col = 0; col < 3; col++) {
			// If matrices are not equal
			if (A[row][col] != B[row][col]) {
				isEqual = 0;
				break;
			}
		}
	}

	if (isEqual) {
		printf("\nMatrix A is equal to Matrix B");
	} else {
		printf("\nMatrix A is not equal to Matrix B");
	}

	return 0;
}
