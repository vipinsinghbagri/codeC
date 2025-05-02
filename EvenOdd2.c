#include<stdio.h>
void main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("%d",a);
    if(a/2*2==a)
    printf(" is Even"); //1 True
    else
     printf(" is Odd");  //0 False
}
