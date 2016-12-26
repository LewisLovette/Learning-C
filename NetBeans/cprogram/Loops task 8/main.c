/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 11 December 2016, 12:00
 */
#include <stdio.h>

int input(){
    int num;
    
    printf("Input a number to calculate the sum of digits in that number: ");
    scanf("%d", &num);
    
    return num;
}

void loop(int user){
    int num = 1;
    int total = 0;
    
    while(num <= user){
        
        total += num;
        
        num++;
    }
    
    printf("The sum of digits for your number is: %d", total);
    
}


int main() {
    
    loop(input());
    
    return 0;
}

