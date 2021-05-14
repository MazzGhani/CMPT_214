//
// Created by Mazz on 2021-05-11.
//
// Mazz Ghani, mag151, 11252417, CMPT214
#include <stdio.h>

int main()
{
    int number, reverse=0, x;
    printf("Enter the passcode:");
    scanf("%d", &number); // take the numbers entered by the user
    while(number != 0) // read each number until there arent no numbers
    {
        /** EXAMPLE:
        num= 123      reverse should be 321      number ==0
         0*10+ 123%10 == 3
         num= num/10 --> 12
         then we continue until theres nothing , adn then finally prin out the result
         */

        x= number % 10;
        reverse= reverse * 10 + x;
        number=number/10;
    }
    printf("Enter this to open the door: %d", reverse);
    return 0;
}
