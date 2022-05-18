#include <stdio.h>
#include <stdlib.h>

int main(){
    int number;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &number);
    int arr[number];
    for(int i = 0; i < number; i++){
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < number; i++){
        for(int j = 0; j < number - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted array in ascending order is: ");
    for(int i = 0; i < number; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
