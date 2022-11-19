#include<stdio.h>
int main(){
    int num1;
    int no1, no2, no3, no4, no5;
    printf("Enter number:");
    scanf("%d",&num1);
    no1 = num1/10000;
    no2 = (num1-no1*10000)/1000;
    no3 = (num1 - ((num1/1000)*1000))/100;
    no4 =(num1 -((num1/100)*100))/10;
    no5 =(num1 - ((num1/10)*10))/1;
    printf("%d %d %d %d %d", no1, no2, no3, no4, no5);
    return 0;
}
