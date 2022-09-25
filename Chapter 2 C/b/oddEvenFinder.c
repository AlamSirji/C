/************************************************************
Program to find odd or even of input nubmer
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    system("cls||clear");
    printf("Enter any positive number ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("\nEntered number is even number");
    } else {
        printf("\nEntered number is odd number");
    }
    
}