/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 19 December 2016, 12:20
 */

#include <stdio.h>
//11.	Write a program to check whether a number is a prime, Armstrong or perfect number using functions. 

int input(){
    int x;
    printf("Enter a number to see if it is a Prime, Armstrong or Perfect number: ");
    scanf("%d", &x);
    return x;
}
int armstrong(int x){
    
    if(x % 3 || 5 || 7 || 9 != 0 || x % 2 != 0){ //hm, this wouldn't work for anything below 10 xd.
        printf("%d is a prime number.", x);
    } else {
        printf("%d is NOT a prime number.", x);
    }
    //#broke
}

int main() {
    
    armstrong(input());
    
    return 0;
}

