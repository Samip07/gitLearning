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
    struct book b[2];
    for(int i=0;i<2;i++){
        printf("Details of student no:%d \n",i+1);
        scanf("%s%f%s%d%d%d",&b[i].name,&b[i].price,&b[i].author,&b[i].day,&b[i].month,&b[i].year);
    }
    for(int i=0;i<2;i++){
        printf("***Student number:%d",i+1);
        printf("Name:%s \n Price:%f \n Author:%s \n Date:%d/%d/%d \n",b[i].name,b[i].price,b[i].author,b[i].day,b[i].month,b[i].year);
    }
    return 0;
}