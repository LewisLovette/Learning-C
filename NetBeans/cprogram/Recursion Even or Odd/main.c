/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Lewis
 *
 * Created on 13 December 2016, 18:29
 */

#include <stdio.h>

int user(){
    int inp;
    printf("Enter a number: ");
    scanf("%d", &inp);
    
    return inp;
}

int even(int user){

    if (user == 0){
        printf("\nThis is all the EVEN number in the number!\n");
        
        return user;
    }
    else if(user % 2 == 0){
        printf("%d\n", user);
        user--;
        even(user);
    }
    else if(user % 2 == 1){
        user--;
        even(user);
    }
    else{
        printf("\nError Has Occurred. \n");
    }
}

int odd(int user){

    if (user == 0){
        printf("\nThis is all the ODD number in the number!\n");
        
        return user;
    }
    else if(user % 2 == 1){
        printf("%d\n", user);
        user--;
        odd(user);
    }
    else if(user % 2 == 0){
        user--;
        odd(user);
    }
    else{
        printf("\nError Has Occurred. \n");
    }
}

int chose(){
    int num;
    
    printf("Press 1 for ODD number and 2 for EVEN numbers: ");
    scanf("%d", &num);
    
    if(num == 1){
        odd(user());
    }
    else if(num == 2){
        even(user());
    }
    else{
        printf("This is neither 1 or 2, choose again! \n");
        chose();
    }
    
    return num;
}

int main() {

    chose();
    
    return 0;
}

