#include <stdio.h>
#include <stdlib.h>

int smallest(int arr[], int, int);
void selectionSort(int arr[], int);

int main(){
    int number;
    printf("\nEnter the number of elements: ");
    scanf("%d", &number);
    int arr[number];
    for(int i = 0; i < number; i++){
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, number);
    printf("\nThe sorted array: ");
    for(int i = 0; i < number; i++){
        printf("%d ", arr[i]);
    }
}

int smallest(int arr[], int current, int number){
    int position = current;
    int small = arr[current];
    for(int i = current + 1; i < number; i++){
        if(arr[i] < small){
            small = arr[i];
            position = i;
        }
    }
    return position;
}

void selectionSort(int arr[], int number){
    for(int i = 0; i < number; i++){
        int position = smallest(arr, i, number);
        int temp = arr[i];
        arr[i] = arr[position];
        arr[position] = temp;
    }
}


















