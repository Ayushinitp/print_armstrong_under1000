#include <stdio.h>
#include <math.h>
 int main(){
    int n, a ,digit,sum;
     for(n=1;n<=1000;n++){
       a=n;
       digit=0; sum=0;
       while(a>0){
        digit++;
        a=a/10;
       }
        a=n;
        while(a>0){
            sum=sum+ pow(a%10,digit);
            a=a/10;
        }
        if(sum==n)
        printf("%d\t",n);
     }
     return 0;
 }