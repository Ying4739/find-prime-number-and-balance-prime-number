#include <stdio.h>

int main()
{
    float num[10000];
    int a, b=2, c;
    int times=0;
    int loop=0;
    int balance;
    
    printf("Input Value\n");
    scanf("%d", &a);
    if(b>=a){
        printf("ERROR");
    }
    for(b=2;b<=a;b++){
        times=0;
        for(c=2;c<=b;c++){
         if(b%c == 0){
            times++;
         }}
        if(times==1){
            loop++;
            num[loop]=b;
            printf("Prime Number[%d]=%2.0f\n", loop, num[loop]);
        }
    }
    for(balance=1;balance<=loop;balance++){
        if((num[balance]+num[balance+2])/2==num[balance+1])
        printf("Balance Prime Number %2.0f = (%2.0f + %2.0f ) / 2\n", num[balance+1], num[balance], num[balance+2]);
    }
    return 0;
}
