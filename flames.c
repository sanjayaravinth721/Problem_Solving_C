#include<stdio.h>
#include<string.h>
int main(){
    char a[1000],b[1000],f[]="flames";
    scanf("%s %s",a,b);
    int lena,lenb,i,j,count=0,k=0;
    lena=strlen(a);
    lenb=strlen(b);
    for(i=0;i<lena;i++){
        for(j=0;j<lenb;j++){
            if(a[i]==b[j]){
                a[i]=-1;
                b[j]=-1;
                count+=2;
                break;
            }
        }
    }
    int rem = lena+lenb-count;

    //flames

    for(i=1;i<=5;i++){
        count = 0;
        while(count!=rem){
            if(f[k%6]!=-1){      // %6 is for cyclic 
                count++;
            k++;
            }
        f[(k-1)%6]=-1;
        }
    }

    //printing the last character which is not equal to -1
    for(k=0;k<6;k++){
        if(f[k]!=-1){
            printf("%c",f[k]);
            }
             
        }
    return 0;
}