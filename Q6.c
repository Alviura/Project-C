#include<stdio.h>
int main(){
    int farh; 
    float cels;
    printf("Farhenheit\tCelcius\n");
    for(farh = 0; farh<=212; farh++){
        cels = 5.0/9.0*(farh-32);
        printf("%10d ", farh);
        printf("%++10.3f\n", cels);
    }  
return 0;    
}
