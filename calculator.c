#include<stdio.h>
int main()
{
    char op;
    float n1,n2;
    printf("enter a operator: +,-,*,/:" );
    scanf(" %c",&op);
    printf("enter the value of n1 and n2:");
    scanf("%f%f",&n1,&n2);
    switch(op)
    {
        case '+':
        printf("result:%.2f\n",n1+n2);
        break;
        case'-':
        printf("result :%.2f\n",n1-n2);
        break;
       case'*':
       printf("result:%.2f\n",n1*n2);
       break;
       case'/':
       if(n2!=0)
       printf("result:%.2f\n",n1/n2);
     else
     printf("error:divisible by zero is not allow\n");
     break;
     default:
           printf("error:invalid operator\n");
    }
    return 0;
}