#include<stdio.h>
int main (){
int last, num, n;
printf("enter number of elements: ");
scanf("%d", &n);
int arr[n];
for(int i=0;i<n; i++){ // running a loop to take array elements
    printf("enter %d number: ", i+1);
    scanf("%d", &arr[i]);
    }
    
        last = arr[n-1]; //giving the last element a variable "last"
        for (int i=n-1;i>0;i--){ // running a loop that goes from last element to first shifting to right
            arr[i]=arr[i-1];
        }
        arr[0]=last; // switching positions of first and last element
        printf("array after rotation is: ");
        for(int i =0;i<n;i++){
            printf("%d ", arr[i]); // printing array after rotation
        }
    


}
