/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 07 December 2016, 16:13
 */

#include <stdio.h>
#include <main.c>
/*
 * 
 */
// DECLARING FUNCTIONS
int foo();
int alpha(int x);
void beta(int x);

int main() {
    beta(-5);
    return 0; // 0 means system.success
    // 1 means system.error
}

// FUNCTION DEFINITIONS
// useless function
// --> ? F --> 6
int foo() {
    return 3 * 2;
} 

// Function that multiplies x by 2
int alpha(int x) {
        
    return x * 2;
}

// x = 10
void beta(int x) {
    int product = x * alpha(x) * foo();
    
    printf("%d", product);
}
// END OF FUNCTION DEFINITIONS