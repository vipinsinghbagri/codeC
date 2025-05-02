#include<stdio.h>
void main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("%d",a);
    if(a&1) //last bit of an even in binary is always ZERO and for odd it's ONE
    printf(" is Odd"); //1 True
    else
     printf(" is Even");  //0 False
}
