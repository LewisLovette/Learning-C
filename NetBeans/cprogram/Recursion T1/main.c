/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 13 December 2016, 15:01
 */

#include <stdio.h>

int powa(int number, int power){
    
    if(power > 1){
        number *= 5;
        power--;
        powa(number, power);
    }
    else{
        
        return number;
    }
}

double pow(double num, int power) {
    if (power == 0) {
        return 1;
    }
    return num * pow(num, power - 1);
}

// 2^5
// 2 * 2^4
// 2 * 2 * 2^3
// 2 * 2 * 2 * 2^2
// 2 * 2 * 2 * 2 * 2

int main() {
    
    int x, y;
    printf("Input number followed by the power you want to raise it to: ");
    scanf("%d %d", &x, &y);
    printf("Your number is %d", powa(1, 0));
    
}




