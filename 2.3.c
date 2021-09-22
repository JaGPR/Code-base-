#include <stdio.h>

int main()
{
    int year;//declaration
    printf("Enter the year : ");
    scanf("%d",&year);//input
    if (year%400==0 ){//400 divisibility , ture it is a leap year 
        printf("This year is  a leap year.");
    }
    else if (year%100==0){//if not div by 400 then control will be here and if div by 100 , it is not a leap year
        printf("This is not a leap year.");
    }
    else if (year%4==0){//if not div by 100 and 400 both then control will be here , if it is div by 4 , it is a leap year.
        printf("This year is a leap year.");
    }
    else {//if none of the condition is true then it will be not a leap year 
        printf("This year is not a leap year.");
    }
}
