/************************************************************
Program to convert KMs into different distance units
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float kms;
    float meters,foot,inchs,centimeters;
    system("cls||clear");
    printf("Please enter the distance (in Kilometers) : ");
    scanf("%f",&kms);
    meters = kms * 1000;
    printf("\nDistance in Meters = %.2f", meters);
    foot = meters * 3.28084;
    printf("\nDistance in Feet = %.2f",foot);
    inchs = foot * 12;
    printf("\nDistance in Inchs = %.2f",inchs);
    centimeters = meters * 100;
    printf("\nDistance in Centimeters = %.2f\n",centimeters);
}