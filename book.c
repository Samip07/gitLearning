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
        printf("Enter name for student no: %d\n",i+1);
        scanf("%s",&b[i].name);
         printf("Enter price for student no: %d\n",i+1);
        scanf("%f",&b[i].price);
        //  printf("Enter author name for student no: %d\n",i+1);
        //  scanf(" %s ",&b[i].author);
        //   printf("Enter date for student no: %d\n",i+1);
        // scanf(" %d%d%d ",&b[i].day,&b[i].month,&b[i].year);
    }
    for(int i=0;i<3;i++){
        printf("Name:%s \n Price:%f \n",b[i].name,b[i].price);
    }
    return 0;
}