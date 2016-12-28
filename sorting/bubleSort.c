#include <stdio.h>
//1.	Implement bubble sort in C
int unsorted[20] = {22, 54, 32, 75, 34, 84, 17, 43, 14, 32, 32, 44, 62, 12, 26, 25, 74, 35, 64, 34};

void sort(){
	int x = 0;									//integer that if it is equal to 0 means that the array is sorted correctly so don't need to loop again.
	for(int i = 0; i <= 19; i++){
		if(unsorted[i] > unsorted[i + 1]){
			int hold = unsorted[i];				//this holds the array position 'i'.
			unsorted[i] = unsorted[i +1];		//so that unsorted[i] can equal unsorted [i + 1] and
			unsorted[i + 1] = hold; 			//that means unsorted[i + 1] can equal 'hold' which holds the hold, greater value of the original unsorted[i]
			x++;								//and then 1 is added to 'x'.
		}
	}
	if(x == 0){									//once 'x' is equal to 0, it means that the array is finished sorting.
		for(int y = 1; y <= 20; y++){				//so we print the position in the array with 'y'.
			printf("%d 	= %d \n", y, unsorted[y]);	//and so the array position and value is printed.
		}
	} else{
		sort();
	}
}

int main(){

	sort();

	return 0;
}