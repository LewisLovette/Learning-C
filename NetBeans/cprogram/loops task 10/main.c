/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 11 December 2016, 12:09
 */

#include <stdio.h>

int user(){
    int num;
    
    printf("Input a number to turn it into words!: ");
    scanf("%d", &num);
    
    return num;
}

void toWords(int user){
    
    int change;
    
    change = char (user);
    
    printf("Your number into a word is: %c", change);
    
}

int main() {
    
    toWords(user());
    
    return 0;
}

