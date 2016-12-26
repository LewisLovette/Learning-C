/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 13 December 2016, 11:55
 */

#include <stdio.h>
#include <math.h>

/*
int input1(){
    int x;
    
    printf("Number will be taken in centimeters \nInput the 1st side of your triangle: ");
    scanf("%d", &x);
    
    return x;
}

int input2(){
    int y;
    
    printf("Input the 2nd side of your triangle: ");
    scanf("%d", &y);
    
    return y;
}

int input3(){
    int z;
    
    printf("Input the 3rd side of your triangle: ");
    scanf("%d", &z);
    
    return z;
}
*/

void doStuff(int a, int b, int c){
    
    if(a + b > c || c + b > a || a + c > b){
       
        float s, area;
        s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        
       printf("\nthe area of your triangle is: %8.4f", area);
    }
    else{
        printf("This is not a valid triangle.");
    }
}

int main() {
    int x, y, z;
    
    printf("Numbers will be take in centimeters. \nInput the sides for your triangle as so '# # #': ");
    scanf("%d %d %d", &x, &y, &z);
    
    doStuff(x, y, z);
    
    //doStuff(input1(), input2(), input3());
    
    return 0;
}

