//
// Created by Mazz on 2021-05-11.
//
#include <stdio.h>

float calculate_total_cost( const float arr[]){
    float sum=0;
    for(int i=1;i<=10;i++){
        sum+=arr[i];
    }
    return sum;
}

float average_total_cost(float arr[]){
    float price=calculate_total_cost(arr)/10;
    return price;
}

int main(){
    FILE* fp;

    char buff[1000],items[100],quantity1[100];

    float arr[100],arr2[100],price1,price2;
    int count=0;


    fp = fopen("C:\\Users\\Mazz\\CLionProjects\\Assignments\\food.txt", "r");
    if(!fp){
        printf("Could not open file");
        return 0;}

    fgets(buff, 1000, fp);
    while((int) NULL == feof(fp))
    {
        sscanf(buff, "%s%s%f%f", items, quantity1, &price1, &price2);
        arr[count]=price1;
        arr2[count]=price2;
        count++;
        fgets(buff, 1000, fp);
    }

    float sum1= calculate_total_cost(arr);
    float sum2=calculate_total_cost(arr2);
    printf("Total cost in 2018: %f\n",sum1);
    printf("Total cost in 2020: %f\n",sum2);
    printf("Difference in total costs: %f\n",sum1-sum2);

    float avg1= average_total_cost(arr);
    float avg2= average_total_cost(arr2);
    printf("Difference in average price between 2018 and 2020 is: %f", avg1-avg2);
    fclose(fp);
    return 0;
}
