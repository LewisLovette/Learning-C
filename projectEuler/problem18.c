//Problem 18: Find the maximum total from top to bottom of the triangle below:
#include <stdio.h>
//Jesus this is inefficient.
//Creating an array for each layer of the pyramid.
int level1[] = {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23};
int level2[] = {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31};
int level3[] = {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48};
int level4[] = {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57};
int level5[] = {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14};
int level6[] = {41, 48, 72, 33, 47, 32, 37, 16, 94, 29};
int level7[] = {41, 41, 26, 56, 83, 40, 80, 70, 33};
int level8[] = {99, 65, 4, 28, 6, 16, 70, 92};
int level9[] = {88, 2, 77, 73, 7, 63, 67};
int level10[] = {19, 1, 23, 75, 03, 34};
int level11[] = {20, 4, 82, 47, 65};
int level12[] = {18, 35, 87, 10};
int level13[] = {17, 47, 82};
int level14[] = {95, 64};
int level15[] = {75};

void solve(){
	int total = 0, largest = 0;
	printf("\nLargest: %d", largest);
	for(int a = 0; a < 15 ; a++){
		printf("\nInstance:%d		Largest: %d", a, largest);
		for(int b = 0; b < 14 ; b++){
			for(int c = 0; c < 13 ; c++){
				for(int d = 0; d < 12 ; d++){
					for(int e = 0; e < 11 ; e++){
						for(int f = 0; f < 10 ; f++){
							for(int g = 0; g < 9 ; g++){
								for(int h = 0; h < 8 ; h++){
									for(int i = 0; i < 7 ; i++){
										for(int j = 0; j < 6 ; j++){
											for(int k = 0; k < 5 ; k++){
												for(int l = 0; l < 4 ; l++){
													for(int m = 0; m < 3 ; m++){
														for(int n = 0; n < 2 ; n++){
															for(int o = 0; o < 1 ; o++){
																total = level1[a] + level1[b] + level1[c] + level1[d] + level1[e] + level1[f] + level1[g] + level1[h]
																+ level1[i] + level1[j] + level1[k] + level1[l] + level1[m] + level1[n] + level1[o];
																if(total > largest){
																	largest = total;
																}
															}	
														}	
													}	
												}	
											}
										}
									}
								}
							}
						}	
					}
				}
			}
		}
	}

	printf("\n%d", largest);
}

int main(int argc, char *argv[]){
	printf("Begin\n");
	solve();

	return 0;
}