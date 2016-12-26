/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 13 December 2016, 14:21
 * 
 * 0 +1 = 1
 * 1 + 2 = 3
 * 3 + 3 = 6
 * 6 + 4 = 10
 * 10 + 5 = 15
 * 15 + 6 = 21
 * 21 + 7 = 27
 * 28 + 8 = 36
 * 36 + 9 = 45
 * 
 * 5! = 5 * 4 * 3 * 2 * 1
 * 10! = 10 * 9 * 8 * ... * 1
 */

#include <stdio.h>

int count = 1;

void foo(int sum) {
    sum = sum + count;
    count++;
    
    if (count <= 9) { // base case
        foo(sum);
    } else {
        printf("Sum is [%d] \n", sum);
    }
}

int fac(int num) {
    int res = 0;
    
    if (num <= 0) {
        printf("Error\n");
    } 
    else if (num == 1) {
        return num;
    }
    else {
        res = num * fac(num - 1);
        return res;
    }
    
    return -1;
}
/*
 * res = 5 * fac(5 - 1) - fac() stack 1
 * res = 4 * fac(4 - 1) - fac() stack 2
 * res = 3 * fac(3 - 1) - fac() stack 3
 * res = 2 * fac(2 - 1) - fac() stack 4
 * res = 1 * fac(1 - 1) - fac() stack 5 returns 1
 */

int Fibonacci(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    }
    else {
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
    }
}



int main() {
    
    int n, c, i= 0;
    scanf("%d", &n);
    printf("Fibonacci sequence\n");
    
    for (c = 1; c <= n; c++) {
        printf("%d\n", Fibonacci(i));
        i++;
    }
    
    
    return 0;
}



