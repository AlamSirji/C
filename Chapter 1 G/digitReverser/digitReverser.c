/************************************************************
Program to reverse the digit
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int digit,n,rem,reverse=0;
    const float pi = 3.14;
    system("cls||clear");
    printf("Enter any positive digit : ");
    scanf("%d",&digit);
    n = digit;
    while (n>0)
    {
        rem = n%10;
        reverse = reverse * 10 + rem;
        n = n/10;
    }
    printf("The reversed number of your digit %d = %d", digit,reverse);
}