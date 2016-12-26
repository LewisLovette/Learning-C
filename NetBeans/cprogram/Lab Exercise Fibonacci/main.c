/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 12 December 2016, 15:06
 */

#include <stdio.h>

void fibonacciSequence(){
    int current = 0, previous = 1;
    int next = current+ previous;
    int stop = 3; //is 3 because we print the number before the loop
    
    printf("%d \n%d \n%d \n", current, previous, next);
    
    while(stop <= 10){
        
        if(stop == 10){break;}
        current = previous + next;
        printf("%d \n", current);
        stop++;
        
        
        if(stop == 10){break;}
        previous = current + next;
        printf("%d \n", previous);
        stop++;
        
        
        if(stop == 10){break;}
        next = current + previous;        
        printf("%d \n", next);
        stop++;
        
        
        
    }
    
}

void fib(int n) {
    int a, b, c;
    
    a = 0;
    b = 1;
    c = 0;
    
    for (int i = 1; i <= n; i++) {
        printf("%d, ", c);
        a = b;
        b = c;
        c = a + b;
    }
}

int main() {
    
    //fibonacciSequence();
    fib(10);
    return 0;
}

