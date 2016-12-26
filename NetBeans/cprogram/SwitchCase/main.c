/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 09 December 2016, 17:39
 */

#include <stdio.h>

void calculate(float num1, float num2, char operate){
    float total;
    
    switch(operate){
        case '+':
            total = num1 + num2;
            printf("Your total is %.1f", total);
            break;
        case '-':
            total = num1 - num2;
            printf("Your total is %.1f", total);
            break;
        case '*':
            total = num1 * num2;
            printf("Your total is %.1f", total);
            break;
        case '/':
            total = num1 / num2;
            printf("Your total is %.1f", total);
            break;
        case '%':
            total = (int) num1 % (int) num2;
            printf("Your total is %.1f", total);
            break;
        default:
            printf("This is not a operator that I recognise. \n");
    }
    
    
    
}



int main() {
    
/*
    float first, second;
    char operator;
    
    printf("Enter your sum as so '# operator #': \n");
    scanf("%f %c %f", &first, &operator, &second);
    
    calculate(first, second, operator);
*/
    
    return 0;
}

