/************************************************************
Program to ... 
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int i=4,j=-1,k=0,w,x,y,z;
    system("cls||clear");
    w = i || j || k; // left to right evalution
    x = i && j && k; // left to right evalution
    y = i || j && k; // left to right but && alwasy before ||
    z = i && j || k; // confusion at z, it must be zero
    printf("\nW = %d\nX = %d\nY = %d\nZ = %d",w,x,y,z);   
}

