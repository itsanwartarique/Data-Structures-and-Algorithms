#include<stdio.h>
//Linear search
int lSearch(int arr[],int length,int element){
    for(int i=0; i<length;i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

//Driver code
int main(){
  int element,result,length;
  int array[]={1,45,87,94,100};
  length=sizeof(array)/4;
  printf("Enter an element you want to search: ");
  scanf("%d",&element);
  result=lSearch(array,length,element);
  (result != -1)?printf("Voila, element Found at the index : %d",result):printf("Sorry, element not Found!!!");

  return 0;
}
