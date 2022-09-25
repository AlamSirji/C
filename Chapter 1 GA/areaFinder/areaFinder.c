/************************************************************
Program to find area of rectangles and circles
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float radius,length,breadth;
    const float pi = 3.14;
    system("cls||clear");
    printf("Enter the radius of circle : ");
    scanf("%f",&radius);
    printf("Enter the lenght and breath of recntangle respectively : ");
    scanf("%f %f", &length,&breadth);
    printf("\nThe area of circle = %.4f", pi * radius * radius);
    printf("\nThe area of rectangle = %.4f", length * breadth);    
}