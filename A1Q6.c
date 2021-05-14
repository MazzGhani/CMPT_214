//
// Created by Mazz on 2021-05-11.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE* fp;
    float sum1=0,sum2=0,price1,price2;
    char buffer[1000],items[100],quantity1[100];
    float empty_arr[100],empty_arr2[100];
    int count=0;

    fp = fopen("C:\\Users\\Mazz\\CLionProjects\\Assignments\\food.txt", "r");
    if(!fp){
        printf("Could not open file");
        return 0;}

    fgets(buffer, 1000, fp);
    while(feof(fp) == NULL)
    {
        sscanf(buffer, "%s%s%f%f", items,quantity1,&price1,&price2);
        empty_arr[count]=price1;
        empty_arr2[count]=price2;
        count++;
        fgets(buffer, 1000, fp);
    }

    for(int i=1;i<=10;i++){
        sum1+=empty_arr[i];
        sum2+= empty_arr2[i];
    }
    printf("Total cost in 2018: %f",sum1);
    printf("\nTotal cost in 2020: %f",sum2);
    printf("\nDifference in total costs: %f",sum1-sum2);
    fclose(fp);
    return 0;
}
