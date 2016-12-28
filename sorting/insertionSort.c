#include <stdio.h>
#define LENGTH 20

//2.	Implement insertion sort in C
int unsorted[LENGTH] = {22, 54, 32, 75, 34, 84, 17, 43, 14, 37, 36, 44, 62, 12, 26, 25, 74, 35, 64, 34};
//Im not sure that this works as intended, but it does work quite nicely.

void sort(){						//this means that we are able to change the position of the array and it only goes to 18
	for(int i = 0; i <= LENGTH - 2; i++){			//(but it compares with +1) - so technically 0-19			
		if(unsorted[i] > unsorted[i + 1]){				//this then checks to see if the number is in order
			for(int z = i; z >= 0; z--){				//we then make z = i so that we can manipulate the position in the array without changing position out of this loop.
				if(unsorted[z] > unsorted[z + 1]){		//if position'z' is larger than position'z'+1 than the number are swapped until - it checks until position'z'																											
					int hold = unsorted[z];																												//is equal to 0.
					unsorted[z] = unsorted[z + 1];
					unsorted[z + 1] = hold;
					//section above allows array positions to swap without issues.
				}
			}
		}
	}
	for(int x = 0; x <= 19; x++){			//and then the array is printed in a row, with 'x' changing the position in the array to show its value.
		printf("%d, ", unsorted[x]);
	}
}

int main(){

	sort();									//calling on function that can sort the array using insertion sort.

	return 0;
}
//for(int x = 0; x <= 19; x++){
//	printf("%d, ", unsorted[x]);	//testing that it works how I wanted it to.
//}