/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 10 December 2016, 12:39
 */

#include <stdio.h>

int input(){
    int num;
    printf("Input a number to see it's multiplication table: ");
    scanf("%d", &num);
    
    return num;
}


void multiTable(int x){ //x is user input 
    int ten = 1;  
    int pass = x;
    
    while(ten <= 10){
        printf("%d \n", pass);
        pass += x;
        ten++;
    }
    
    printf("\n These is the multiplication table for your chosen number up to 10.");
    
}

int main() {

    multiTable(input());// argument that shoves user input into multiTable
    
    return 0;
}

