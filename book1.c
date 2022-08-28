#include<stdio.h>

struct book{
     char name[30];
};

int main(){
    struct book b[3];
    for(int i=0;i<3;i++){
        printf("Enter all details for student no: %d\n",i+1);
        scanf(" %s",b[i].name);
    }
    for(int i=0;i<3;i++){
        printf("Name:%s \n",b[i].name);
    }
    return 0;
}