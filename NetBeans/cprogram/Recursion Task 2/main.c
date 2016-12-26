/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 13 December 2016, 17:48
 */

#include <stdio.h>

int userInp(){
    
    int input;
    
    printf("Input a number to get the numbers between it and 1: ");
    scanf("%d", &input);
    
    return input;
}


int number(int user){
    
    if(user >= 1){
        printf("%d \n", user);
        user--;
        number(user);
    }
    else{
        
        return 0;
    }
    
}

int main() {
    
    number(userInp());
    
    return 0;
}

