#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	// initalize file type
	FILE *numbers = fopen("./XD.txt", "r");

	fseek(numbers, 0, SEEK_END);
	long fsize = ftell(numbers);
	fseek(numbers, 0, SEEK_SET);

	// allocation memory to string
	char *string = malloc(fsize + 1);

	// read string and asign it to the address 
	fread(string, fsize, 1, numbers);
	fclose(numbers);

	string[fsize] = 0;

	// remove elements in the array that are newline chars and 
	// move the from a char to an int. 
	// stored in ASCII characters for their numbers so have to subtract by 48 to set to 0
	int num[strlen(string)];
	int index = 0;
	for (int i = 0; i < strlen(string); i++) {
		if (string[i] - 48 != -38) {
			num[index] = string[i] - 48;
			index++;
		}
	}

	// free initial string from memeory
	free(string);

	long product;
	long max = 0;
	for (int i = 0; i < 1000; i++) {
		product = 1;
		for (int j = 0; j < 13; j++) {
			product *= num[i + j];
		}

		if (product > max) {
			max = product;
		}
	}

	printf("\n%ld\n", max);

}