/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 11 December 2016, 12:24
 */

#include <stdio.h>

int input(){
    int num;
    
    printf("Write a number and we'll do stuff to it: ");
    scanf("%d", num);
    
    return num;
}

void doStuff(int user){
    int keep = user;
    int change = 0;
    int keep2 = keep * 2;
    
    change = (keep + 3)+(change *= 2)+(change -= 4)+(change -= keep2)+(change += 3);
    
/*
    change = keep + 3;
    change *= 2;
    change -= 4;
    change -= keep2;
    change += 3;
*/
    
    printf("Your new number is: %d", change);
    
}

int main() {
    
    doStuff(input());
    
    return 0;
}

