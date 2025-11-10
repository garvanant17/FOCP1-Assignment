#include<stdio.h>
int main (){
    int arr[] = {4,6,2,9,43,72,2}, count = 0, prime;
    
    for(int i = 0; i<7; i++){ //running loop to see if number is greater than 2(number less than 2 are not prime)
        int num = arr[i]; 
        if(num<2)
        continue; 
        prime = 1; // assuming that the number is prime

        for(int j=2; j<num; j++)
        if(num%j==0){ // running the loop to divide the number and see if the remainder is 0 or not
            prime = 0; // if the remainder is 0, the number is not prime
            break; // stops the loop
        }
        if(prime==1)
        count++; 
    }
    printf("there are %d prime numbers", count);
}
