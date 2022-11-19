#include<stdio.h>
#define BASESALARY 5000
int main(){
    
    float sales, commission, salary;
    for(;;)/*ininite loop*/{
        printf("Enter sales in SHILLINGS(-1 to end):");
        scanf("%f", &sales);
        if(sales < 0)/*terminates the program cause it terminates the main function*/{
            return 0;
        }
        commission = 0.09*sales;
        salary = commission + BASESALARY;
        printf("Salary is:KSh%f/=\n",salary);
    }
    return 0;
}