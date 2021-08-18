#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a);
    int c=1;
    for(int i=0;a[i];i++){
        if(a[i]==a[i+1]){
            ++c;
        }
        else{
            printf("%c%d",a[i],c);
            c=1;
        }
    }
}