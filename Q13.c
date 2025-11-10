#include <stdio.h>
int main(){
    int numbers[] = {34,64,85,99,74}, n;

    for(int i = 0; i<5; i++){
        if(numbers[i]>numbers[i-1] && numbers[i]>numbers[i+1])
        printf("%d is not smaller than its neighbours", numbers[i]);
    }
}
