#include <stdio.h>

int main()
{
    double a,b,c,d,e,percent;//declared double cauz no. can be in fraction too .
    printf("Enter the marks of all the five subjects : ");
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);//user input
    percent=(a+b+c+d+e)/5;//calculation of percentage 
    if (a>100 | b>100 | c>100 | d>100 | e>100){// checking if the numbers ar in correct format 
        printf("You gave inappropriate value.\n");
        main();//if they are not in correct format then main will be executed again.
        
    }
    else{
    if (percent>=90){
        printf("Great you got grade A.");
    }
    else if (percent <90 && percent >=80){
        printf("Nice you got grade B.");
    }
    else if (percent <80 && percent >=70){
        printf("You got grade C.");
    }
    else if (percent <70 && percent>=60){
        printf("You need to improve, You got grade D.");
    }
    else if (percent <60 && percent >=33 ){
        printf("You really need to work hard , you got grade E.");

    } 
    else {
        printf("You have failed your exam.");
    }
}
}