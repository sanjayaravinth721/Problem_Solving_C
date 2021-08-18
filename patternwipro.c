#include<stdio.h>
int main(){
    int n, row , col ,val=1;
    scanf("%d",&n);
    for(row=1;row<=n;row++){                                        
        printf(" \n");                                              
        for(col=1;col<=row;col++){                                   
            if(row%2==1){
                printf("%d ",val++);   //odd
            }
            else{
                printf("%d ",val--);   //even
            }
        }
        if(row%2==1){          //odd -> just adding row 
            val+=row;
        }
        else{
            val+=row+1;       //even  -> due to decreament the next row starting value is not coming , so we increament to 1
        }                     
    }
    return 0;
}

/*    | 1   2  3   4
-----------------------
   1  | 1
      |
   2  | 3   2
      |
   3  | 4   5  6
      |
   4  | 10  9   8  7
   */