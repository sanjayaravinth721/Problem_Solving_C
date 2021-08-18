#include<stdio.h>
int main(){
    long long  int num , k , dig , count=0;
    scanf("ll%d %lld ", &num,  &k);
    while(num){
        dig = num%10;
        if(dig!=k){
            count++;
        }
        num = num/10;
    }
    printf("%lld",count);
    return 0;

}