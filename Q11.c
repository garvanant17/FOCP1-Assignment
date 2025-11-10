#include <stdio.h>
int main(){
    int arr[6]= {5, 6 , 2, 4, 8, 9}, i, even_count, odd_count, even_array[6], odd_array[6]; 
     
    for(i=0;i<6;i++){
        if(arr[i]%2==0)
        printf("%d is an even number\n", i+1);
                even_count++;

    }
    printf(even_array[even_count]);
