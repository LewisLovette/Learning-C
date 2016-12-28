#include <stdio.h>
#define LENGTH 20
//3.	Implement selection sort in C
int unsorted[LENGTH] = {22, 54, 32, 75, 34, 84, 17, 43, 14, 37, 36, 49, 62, 12, 26, 25, 74, 35, 64, 39};

void selectionSort(){
	int a = 0, min = unsorted[0];
	//'a' is the sorted list, anything below 'a' should be sorted
	while(a < LENGTH){
		//this will find the lowest number from array position a to  19
		for(int i = a + 1; i <= LENGTH - 1; i++){	//'a' is all the sorted variables, so setting 'i = a + 1' means that this loop doesn't scan the sorted numbers.		
			if(unsorted[i] < min){
				min = i;
			} else if(unsorted[i] < unsorted[min]){
				min = i;
			}
		}
		for(int x = 0; x <= LENGTH - 1; x++){
			printf("%d, ", unsorted[x]);
		}
		printf("\n");
		
		int hold = unsorted[a];
		unsorted[a] = unsorted[min];		
		unsorted[min] = hold;

		a++;	
	}
}

int main(){

	selectionSort();

	return 0;
}