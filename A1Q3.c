//
// Created by Mazz on 2021-05-11.
//
#include <stdio.h>

int collatz(int n){
    int count=0; // counter for the steps
    while(n>1){
        if(n%2==0){ // when x is even
            n=n/2;
            count++; // increase the count
            printf("Reached the number %d after %d steps",n,count);

        }
        else{ // its odd
            n=n*3+1;
            count++; // increase the counter
            printf("Reached the number %d after %d steps \n",n,count);
        }
    }
    return 0;
}

int main(){
    int n; // input from the user
    printf("Input a number:");
    scanf("%i",&n); // scanf the input from the user
    collatz(n); // use the formula
    return 0;
}