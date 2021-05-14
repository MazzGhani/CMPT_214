//
// Created by Mazz on 2021-05-11.
//
//Mazz Ghani, mag151, 11252417, CMPT214
#include <stdio.h>

int collatz(int n,int *max){
    max=0;
    int count=0; // counter for the steps
    while(n>1){
        if(n%2==0){ // when x is even
            n=n/2;
            count++; // increase the count
        }
        else{ // its odd
            n=n*3+1;
            count++; // increase the counter
        }
        if(n>max){
            max=n;
        }
    }
    printf("Reached the number %d after %d steps",n,count);
    printf("\nMaximum n was: %i",max);

    return 0;
}

int main(){
    int n; // input from the user
    printf("Input a number:");
    scanf("%i",&n); // scanf the input from the user
    collatz(n,2); // use the formula
    return 0;
}

