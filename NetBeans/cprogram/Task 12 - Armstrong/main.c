/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 21 December 2016, 12:20
 */

#include <stdio.h>
#include <math.h>
//12.	Write a program to print all Armstrong numbers between given interval using functions
int input(){
    int x;
    printf("Input a number to see all the Armstrong numbers in it's range: ");
    scanf("%d", &x);
    return x;
}

void armstrong(int user, int count){
    int copy = count, copy2 = count;
    int power, hold, total;
    
    while(copy != 0){
        copy /= 10;
        power++;             //so that we are able to do # to the power of 'test' (it counts how many digits there are in the number)
    }
    if(count <= user){
        while(count <= user){
            hold = copy2 % 10;
            total += pow(hold, power);
            if(total == count){
                printf("%d \n", total);
            } else {
                copy2 /= 10; 
            }
            count++;
        }
    } else{
        printf("There are no Armstrong numbers from 1 to your number.");
    }
    
}

int main() {
    
    armstrong(input(), 1);
    
    return 0;
}

