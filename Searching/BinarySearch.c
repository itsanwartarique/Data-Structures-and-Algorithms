#include<stdio.h>
//Binary search using iteration
int bSearchUsI(int arr[],int lower,int upper,int element){

    while(lower<=upper){
        int mid = (upper+lower)/2;
        if(element == arr[mid]){
            return mid;
        }
        else if(element> arr[mid]){
            lower = mid +1;
        }
        else{
            upper = mid-1;
        }
    }
    return -1;
}

//Binary search using Recursion
int bSearchUsR(int arr[],int lower,int upper,int element){

    if(lower<=upper){
        int mid = (upper+lower)/2;
        if(element == arr[mid]){
            return mid;
        }
        else if(element> arr[mid]){
            return bSearchUsR(arr,mid+1,upper,element);
        }
        else{
            return bSearchUsR(arr,lower,mid-1,element);
        }
    }
    return -1;
}

//Driver code
int main(){
  int element,result1,result2,length,upper;
  int array[]={1,45,87,94,100};
  length=sizeof(array)/4;
  upper=length-1;
  printf("Enter an element you want to search: ");
  scanf("%d",&element);

  printf("\nBinary search result using Iteration:\n");
  result1=bSearchUsI(array,0,upper,element);
  (result1 != -1)? printf("Voila, element Found at the index : %d",result1):printf("Sorry, element not Found!!!");

  printf("\n");

  printf("\nBinary search result using Iteration\n");
  result2=bSearchUsR(array,0,upper,element);
  (result2 != -1)? printf("Voila, element Found at the index : %d",result2):printf("Sorry, element not Found!!!");

  return 0;
}

