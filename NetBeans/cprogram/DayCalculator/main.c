/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 08 December 2016, 18:43
 */

#include <stdio.h>
int x;
/**
 * Takes the user's input and stores it in
 * a global variable 'x'
 */
void year() {
    scanf("%d", &x); // This is storing input to x
}

/**
 * This function multiplies global variable 'x' by 365
 * @return global variable x
 */
int date() {
    x *= 365;
    
    return x;
}

int main() {
    
    // Just a print
    printf("Enter the year you wish to convert: \n");
    // Runs year() so machine can ask for input
    year();
    // Assigns the return value of date() to variable output
    int output = date();
    
    // Prints output
    printf("Days in years is: %d", output);
    
    
    return 0;
}

