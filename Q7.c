#include <stdio.h>
float averageArray
(int boy [], int size){
    int sum, i;
    for (i = 0; i<size; i++)sum = sum + boy[i];
    return sum/size;
}

int main(){
    int i, capacity, number;
    float average;
    printf("How many numbers do you want to average: \n");
    scanf("%d", &capacity);
    int Numberlist[capacity];
    printf("Enter the numbers: \n");
    for (i + 0; i < capacity; i++){
        scanf("%d", &number);
        Numberlist[i] = number;
    }
    average = averageArray(Numberlist, capacity);
    printf("The average is %.2f\n", average);
    return 0;
} 