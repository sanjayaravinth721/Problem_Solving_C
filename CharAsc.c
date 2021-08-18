#include<stdio.h>

int main(){
    char b[100];
    scanf("%s",b);
     for(int i=0;b[i];i++){
         for(int j=i+1;b[j];j++){
            if(b[i]>b[j]){
            char temp= b[i];
            b[i]=b[j];
            b[j]=temp;
        }
      }
    }
    printf("%s",b);

}