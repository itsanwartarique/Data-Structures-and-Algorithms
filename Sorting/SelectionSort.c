#include<stdio.h>
//Note: In selection sort select the position first
//and then find the correct element for that position.
void selectionSort(int arr[],int size){
     int i,j,k;
     for(i=0;i<size-1;i++){
        for(j=k=i;j<size;j++){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i]= arr[k];
        arr[k]= temp;
     }
}

int main(){
   int array[]={190,45,187,94,100};
   int length = sizeof(array)/4;
   printf("Original Array:");
   for(int i=0;i<length;i++){
      printf("%d ",array[i]);
   }
   selectionSort(array,length);
   printf("\nSorted Array:");
   for(int i=0;i<length;i++){
      printf("%d ",array[i]);
   }
   return 0;
}

