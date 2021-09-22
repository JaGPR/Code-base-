#include <stdio.h>
#include <math.h>

int main()
{
    double D,a,b,c,r1,r2,real,imaginary;//taken double due to fraction part 
    printf("Enter the value of a,b,c (equation type ax^2+bx+c) : ");
    scanf("%lf%lf%lf",&a,&b,&c);//user input
    D=(b*b)-(4*a*c);
    if (D>0){// D is dicriminant .
    r1=(-b+sqrt(D))/(2*a);
    r2=(-b-sqrt(D))/(2*a);
    printf("The roots of the given equation are %f ,%f .",r1,r2);
    }
    else if (D==0){
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("The roots of the given equation are %f ,%f .",r1,r2);
    }
    else if (D<0){// for the non real roots .
        real=-b/(2*a);
        imaginary=sqrt(-D)/(2*a);
        printf("root1 = %.2lf+%.2lf i and root2 = %.2f-%.2f i", real, imaginary, real, imaginary);
    }

} 

    

