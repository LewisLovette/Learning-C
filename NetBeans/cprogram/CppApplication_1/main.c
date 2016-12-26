/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 18 December 2016, 19:08
 */

#include <stdio.h>
#include <math.h>

void printReverse() {
    int n, rev = 0;
    printf("Enter any number to find reverse: ");
    scanf("%d", &n);
    
    // Repeats the steps till n becomes 0
    while (n != 0) {
        // Multiplies rev by 10 and adds the last digit to it
        rev = (rev * 10) + (n % 10);
        // Eliminates the last digit from num
        n = n / 10;
    }
    
    printf("Reverse = %d", rev);
}


int reverse(int x, int opposite){   
    if (x == 0){
        printf("%d", opposite);
        return opposite;
    } else{
        opposite = (opposite * 10) + (x % 10);
        x /= 10;
        reverse(x, opposite);
    }  
}

int shortReverse(int num) {
    int digit;
    if (num == 0) {
        return 0;
    }
    digit = (int) log10(num);
    return ((num % 10 * pow(10, digit)) + shortReverse(num / 10));
}


int main() {
    
    int x;
    scanf("%d", &x);
    reverse(x, 0);
    
    //printReverse();
    
    return 0;
}

