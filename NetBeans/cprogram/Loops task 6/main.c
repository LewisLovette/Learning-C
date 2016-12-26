/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 10 December 2016, 17:56
 */

#include <stdio.h>

int input(){
    int num;
    
    printf("Input a number to the first and last digit in it: ");
    scanf("%d", &num);
    
    return num;
}

void loopCalculate(int user){
    int last;
    int first;
    
    last = user % 10;

    while(user >= 10){
        user /= 10;
        first = user;
    }

    
    printf("First: %d \nLast: %d", first, last);
}

int main() {

    loopCalculate(input());
    
    
    return 0;
}

