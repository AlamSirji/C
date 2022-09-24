/************************************************************
Program to calculate simple interest provided P,R,T
Author : AlamSirji
Date : 24.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float principle, rate, simpleInterest;
    int time;
    printf("Welcome to Simple Interest Calculator");
    system("cls||clear");
    principle = 5000; // Rs. 5000
    rate = 10; // 10 %
    time = 5; // 5 years
    simpleInterest = (principle * rate * time) / 100;
    printf("The Simple Interest is %.2f", simpleInterest);
}