/************************************************************
Program to find sum of a digit
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int digit,rem,sum=0;
    system("cls||clear");
    printf("Enter a positive integer number : ");
    scanf("%d",&digit);
    while (digit>0)
    {
        rem = digit % 10;
        sum = sum + rem;
        digit = digit/10; 
    }
    printf("Sum of all digits = %d",sum);
    
}