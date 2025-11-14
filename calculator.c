#include<stdio.h>
int main()
{
    int x, y;
    char op;
    printf("Choose the required operator: (+,-,*,/) \n");
    scanf("%c", &op);
    printf("Enter any two numbers: \n");
    scanf("%d %d", &x, &y);

    switch (op) {
    case '+':
       printf("%d+%d=%d\n", x, y, x+y);
       break;
     case '-':
       printf("%d-%d=%d\n", x, y, x-y);
       break;
     case '*':
       printf("%d*%d=%d\n", x, y, x*y);
       break;
     case '/':
       printf("%d/%d=%d\n", x, y, x/y);
       break;
     default:
        printf("Invalid input entered.");
        break;
    }
    return 0;
}
