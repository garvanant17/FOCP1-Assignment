#include<stdio.h>
int main(void){
    int num1, num2, i, hcf;
    printf("enter number 1: "); // taking 1st number
    scanf("%d", &num1);
    printf("enter 2nd number: "); // taking 2nd number
    scanf("%d", &num2);
    for(i=1; i<=num1 && i <= num2; i++){
        if (num1%i==0 && num2%i==0) // running loop to find remainder when number is divided by i
        hcf = i; // fixing value of i
    }
            printf("%d is the hcf of %d and %d", hcf, num1,num2);

}
