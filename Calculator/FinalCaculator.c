#include<stdio.h>
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a, int b);
int devide(int a, int b);

void main()
{
    int num1,num2,result;
    char ch;

    

        do{
            printf("\nEnter a number :");
            scanf("%d",&num1);
            printf("\nEnter a number :");
            scanf("%d",&num2);

            printf("\nEnter + for Addition");
            printf("\nEnter - for Subtraction");
            printf("\nEnter * for Multiplication");
            printf("\nEnter / for Division");
            printf("\n0 for Exit\n");

            printf("\nEnter a choice : ");
            scanf(" %c",&ch);

            switch(ch)
        {
            case '+':
                result=add(num1,num2);
                printf("%d",result);
                break;
            case '-':
                result=subtract(num1,num2);
                printf("%d",result);
                break;
            case '*':
                result=multiply(num1,num2);
                printf("%d",result);
                break;
            case '/':
                result=devide(num1,num2);
                printf("%d",result);
                break;
            case 0:
                break;    
            default:
                printf("\nplease enter valid oprater");
        }

        }while(ch!=0);

  
    
        
}
int add(int a,int b)
{
    return a + b;
}
int subtract(int a,int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int devide(int a, int b)
{
    return a / b;
}