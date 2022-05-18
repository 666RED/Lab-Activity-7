#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int, int);
void quickSort(int arr[], int, int);

int main(){
   int number;
    printf("\nEnter the number of elements: ");
    scanf("%d", &number);
    int arr[number];
    for(int i = 0; i < number; i++){
        printf("\nEnter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, number - 1);
    printf("\nThe sorted array: ");
    for(int i = 0; i < number; i++){
        printf("%d ", arr[i]);
    }
}

int partition(int arr[], int begin, int end){
    int left, right, temp, loc, flag;
    loc = left = begin;
    right = end;
    flag = 0;
    while(flag != 1){
        while((arr[loc] <= arr[right]) && (loc != right)){
            right--;
        }
        if(loc == right){
            flag = 1;
        }else if(arr[loc] > arr[right]){
            temp = arr[loc];
            arr[loc] = arr[right];
            arr[right] = temp;
            loc = right;
        }
        if(flag != 1){
            while((arr[loc] >= arr[left]) && (loc != left)){
                left++;
            }
            if(loc == left){
                flag = 1;
            }else if(arr[loc] < arr[left]){
                temp = arr[loc];
                arr[loc] = arr[left];
                arr[left] = temp;
                loc = left;
            }
        }
    }
    return loc;
}
void quickSort(int arr[], int begin, int end){
    int loc;
    if(begin < end){
        loc = partition(arr, begin, end);
        quickSort(arr, begin, loc - 1);
        quickSort(arr, loc + 1, end);
    }
}










