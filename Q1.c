#include <stdio.h>
int main(void){
    int num, new_num, sum=0, remainder, fixed_num;
    printf("enter a number: "); //taking input
scanf("%d", &num);
fixed_num = num; //using a variable to store the user input because it
                    // will be changed in the later code
    while(num>0){
        new_num = num%10; //getting the last digit
        sum = sum + (new_num*new_num*new_num); //adding the cube of last digit to the sum
        num = num/10; // removing the last digit from the input

    }
    if (fixed_num == sum)
    printf("it is an amstrong number");
    else
    printf("it is not an amstrong number");
}
