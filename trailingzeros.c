#include<stdio.h>
int main(){
    int num , ans=0;
    scanf("%d",&num);
    while(num){
        ans = ans + num/5;
        num = num/5;
    }
    printf("%d %s %d",ans ," trailing zero are there in ",100);
    return 1;
}