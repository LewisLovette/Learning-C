/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 19 December 2016, 18:02
 */

#include <stdio.h>

void palindrome(int user, int clone, int drome){
    //printf("%d %d %d", user, clone, drome);   //test to see if numbers were being passed through.
    if(user != 0){
        drome += user % 10;               //drome = itself plus the remainder from user
        user /= 10;                       //I then divide user by 10 so that the next remainder (the number is moved right so for example, 123 /10 = 12 (next % 10 will be 2)ect.
        drome *= 10;                      //then drome is multiplied by 10 so that when we add user % 10 it is in the right place - eg 3 * 10 = 30,  30 + ( 12 % 10) = 32
        palindrome(user, clone, drome);   //We then repeat this until user == 0.                                                                //This is reversing the number.
    } else{
        drome /= 10;                            //it then need to divide drome by 10 (as we multiplied it by 10, 1 time too many.)
        if(clone == drome){                     //it then checks if the original user input is equal to the 'drome'/reverse number.
        printf("%d is a palindrome!", clone);   //if it is then it prints the original number, saying that it is a palindrome.
        } else{
        printf("%d is NOT palindrome.", clone); //if it isn't then it prints the original number, saying that it is not a palindrome.
        }
    }
}

int main() {
    int x, y;
    printf("Input a number to see if it is or isn't a palindrome: ");
    scanf("%d", &x);
    y = x; //So that we are able to check if the number are the same. (because it won't let me put 'x' into palindrome twice.
    
    palindrome(x, y, 0);
        //Well this isn't what I wanted but it's the only way it will work -_-
    
    return 0;
}

