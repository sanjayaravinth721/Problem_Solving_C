#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    printf("enter the str: ");
    scanf("%s",a);
    for (int  i = 1; i<strlen(a); i+=2){
            for (int k=1;k<=a[i]-'0';k++){
                printf("%c",a[i-1]);
        }  
    }
    return 0;
}