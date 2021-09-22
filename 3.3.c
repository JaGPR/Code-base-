#include <stdio.h>
#include <math.h>


int main()
{
    int choice;
    double number;
    int nny;
    
printf ("Enter your choice from the following result : \n1. Check number is even or odd. \n2. Check number is positive or negative.\n3. Printing square of the number.\n4. Printing square root of the number.\n5. Exit\n");
scanf("%d",&choice);
if (choice==5 ){
    printf("Thanks");
}
else{
printf("Enter the number : ");
scanf("%lf",&number);
nny=number;
switch(choice)
{
    case 1:
    
        if ((nny%2)==0){
            printf("The number is even.\n");
        }
        else{
            printf("The number is odd.\n");
        }
        main();
        break;
    
    case 2:
        if (number<0){
            printf("The number is negative.\n");
        }
        else if (number>0){
            printf("The number is positive.\n");
        }
        else {
            printf("The number entered is zero.\n");
        }
        main();
        break;
        
    case 3 :
        printf("%.0f is the square of the %.0f. \n",(number*number),number);
        main();
        break;
    
    
    case 4:
        printf("%lf Is the squareroot of required number. \n",sqrt(number));
        main();
        break;
    

    }
}
}