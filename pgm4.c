#include<stdio.h>
int main(void)
{
    float a,b,c,largest;
    printf("enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    if(a<=b&&b>c)
       largest=a;
    else if(a>=a&&b>=c)
       largest=b;
    else
        largest=c;
    printf("largest=%.2f\n",largest);
    return 0;          
}