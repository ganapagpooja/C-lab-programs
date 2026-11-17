#include<stdio.h>
int main(void)
{
    float a,b;
    printf("enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("addition=%.2f\n",a+b);
    printf("sutraction=%.2f\n",a-b);
    printf("multiplication=%.2f\n",a*b);
    if(b!=0)
      printf("division=%.2f\n",a/b);
    else
      printf("division in not possible bucause the second number is zero.\n");
    return 0;
}    
