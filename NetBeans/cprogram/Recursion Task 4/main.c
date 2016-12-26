/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 14 December 2016, 09:30
 */

#include <stdio.h>

int user(){
    int num;
    
    printf("Input a number to want to find the sum of digits for: ");
    scanf("%d", &num);
    
    return num;
}

int sum1(int user, int total){
    
    if(user == 0){
        printf("The sum of your digits is: %d", total);
        return total;
    }
    else{
        total += user;
        user--;
        sum(user, total);
    }
    
}

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n + sum(n - 1));
    }
}

int main() {
    
    //sum(user(), 0);
    int s = sum(user());
    
    printf("Sum of all natural numbers = %d", s);
    return 0;
}

