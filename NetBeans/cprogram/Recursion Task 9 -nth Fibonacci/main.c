/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 19 December 2016, 10:27
 */

#include <stdio.h>

int input(){
    int x;
    printf("Input a number you want the Fibonacci sequence to stop at: ");
    scanf("%d", &x);
    //this just takes the user input and puts it into x
    return x; //we then return x so that it can be put into nthFib using arguments.
}

void nthFib(int user, int time, int x, int y, int z){   
    if(user != time){                                   //This makes sure that the recursion isn't infinite.
        x = y;                                          //This means that 'x' is equal to 'y' and then 'y' gets changed to 'z' (everything gets moved a place forward)
        y = z;                                          //'z' was currently the last biggest number, which is then passed down.
        z = x + y;                                      //This means that z is equal to the sum of x + y, so it is adding the last two numbers
        //therefore 'x' or 'y' doesn't need to print as 'z' is the only one adding numbers that then get passed down; it is each number in the sequence.
        user--;                                         //So it's not infinite
        nthFib(user, time, x, y, z);                    //Function calls itself, placing new numbers into the variables with arguments.
    } else {
        printf("The Fibonacci sequence to your requested length is: %d", z);    //This means that once user == time it will print 'z'
        //return z;
    }
}

int main() {
    
    nthFib(input(), 1, 0, 1, 0);    //Calls on function that then calls on function for user input, then places 1,0,1,0 into the variables in 'nthFib' function
    //the first '1' can be changed to 0 if you consider 'x' as 0th place in the Fibonacci sequence.
    return 0;
}

