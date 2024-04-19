#include<stdio.h>

// insertion sort
void insertion(int *arr, int size){
    for(int i=1; i<size; i++){
        int j=i;
        while (j>0 && arr[j-1] > arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

void bubble(int *arr, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void selection(int *arr, int size){
    
}
void printArray(int * arr, int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {9, 3, 34, 21, 15, 34, 88, 2, 11, 20, 10, 16, 3, 7, 22, 13, 29, 4, 11, 8, 13, 1, 6, 14, 17, 5, 18, 19, 16, 2, 12, 20};
    int size = (sizeof(arr)/sizeof(arr[0]))-1;
    // int size = 40;
    printf("Size of this Array: %d\n", size);
    printArray(arr, size);

    // printf("\n");
    // printf("Insertion Sort: \n");
    // insertion(arr, size);
    // printArray(arr, size);


    printf("\n");
    printf("Bubble Sort: \n");
    insertion(arr, size);
    printArray(arr, size);






}