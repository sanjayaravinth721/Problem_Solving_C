#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    char a[21][9]={
        "zero","one","two"
,"three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourten","fifteen","sixteen","seventen","eighteen","ninteen"};
    char tens[10][9]={" ","ten"
        "twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
    if(num>=0 && num<=19){
        printf("%s",a[num]);
    }
    else{
        printf("%s",tens[num/10]);
        if(num%10==0){
            printf(" only");
        }
        else{
            printf(" %sonly",tens[num/10]);
            if(num%10){
                printf("%s",a[num%10]);
            }
        }
    }
    if(num/100){
        printf("%shundred ",a[num/100]);
        if(num%100==0){
            printf(" only");
        }
        else{
            int r;
            r=num%100;
            if(r>=1 && r<=19){
                printf(" %s",a[r]);
            }
            else{
                printf(" %s",tens[num]);
            }
        }
    }
    else{
        printf(" %s",tens[num]);
        if(num%10){
            printf(" %s",a[num%10]);
        }
    }

}