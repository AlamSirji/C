/************************************************************
Program to convert farenheit into centigrade
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float farenheit,centigrade;
    system("cls||clear");
    printf("Ener temperature of your city (in Farenheit) : ");
    scanf("%f",&farenheit);
    centigrade = (farenheit - 32.0) * (5.0/9.0);
    printf("\nYour city's temperature (in Centigrade) = %.4f\n",centigrade);
}