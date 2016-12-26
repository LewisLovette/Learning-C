/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 14 December 2016, 11:56
 */

#include <stdio.h>

int input1(){
    int x;
    
    printf("Input your first number you want to find the Greatest Common Divisor for: ");
    scanf("%d", &x);
    
    return x;
}

int input2(){
    int x;
    
    printf("Now enter your second number: ");
    scanf("%d", &x);
    
    return x;
}

int gdc(int num1, int num2, int remainder, int answer){
    
    if(num1 > num2){
        remainder = num1 % num2;
        if (remainder == 0){
            answer = num2;
            printf("Your GDC is: %d", answer);
            
            return answer;
        }
        else{
            num1 = num2;
            num2 = remainder;
            gdc(num1, num2, remainder, answer);
        }
    }
    else{
        remainder = num2 % num1;
        if (remainder == 0){
            answer = num1;
            printf("Your GDC is: %d", answer);
            
            return answer;
        }
        else{
            num2 = num1;
            num1 = remainder;
            gdc(num1, num2, remainder, answer);
        }
    }
    
}

/**
 * a b
 * a % b = c
 * 
 * 
 */

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
  
    //gdc(input2(), input1(), 0, 0);
    printf("%d", gcd(input2(), input1()));
    return 0;
}

