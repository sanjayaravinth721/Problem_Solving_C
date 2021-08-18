#include<Stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    char a[100];
    scanf("%s",a);
     int e=0;
    int o=0;
    for(int i=0;a[i];i++){
        if(i%2==0){
            e=e+a[i];
        }
        else{
            o=o+a[i];
        }
    }

    printf("%d",abs(e-o));
}