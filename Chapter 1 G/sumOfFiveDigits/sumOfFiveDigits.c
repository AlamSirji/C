/************************************************************
Program to find the sum of five digits
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float d1,d2,d3,d4,d5,sum;
    system("cls||clear");
    printf("Enter five digits one by one\n\n");
    scanf("%f %f %f %f %f", &d1, &d2, &d3, &d4, &d5);
    sum = d1 + d2 + d3 + d4 + d5;
    printf("\nSum of all digits = %f", sum); 
}