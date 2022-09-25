/************************************************************
Program to find whether a year is leap or not
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int year;
    system("cls||clear");
    printf("Enter the year : ");
    scanf("%d",&year);
    if (year%400==0){
        printf("Entered year is a leap year");
    } 
    else if (year%100==0){
        printf("Entered year is not a leap year");
    }
    else if (year%4==0){
        printf("Entered year is a leap year");
    }
    else {
        printf("Entered year is not a leap year");
    }
}