#include<stdio.h>
void  bubbleSort(int arr[],int size){
    for(int i=0; i< size-1;i++){
        for(int j=0; j< size-1; j++){
            //check if ith element is greater than (i+1)th element or not if it is then swap
            if(arr[j]>arr[j+1]){
            //swap
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}
int main(){
   int array[]={190,45,187,94,100};
   int length = sizeof(array)/4;
   printf("Original Array:");
   for(int i=0;i<length;i++){
      printf("%d ",array[i]);
   }
   bubbleSort(array,length);
   printf("\nSorted Array:");
   for(int i=0;i<length;i++){
      printf("%d ",array[i]);
   }
   return 0;
}
