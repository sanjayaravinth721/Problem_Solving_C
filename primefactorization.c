#include<stdio.h>
int main(){
    int num , div =2;
    scanf("%d",&num);
    while(num!=1){
        while(num%div==0){
            printf("%d",div);
            num = num/div;
        }
        div++;
    }
    return  0;
}