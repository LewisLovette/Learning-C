/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 18 December 2016, 22:23
 */

#include <stdio.h>

int threeFiveSum(int total, int thousand){
    
    if(thousand == 1000){
        printf("The sum of multiples of 3 and 5 is: %d", total);//if thousand = 1,000 then it will print total and end the program
        return 0;
    }
    else if(thousand % 5 == 0){                                 //else it will check if it's a multiple of 5
        total += thousand;                                      //if it is, it will add 'thousand's current number to total
        thousand++;                                             //it will then add 1 to 'thousand' so it isn't infinite
        threeFiveSum(total, thousand);                          //and then it will call itself to repeat the process
    }
    else if(thousand % 3 == 0){                                 //if it is not a multiple of 5, it will check if it's a multiple of 3
        total += thousand;                                      //if it is, it will do the same thing that it did for 5.
        thousand++;
        threeFiveSum(total, thousand);                          //(Note that this didn't work by putting them in the same 'if' separated by 'OR')
    }
    else{                                                       //if it is neither a multiple of 3 or 5 'thousand' is NOT added to total.
        thousand++;                                             //but 1 is added to 'thousand'
        threeFiveSum(total, thousand);                          //and then it will repeat the process until 'thousand' is equal to 1,000
    }   
}

int main() {
    
    threeFiveSum(0, 1);     //this will call the function that will print the final sum.
    
    return 0;
}

