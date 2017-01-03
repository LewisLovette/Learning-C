//CodeAbbey Problem 27 -  Bubble Sort.
#include <stdio.h>
#define MAX 23 //as in the maxium for the array.
int array[MAX] = {22, 2, 4, 9, 22, 3, 20, 1, 11, 18, 16, 14, 10, 19, 5, 7, 15, 6, 13, 8, 12, 21, 17}; //idk if I was meant to input or paste??

int bubbleSort(int passes, int swaps){
	int stop = 0;	//this will tell us whether or not the program is sorted.
	for(int i = 0; i < MAX - 1; i++){
		if(array[i] > array[i+1]){	//if the lower position in the array is greater than that position + 1 then it will swap the element places.
			int hold = array[i];
			array[i] = array[i+1];
			array[i+1] = hold;
			swaps++;
			stop++;
		}
	}
	if(stop == 0){
		for(int x = 0; x < MAX; x++){	//printing the full array. (wasn't needed but I wanted to see full array.)
			printf("%d, ", array[x]);
		}
		printf("\nPasses: %d \nSwaps: %d", passes, swaps);
	} else{	//if 'stop' is not equal to 0 then it means that array is unsorted.
		passes++;	
		bubbleSort(passes, swaps);	//so we call on the function to repeat the process until the array is sorted.
	}
}

int main(){

	bubbleSort(0, 0);

	return 0;
}