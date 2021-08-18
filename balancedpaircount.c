#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int count=0,i;
    scanf("%s",str);
    for(i =0 ;str[i]<='\0' && count!=-1 ;i++){
        if(str[i]=='('){
            count++;
        }
        else{
            count--;
        }
    }
    if(count==0){  
        printf("%d",strlen(str)/2);
        }

    else{
        printf("-1");
    }
    return 0;
}