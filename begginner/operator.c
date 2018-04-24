#include<stdio.h>
int main()
{
    int a,b,add,subtract,multiply,modulo;
    float divide;
    printf("enter the value og a,b\n");
    scanf("%d%d",&a,&b);
    add=a+b;
    subtract=a-b;
    multiply=a*b;
    modulo=a%b;
    divide=a/b;
    printf("sum=%d\n",add);
    printf("subtact=%d\n",subtract);
    printf("multiplicaion=%d\n",multiply);
    printf("modulo=%d\n",modulo);
    printf("division=%f\n",divide);
}
    
