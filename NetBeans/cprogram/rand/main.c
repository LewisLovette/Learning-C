/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 09 December 2016, 17:15
 */

#include <stdio.h>
#include <stdlib.h>


void number(int x, int z){ 
    
    if (x > 0){
        printf("this is not a negative number");
    }
    else {
        printf("this is a negative number");
    }
    
}

/*
 * 
 */
int main() {
    int y, z;
    
    printf("input a number \n");
    scanf("%d %d", &y, &z);
    
    number(y, z);
    
    return 0;
}

