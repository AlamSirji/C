/************************************************************
Program to add marks and find the percentag obtained
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float sub1,sub2,sub3,sub4,sub5,totalMarks,percentage;
    system("cls||clear");
    printf("Enter the marks for Subject 1 : ");
    scanf("%f",&sub1);
    printf("Enter the marks for Subject 2 : ");
    scanf("%f",&sub2);
     printf("Enter the marks for Subject 3 : ");
    scanf("%f",&sub3);
     printf("Enter the marks for Subject 4 : ");
    scanf("%f",&sub4);
     printf("Enter the marks for Subject 5 : ");
    scanf("%f",&sub5);
    totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = totalMarks/5;
    printf("\nYour total marks obtained in all subjects = %.2f (%.2f %%)\n", totalMarks,percentage);
}