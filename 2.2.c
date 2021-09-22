#include <stdio.h>

int main()
{
    int a,b,c,ans;//declaration of four variables 
    printf("Enter the three numbers : ");
    scanf("%d%d%d",&a,&b,&c);// input from user
    ans=((a>b)?((a>c)?a:c):((b>c)?b:c)) ;//ternary statement 
    printf("The grestest of %d , %d , %d is  %d",a,b,c,ans);

}
