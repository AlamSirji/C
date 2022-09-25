/************************************************************
Program to swap two variables
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int c,d,temp;
    system("cls||clear");
    printf("Enter value of C : ");
    scanf("%d",&c);
    printf("Enter value of D : ");
    scanf("%d",&d);
    temp = d;
    d = c;
    c = temp;
    printf("\nValues of C and D = %d, %d", c, d);
}