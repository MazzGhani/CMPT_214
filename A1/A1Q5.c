//
// Created by Mazz on 2021-05-11.
//
//Mazz Ghani, mag151, 11252417, CMPT214
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

int run_collatz(int n,int *max){
    max=0;
    int count=0;
    while(n!=1){
        n=collatz(n);
        count++;
        if(n>max){
        max=n;
        }
    }
    printf("Reached the number %i after %i steps",n, count);
    printf("\nMaximum n was: %i",max);
}


int main(){
    int n; // input from the user
    printf("Input a number:");
    scanf("%i",&n); // scanf the input from the user
    run_collatz(n,n); // use the formula
    return 0;
}

