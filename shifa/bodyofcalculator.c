#include<stdio.h>

void main()
{
    int num1,num2,result;
    char ch;

    

        do{
            printf("Enter a number :");
            scanf("%d",&num1);
            printf("Enter a number :");
            scanf("%d",&num2);

            printf("\nEnter + for Addition");
            printf("\nEnter - for Subtraction");
            printf("\nEnter * for Multiplication");
            printf("\nEnter / for Division");
            printf("\n0 for Exit");

            printf("\nEnter a choice : ");
            scanf(" %c",&ch);

            switch(ch)
        {
            case '+':
                
                printf("%d",result);
                break;
            case '-':
                
                printf("%d",result);
                break;
            case '*':
              
                printf("%d",result);
                break;
            case '/':
                
                printf("%d",result);
                break;
            case 0:
                break;    
            default:
                printf("\nplease enter valid oprater");
        }

        }while(ch!=0);

  
    
        
}
