/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 10 December 2016, 11:23
 */

#include <stdio.h>

int user(){
    int input;
    
    printf("Input a number you want even numbers to be added up to: ");
    scanf("%d", &input);
    
    return input;
}

void loop(int userInput){
    int num = 2;
    int total = 0; 
    
    while(num <= userInput){
        
        total += num;
        num++;
        num++;
        
    }
    printf("The sum of your numbers is: %d", total);
    
}

/**
 * Checks if a given integer is even or not
 * @param x given integer
 * @return 1 if x is an integer, 0 otherwise
 */


void printSum(int n) {
    
    int i = 2;
    int total = 0;
    
    while (i <= n) {
        total += i;
        
        i += 2;
        // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    }
    
    printf("Total is: %d\n", total);
    
}

int main() {
    
    loop(user());
    
    
    return 0;
}

