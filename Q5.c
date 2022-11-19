#include<stdio.h>
static int marks;
void fun(void);//function prototype
int main(){
    char name[20];
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter your marks:");
    scanf("%d",&marks);
    printf("%s your grade is: ",name);
    fun(); //function call
    return 0;
 }
void fun(void){
    if(marks<=39)printf("F");
    else if(marks<=49)printf("D");
    else if(marks<=59)printf("C");
    else if(marks<=69)printf("B");
    else if(marks<=100) printf("A");      
}

