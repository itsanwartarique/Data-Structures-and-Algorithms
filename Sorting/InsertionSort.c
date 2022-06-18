#include<stdio.h>
void insertionSort(int arr[],int size){
     int i,j,h;
     for(i=1;i<size;i++){
        j=i-1;
        h=arr[i];
        while(j>-1 && arr[j]>h){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=h;
     }
}

int main(){
   int array[]={190,45,187,94,100};
   int length = sizeof(array)/4;
   printf("Original Array:");
   for(int i=0;i<length;i++){
      printf("%d ",array[i]);
   }
   insertionSort(array,length);
   printf("\nSorted Array:");
   for(int i=0;i<length;i++){
      printf("%d ",array[i]);
   }
   return 0;
}


