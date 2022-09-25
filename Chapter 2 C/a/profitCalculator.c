/************************************************************
Program to find profit provided cost price and selling price
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float costPrice,sellingPrice;
    system("cls||clear");
    printf("Enter the cost price : ");
    scanf("%f",&costPrice);
    printf("Enter the selling price : ");
    scanf("%f",&sellingPrice);
    printf("\nPrfoti/Loss = %.4f",sellingPrice - costPrice);
}