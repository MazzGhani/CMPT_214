// Mazz Ghani mag 151 CMPT 214 11252417
#include <stdio.h>

int main() {
    // reading and openeing the file
    FILE *fp = fopen("C:\\Users\\Mazz\\CLionProjects\\Assignments\\cases.txt", "r");

    if(fp==NULL){ // if the file is NULL , that means either the file is acc NULL
        //ORR that the file wasn't correctly opened
        printf("ERROR--- FILE WAS NOT OPENED ");
    }
    // For aesthetics (not really important )
    printf("WIZARD OF WINES WINERY\n");
    int number_of_weeks; // this is technically the first line in the TXT file
    int case_data; // this is the rest of the shipment info in the TXT file

    fscanf(fp,"%d",&number_of_weeks); // scans the FIRST LINE
    fscanf(fp,"%d",&case_data); // scans the REST of the lines

    int largest = case_data; // largest value
    int smallest = case_data; // smallest value
    double average = case_data; // the average value

    /**
     * Since the text file has 4 values
     * We'd start at 4 then subtract 1 each loop
     * */
    for(int x=0;x<(number_of_weeks - 1); x++){
        int cases_ships;
        fscanf(fp,"%d",&cases_ships); // scan the text file AFTER the n of weeks
        average += cases_ships; // add all the values to the average var

        if(largest < cases_ships){ // is 15< 9 , nope ..... is 15<100 YES
            largest = cases_ships; // so now the alrgest value is 100
        }
        if(smallest > cases_ships){ // vice versa here from ^
            smallest = cases_ships;
        }
    }
    // print everything
    printf("largest shipement: %d\n",largest);
    printf("smallest shipement: %d\n",smallest);
    printf("average shipement: %lf\n",(average / number_of_weeks));
    fclose(fp); // close the text file
    return 0;
}