#include <stdio.h>

int main()
{
    int choice,number1,number2 , shift ;//declared int variable
    printf("Please select the operation.\n1. Bitwise AND operator\n2. Bitwise OR operator\n");
    printf("3. Bitwise Exclusive OR operator\n4. One's complement operator\n5. Left shift operator\n");
    printf("6. Right shift operator.\n");
    printf("7. Exit.\n");
    scanf("%d",&choice);//input from user , from the desired menue .
    if (choice==7){//this is the exit condition
        printf("Thanks");
    }// in each switch case i have called main function for the continuition of code .
    else{
        switch(choice){
            case 1: 
            printf("Enter two numbers : ");
            scanf("%d%d",&number1,&number2);
            printf("The result of number %d AND number %d is : %d\n",number1,number2,number1&number2);
            main();
            break;
            case 2:
            printf("Enter two numbers : ");
            scanf("%d%d",&number1,&number2);
            printf("The result of number %d OR number %d is : %d\n",number1,number2,number1|number2);
            main();
            break;
            case 10+2:
            printf("Enter two numbers : ");
            scanf("%d%d",&number1,&number2);
            printf("The result of number %d Exclusive OR number %d is : %d\n",number1,number2,number1^number2);
            main();
            case 4: 
            printf("Enter the number : ");
            scanf("%d",&number2);
            printf("The result of number %d Ones's Compliment is : %d\n",number2,~number2);
            main();
            break;
            case 5 :
            printf("Enter the  number and the shift: ");
            scanf("%d%d",&number1,&shift);
            printf("The result is : %d\n",number1<<shift);
            main();
            break;
            case 6:
            printf("Enter the  number and the shift: ");
            scanf("%d%d",&number1,&shift);
            printf("The result is : %d\n",number1<<shift);
            main();
            break;
            default:
            printf("Wrong input .\n\n");
            main();// if any other number is eneted , the program will continue and will agin ask for the input

        
        }
    }


}
