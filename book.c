#include<stdio.h>

struct book{
     char name[30];
     float price;
     char author[30];
     int day;
     int month;
     int year;
};

int main(){
    struct book b[3];
    for(int i=0;i<3;i++){
        printf("Enter all details for student no: %d\n",i+1);
        scanf(" %s%f",b[i].name,b[i].price);
    }
    for(int i=0;i<3;i++){
        printf("Name:%s \n Price:%f",b[i].name,b[i].price);
    }
    return 0;
}