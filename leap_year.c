#include <stdio.h>
int main()
{
    int year;
    printf("enter year: ");
    scanf("%d", &year);
    if (year%400==0){
    printf("Year is leap year");
    }
    if(year%100==0){
    printf("Year is not leap year");
    }
    if (year%4==0){
    printf("Year is leap year");
    }
    else{
    printf("year is not leap year");
    }
return 0;
}