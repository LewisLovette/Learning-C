/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 11 December 2016, 11:21
 */
#include <stdio.h>

int input(){
    int num;
    
    printf("Input a number to see if it's a Palindrome: ");
    scanf("%d", &num);
    
    return num;
}

void loop(int input){
    int num = 0;
    int hold = input;
    
    // iterative function
    // you are iterating hold until it's 0
    while(hold  != 0){ 
        num *= 10;
        num += hold % 10;
        hold /= 10;  
    }
    
    if (num == input){
        printf("\nYour number is a palindrome: %d", num);
    }
    else {
        printf("\nYour number is not a palindrome: %d", num);
    }
}

int main() {
    
    loop(input());
    
    return 0;
}

