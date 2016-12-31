#include <stdio.h>
#define TEN 10
//2.	Implement Binary search in C
int randArray[TEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//again, I am assuming that the array is already sorted.

int input(){
	//This sections gets returns the user input.
	int user;
	printf("Binary Search between 1-10: ");
	scanf("%d", &user);
	return user;
}

void binarySeach(int user){
	int low = 0, high = TEN - 1, mid;
	//This section moves the array positions until input = mid. (keeps dividing by 2 in one direction 
																					//depending on if 'input' is higher or lower than the value of 'mid')
	while(low <= high){
		if(low > high){ //if this is true then it means that the inputted number does not exist in this array.
			printf("Search was unsuccessful for %d.", user); 
			break;
		}
		mid = low + (high - low) / 2; //each time it loops, the new 'mid' of the array is set.
		if(randArray[mid] < user){
			low = mid + 1;
		} else if(randArray[mid] > user){
			high = mid - 1;
		} else if(randArray[mid] == user){
			printf("%d was found at location %d", user, mid);
			break;
		}
	}
}

int main(){
	//This gets the input from the user and places it into 'int user' withing binarySearch().
	binarySeach(input());

	return 0;
}