#include<stdio.h>
int main(){
    
    int i, sqr, cube;
    printf("No\tsquare\tcube\n");
        for(i = 0; i<=10; i++){
        sqr = i*i;
        cube = i*i*i;
        printf("%d\t%d\t\t%d\n",i ,sqr, cube);
    }
    return 0;
}