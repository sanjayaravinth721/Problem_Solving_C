#include<stdio.h>
#include<stdlib.h>

struct NODE{
    int data;
    struct NODE* next;
};

struct NODE* create(){
    struct NODE* newnode = (struct NODE*)malloc(sizeof(struct NODE));//100
    struct NODE* last;
    int x;
    scanf("%d",&x);
    newnode->data=x;
    last=newnode;
    last->next=newnode;
    scanf("%d",&x);
    while(x!=-1){
        struct NODE* temp=(struct NODE*)malloc(sizeof(struct NODE));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next=NULL;
        scanf("%d",&x);
    }
    return newnode;
}

void display(struct NODE* temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

int count(struct NODE* temp){
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void findMiddle(int count,struct NODE* temp){
    struct NODE* middle=temp;
    int m = count/2;
    for(int i=0;i<m;i++){
        middle=middle->next; //1 2 3 
    }
    printf("\nMiddle is =%d",middle->data);
}


int main(){
    struct NODE* temp= create();
    display(temp);
    int c = count(temp);
    printf("\ncount is =%d",c);
    findMiddle(c,temp);
}
