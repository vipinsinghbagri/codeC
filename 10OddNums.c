#include <stdio.h>
//printing 10 odd natural numbers in decreasing and increasing order by using while and foor loop...
int main() {
    int i,n=10;
    while(n>=1){
        printf("%d ",2*n-1);
        n--;
    }
    
    printf("\n");
    n = 10;
    for(i=1; i<=2*n-1; i+=2)
    printf("%d ",i);
    
    printf("\n");
    n = 10;
    i = 1;
    while(i<=2*n-1){
        printf("%d ",i);
        i+=2;
        }
        
    printf("\n");
    n=10;
    for(i=1; i<=n; i++){
        if(i%2!=0){
        printf("%d ",i);
        }
       if(i==n){
            for(i=i+1; i<2*n; i+=2)
            printf("%d ",i);
        }
        
    }

    return 0;
}
