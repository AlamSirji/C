/************************************************************
Program to dertermine entered character whether capital/small/digit/special
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    char c;
    system("cls||clear");
    printf("Please enter any character from your keyboard : ");
    c = getchar();
    printf("\nYou have entered the character %c (ASCII Value: %d) -> ",c,c);
    if (c>=65 && c<=90){
        printf("A Capital Letter");
    } else if(c>=97 && c<=122){
        printf("A Small Letter");
    } else if(c>=48 && c<=57){
        printf("A Digit");
    } else {
        printf("A Special Character");
    }
    
}
