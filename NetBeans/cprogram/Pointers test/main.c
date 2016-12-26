/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 18 December 2016, 12:34
 */

#include <stdio.h>

//note that the address of the integer refers to it's address is RAM.
//which is kind of obvious since variables are stored in RAM :), like it's home address in RAM!

int main() {
    
    int a, *point;          //normal integer and then a pointer
    
    point = &a;             //the '&' assigns the address of 'a' to 'point'
    
    scanf("%d", &a);        //we then add a value to 'a' but we could also use 'point' here
    printf("%d", *point);   // we the get the use '*' to get the value that our pointer is pointing to (a)
                    // note the *point is performing the 'deference' operation on 'point'.
    //this means that the '*' causes it to look at address stored in 'point' and then goes to that address to return the value!
    //so, this means that it is pointed to an address, it then goes to that address and get that value and since we made 'point', a pointer to 'a'
    //it goes to 'a's address(which was stored in 'point') and returns the value that we stored in 'a'. (the value of 'a' was inputted by the user using 'scanf').
    
    
    return 0;
}

