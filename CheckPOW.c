#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int f=0;
    if(x==1){
        if(y==1){
        return 1;
    }
    return 0;
    }
    
    for(int i=0;i<y;i++){
        if((x*i+x)==y){
            f=1;
            break;
        }
        else{
            f=0;
        }
    }
    
    if(f==1){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
}