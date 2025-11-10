#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6}, ele, ele_pos;
    printf("array before insertion: ");
    for(int i = 0 ; i<6; i++)
    printf("%d ", arr[i]);
    printf("\nwhich element do you want to insert: ");
    scanf("%d", &ele);
    printf("where do you want to insert this element(1. front, 2. middle, 3. back): ");
    scanf("%d", &ele_pos);
    if(ele_pos==1){
        for(int i=6;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0]= ele;

    
    }
    else if(ele_pos == 2){
        int between = 6/2;
        for(int i=6; i>between;i--){
            arr[i]=arr[i-1];
        }
        arr[between]= ele;
    }
    else if(ele_pos == 3){
        arr[6]=ele;
    }
    else{
        printf("invalid response");
        return 0;
        }

    printf("array after insertion: ");
    for(int i = 0; i<7; i++){
        printf("%d ", arr[i]);}
    }
