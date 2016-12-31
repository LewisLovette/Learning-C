#include <stdio.h>
#define LENGTH 20
//3.    Implement selection sort in C
int unsorted[LENGTH] = {22, 54, 32, 75, 34, 84, 17, 43, 14, 37, 36, 49, 62, 12, 26, 25, 74, 35, 64, 39};
 
void selectionSort(){
    int a = 0, min;		//'a' is the sorted list, anything below 'a' should be sorted
    while(a <= LENGTH){
        min = a;//this means that we are able to compare position 'i' with 'a' which is +1 above the sorted section of the array.

        //this will find the lowest number from array position a to  19
        for(int i = a + 1; i < LENGTH; i++){   //'a' is all the sorted variables, so setting 'i = a + 1' means that this loop doesn't scan the sorted numbers.
            if(unsorted[i] < unsorted[min]){    //this means that if unsorted[i] is lower than the current minimum, it will switch 'min' to the current unsorted[i].
                min = i;
            }
        }
        //this prints the full array so that we are able to see what happens to the array in each loop.
        for(int x = 0; x <= LENGTH - 1; x++){
            printf("%d, ", unsorted[x]);
        }
        printf("\n");
        //this section is used to swap the current position with the lowest number in the unsorted part of the array.
        int hold = unsorted[a];
        unsorted[a] = unsorted[minls
        	];
        unsorted[min] = hold;
        //1 is then added to 'a' as this part of the array is not sorted so it moves to clean the next place in the array.
        a++;
    }
}
 
int main(){

    selectionSort();
 
    return 0;
}