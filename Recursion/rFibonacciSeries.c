#include<stdio.h>
//Fibonacci series using recursion
int rFib(int num){
    //base case
    if(num== 0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    return rFib(num-1)+rFib(num-2); //Recursive call
}
//Driver code
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num); //Input from user
    int result=rFib(num); //Function call
    printf("Fibonacci Series of %d is : %d \n",num,result);
    return 0;
}
