#include<stdio.h>
int main(){
    double marks1,marks2,marks3,marks4,marks5;
    double percent;
    printf("Enter the marks of all the five subjects:");
    scanf("%lf%lf%lf%lf%lf",&marks1,&marks2,&marks3,&marks5,&marks4);
    printf("%lf%lf%lf%lf%lf",marks1,marks2,marks3,marks5,marks4);
    percent=(marks1+marks2+marks3+marks5+marks4)/5;
    printf("%lf",&percent);
    if (percent>90){
        printf("Great you got gade A");
    }
    else if (percent<90 && percent>80){
        printf("Well done you got grade B");}
    else if(percent <70 && percent >80){
        printf("You got gread C");
    }
    }

