//
// Created by Mazz on 2021-05-11.
//
#include <stdio.h>

int collatz(int n){
    while(n>1){
        if(n%2==0){ // when x is even
            n=n/2;
        }
        else{ // its odd
            n=n*3+1;
        }
        return n;
    }
    return 0;
}

int run_collatz(int n){
    int count=0;
    while(n!=1){
        n=collatz(n);
        count++;
    }
    printf("Reached the number %i after %i steps",n, count);
    return n;
}

int main(){
    int n; // input from the user
    printf("Input a number:");
    scanf("%i",&n); // scanf the input from the user
    run_collatz(n);
    return 0;
}