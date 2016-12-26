/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 08 December 2016, 15:54
 */

// #anything is a preprocessor

#include <stdio.h>
int x; //input for year
int y; // for month
int z;
int total; 

void year(){
    scanf("%d", &x);
}

void month(){
    scanf("%d", &y);
}

int yy(){
    x *= 365;
    return x;
}

int ym(){
    y *= 30;
    return y;
}

int days(){
    scanf("%d", &z);
}

int main() { 
    
    printf("Write the year:\n");
    year();
    
    
    printf("Write your month:\n");
    month();
    
    
    printf("Write the amount of days:\n");
    days();
    
    total = yy() + ym() + z;
    
    printf("You combined days are: %d", total);
    
    
    return 0;
            
            
}

