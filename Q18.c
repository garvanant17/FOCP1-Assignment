#include <stdio.h>
int main(){
    int arr[] = {2,2,3,4,2,6},dup, count=0;
    printf("array: ");
    for(int i=0; i<6; i++){
        printf("%d ",arr[i]);
    }
        for(int i=0;i<6;i++){
            for(int j=i+1;j<6;j++)
            if(arr[i]==arr[j])
                {
                    printf("\nduplicates: %d \n", arr[i]);
                    count++;
                
            }
            
            
        }
        printf("\nthere are %d duplicates", count);
        if(count==0){
            printf("-1");
        }
}
