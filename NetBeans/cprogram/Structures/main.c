/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 15 December 2016, 19:16
 */

#include <stdio.h>

struct forPeople{
    int age;
    char firstName[20];
    char lastName[20];
};

int main() {
    
    //Structure Variables
    struct forPeople lewis;
    struct forPeople atul;
    
    //Shoving it into the variable
    printf("Input user 1's age: ");
    scanf("%d", &lewis.age);// the .age specifies where the user input is going to.
    
    printf("Input user 2's first name: ");
    scanf("%d", &lewis.firstName);
    
    //This displays what the user put in.
    printf("User 1s age is %d", lewis.age);
    printf("\nUser 2's name is %s", atul.firstName); //idk why I'm messing with strings :)
                                                    // aka idk how to show strings =D
/*
    Can we just talk about how basic this is?
    Feel so scrubby making a program like this tbh.
    Still had fun tho =D
*/
    
    return 0;
}

