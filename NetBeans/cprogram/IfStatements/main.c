/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 09 December 2016, 15:44
 */

#include <stdio.h>

void sides(int x, int y, int z){   
    if ( x + y > z || x + z > y || y + z > x ) {
        printf("This is a valid triangle");
    }
    else {
        printf("This is NOT a valid triangle");
    }

}


int main() {
    int alpha, beta, theta;
    
    printf("Write the length of 3 sides of a triangle to see it is valid '# # #':");
    scanf("%d %d %d", &alpha, &beta, &theta);
    
    
    sides(alpha, beta, theta);
    
    return 0;
}
