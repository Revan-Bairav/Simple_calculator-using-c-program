#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int op;
    int num1,num2;
    int fact=1,i;
    float n1,n2,ans;
    while(op!=9){
        printf("Select the operation for performing the calculation:\n");
        printf("\n 1.Addition\t \t 2.Subtraction\n 3.Multiplication\t 4.Division\n 5.Modulus\t \t 6.Factorial\n 7.Square\t \t 8.Square Root\n 9.exit\n");
        printf("Please make a choice:");
        scanf("%d",&op);
        switch(op){
            case 1:
            printf("You chose Addition.\n");
            printf("Enter the two numbers:");
            scanf("%f %f",&n1,&n2);
            ans=n1+n2;
            printf("\nSum of two numbers=%.2f",ans);
            break;
            case 2:
            printf("You chose Subtraction.\n");
            printf("Enter the two numbers:");
            scanf("%f %f",&n1,&n2);
            ans=n1-n2;
            printf("\nDifference of two numbers=%.2f",ans);
            break;
            case 3:
            printf("You chose Multiplication.\n");
            printf("Enter the two numbers:");
            scanf("%f %f",&n1,&n2);
            ans=n1*n2;
            printf("\nProduct of two numbers=%.2f",ans);
            break;
            case 4:
            printf("You chose Division.\n");
            printf("Enter the two numbers:");
            scanf("%f %f",&n1,&n2);
            if(n2==0){
                printf("\n Divisor cannot be 0.Please enter another value:");
                scanf("%f",&n2);
            }
            ans=n1/n2;
            printf("\nDivison of two numbers=%.2f",ans);
            break;
            case 5:
            printf("You chose Modulus.\n");
            printf("Enter the two numbers:");
            scanf("%d %d",&num1,&num2);
            if(n2==0){
                printf("\nThe Divisor cannot be 0.Please choose another number:");
                scanf("%d",&num2);
            }
            ans=num1%num2;
            printf("\nModulo of two numbers=%.2f",ans);
            break;
            case 6:
            printf("You chose Factorial.\n");
            printf("Enter the number:");
            scanf("%d",&num1);
            for(i=1;i<=num1;i++){
                fact=fact*i;
            }
            printf("\nFactorial of the number=%d",fact);
            break;
            case 7:
            printf("You chose Square.\n");
            printf("Enter the Number:");
            scanf("%d",&num1);
            ans=num1*num1;
            printf("\nSquare of the Number=%.2f",ans);
            break;
            case 8:
            printf("You chose Square Root.\n");
            printf("Enter the Number:");
            scanf("%d",&num1);
            ans=sqrt(num1);
            printf("\nSquare Root of the number %d=%.2f",num1,ans);
            break;
            case 9:
            printf("You chose exit.\n");
            exit(0);
            break;
            default:
            printf("Error!The option not found.");
            break;
        }
        printf("\n \n ********************************************\n");

    }
    return 0;

}
