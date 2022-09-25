/************************************************************
Program to ... 
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    int i=4,j=-1,k=0,y,z;
    system("cls||clear");
    y = i + 5 && j + 1 || k + 2;
    z = i + 5 || j + 1 && k + 2;
    printf("\nY = %d\nZ = %d",y,z);   
}

