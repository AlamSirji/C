/************************************************************
Program to find the day on 1st january of any entered year
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
int findLeapYears(int startYear, int endYear);
void main(){
    int refYear=1900,year,diff,totalLeapYears=0,totalDays=0,day=0;
    system("cls||clear");
    printf("Enter the year above 1900 : ");
    scanf("%d",&year);
    diff = year - refYear;
    totalLeapYears = findLeapYears(refYear, year);
    totalDays = (diff - totalLeapYears) * 365 + (totalLeapYears * 366);
    day = totalDays % 7;
    printf("\nThe day on 1st January of %d year = ", year);
    switch (day)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    default:
        printf("Something went wrong");
        break;
    }
}

int findLeapYears(int startYear, int endYear){
    int leaps=0;
    while (startYear < endYear)
    {
        if (startYear%400==0){
        leaps++;
        } 
        else if (startYear%100==0){
            // do nothing
        }
        else if (startYear%4==0){
            leaps++;
        }
        else {
            // do nothing
        }
        startYear++;
    }
    return leaps;
}