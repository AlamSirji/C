/************************************************************
Program to find the gross salary
Author : AlamSirji
Date : 25.09.2022
*************************************************************/

#include<stdio.h>
#include<stdlib.h>
void main(){
    float basicSalary=0,netSalary=0,dearnessAllowance=0,houseRentAllowance=0;
    float dearnessAllowancePercentage = 40, houseRentAllowancePercentage = 20; // in percentages
    system("cls||clear");
    printf("Please enter the basic salary : ");
    scanf("%f", &basicSalary);
    dearnessAllowance = basicSalary * (dearnessAllowancePercentage/100);
    houseRentAllowance = basicSalary * (houseRentAllowancePercentage/100);
    printf("\nTotal Net Salary = Rs. %.2f \n", basicSalary + dearnessAllowance + houseRentAllowance);
}