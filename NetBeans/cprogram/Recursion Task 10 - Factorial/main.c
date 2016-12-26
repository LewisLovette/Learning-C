/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 19 December 2016, 11:42
 */

#include <stdio.h>

void factorial(long total, int clone){
    if (clone != 0){                 //This means that the recursion will stop at some point.
        total *= clone;              //'total' starts of as user input, that is multiplied by 'total' - 1 (which is what 'clone' is equal to at this moment)-refer to main.
        clone--;                     //We then -1 from clone so that the recursion will stop when clone == 0. This is also how factorial works as the multiplier is -1 each time.
        factorial(total, clone);     //Then we call on the function until clone == 0
    } else{
        printf("The factorial for your number is: %ld", total);     //Once clone ==0 we will come to this which will print the 'total'.
    }  
}

int main() {
    int x, y;
    printf("Enter a number you want to find the factorial of: ");
    scanf("%d", &x); 
    y = x - 1;      //This is the user input - 1
                    //So that we can for example, do (input) 4 * 3 in the function; instead of 4 * 4 as that wouldn't be a factorial multiplication.
    factorial(x, y);        //And then I call on the function, giving 'total' the user input and 'clone' the user input - 1
    
    return 0;
}

