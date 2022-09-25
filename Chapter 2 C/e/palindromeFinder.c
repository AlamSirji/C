/************************************************************
Program to find whether the number is palindrome or not 
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
int reversed(int digit);
void main(){
    int digit;
    system("cls||clear");
    printf("Enter any positive digit : ");
    scanf("%d",&digit);
    if (digit == reversed(digit)){
        printf("The number is palindrome in nature");
    } else {
        printf("The number is NOT palindrome.");
    }
}

int reversed(int digit){
    int rem,reverse=0;
    while (digit>0)
    {
        rem = digit%10;
        reverse = reverse * 10 + rem;
        digit = digit/10;
    }
    return reverse;
}