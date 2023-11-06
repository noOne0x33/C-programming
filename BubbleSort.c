#include <stdio.h>

//function for printing array elements
void PrintArray(int arr[]){
    for(int i=0;i<sizeof(arr);i++){
        printf("%d ",arr[i]);
    }
}

//Implemented bubbleSort algorithm
void bubbleSort(int arr[]){
    int start = 0;
    int stop = sizeof(arr);
    for(int i=0;i<stop;i++){
        for(int j=0;j<stop-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted array: ");
    PrintArray(arr);
}

int main(){
    int arr[9] = {2,5,10,3,12,70,34,25,65};
    printf("Array Before Sorting: ");
    PrintArray(arr);
    bubbleSort(arr);
    return 0;
}