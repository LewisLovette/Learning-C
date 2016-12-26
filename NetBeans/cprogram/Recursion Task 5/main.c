/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 19 December 2016, 17:43
 */

#include <stdio.h>
//Write a program to find sum of digits of a given number using recursion

int input(){
    int x;
    printf("Input a number to find the sum of its digits: ");
    scanf("%d", &x);
    //taking user input and putting giving it to x.
    return x;
}

void sumFunc(int user, int total){
    if (user != 0){                //Base case so it's not infinite.
        total += (user % 10);      //Our total is equal to itself plus the remainder of user %10 (which is the last digits)
        user /= 10;                //We then divide user by 10 so that the numbers are moved a place to the right. (so that remainder of % 10 is the next number in the integer.)
        sumFunc(user, total);      //We then call on the function again until user is equal to 0.
    } else{
        printf("The sum for all the digits in your number is: %d", total); //when 'user' is equal to 0 we then print the total for our digits.
    }
}

int main() {
    
    sumFunc(input(), 0); //Calls on function 'sumFunc()' and takes the input from function 'input' and places it into 'int user' for 'sumFunc()' and 0 for 'total'.
    
    return 0;
}

