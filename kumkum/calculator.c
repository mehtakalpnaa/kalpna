#include <stdio.h>

int main()
 {
    char operator;
    int num1, num2, result;

    do {
        printf("Please enter an operator (+ - * /) or press x to exit: ");
        scanf(" %c", &operator);

        if (operator == 'x') 
        {
            printf("Exit!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d%d", &num1, &num2);
    
        switch (operator)
         {
            case '+':
                result = num1 + num2;
                printf("The sum is %d\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("The subtraction is %d\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("The multiplication is %d\n", result);
                break;
            case '/':
                if (num2 != 0)
                 {
                    result = num1 / num2;
                    printf("The division is %d\n", result);
                } else 
                {
                    printf("Error: Division by zero\n");
                }
                break;
            default:
                printf("%c is not a valid entry!\n", operator);
                break;
        }
    } while (operator != 'x');

    return 0;
 }