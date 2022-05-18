#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int);

int main(){
    int number;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &number);
    int arr[number];
    for(int i = 0; i < number; i++){
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, number);
    printf("The sorted array: ");
    for(int i = 0; i < number; i++){
        printf("%d ", arr[i]);
    }
}

void insertionSort(int arr[], int number){
    for(int i = 0; i < number; i++){
        int temp = arr[i];
        int j = i - 1;
        while((temp <  arr[j]) && (j >= 0)){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
