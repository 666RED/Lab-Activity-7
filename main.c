#include <stdio.h>

void merge(int a[], int, int, int, int);
void mergeSort(int a[], int, int, int);

int main(){
    int number;
    printf("\nEnter the number of elements: ");
    scanf("%d", &number);
    int arr[number];
    for(int i = 0; i < number; i++){
        printf("\nEnter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, number - 1, number);
    printf("\nThe sorted array: ");
    for(int i = 0; i < number; i++){
        printf("%d ", arr[i]);
    }
}

void merge(int arr[], int begin, int middle, int end, int number){
    int i = begin, j = middle + 1, index = begin, temp[number], k;
    while((i <= middle) && (j <= end)){
        if(arr[i] < arr[j]){
            temp[index] = arr[i];
            i++;
        }else{
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if(i > middle){
        while(j <= end){
            temp[index] = arr[j];
            j++;
            index++;
        }
    }else{
        while(i <= middle){
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for(k = begin; k < index; k++){
        arr[k] = temp[k];
    }
}

void mergeSort(int arr[], int begin, int end, int number){
    int middle;
    if(begin < end){
        middle = (begin + end) / 2;
        mergeSort(arr, begin, middle, number);
        mergeSort(arr, middle + 1, end, number);
        merge(arr, begin, middle, end, number);
    }
}












