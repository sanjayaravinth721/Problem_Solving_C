#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    printf("enter the str: ");
    scanf("%s",a);
    int pos,tra,count=0;
    for(pos=tra=0;a[tra]!='\0';tra++){
        if(a[pos]==a[tra]){
            count++;
        }
        else{
            printf("%c%d",a[pos],count);
            pos=tra;
            count=1;
        }
    }
    printf("%c%d",a[pos],count);
    return 0;
}