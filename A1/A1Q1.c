//
// Created by Mazz on 2021-05-11.
//
// Mazz Ghani mag151 CMPT 214 11252417
#include <stdio.h>

int main()
{
    double PI= 3.14159265;  // PIE!
    float area, radius,volume; // to help calculate later
    printf("Enter the radius:");
    scanf("%f",&radius); // take the radius entered by the user

    area= 4*PI*radius*radius; // formula for the surface are of the sphere
    volume= (4.0/3.0)*PI*radius*radius*radius; // formula for the volume of the sphere

    // put everything together
    printf("The volume of the sphere is %.2f \n",volume);
    printf("The surface area of the sphere is %.2f",area);
    return 0;
}
