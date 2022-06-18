#include<stdio.h>

//Fibonacci Series Using Iteration
int iFib(int num){
    int first=0,second=1,third;
    for(int i=1;i<num;i++){
        third = first + second;
        first = second;
        second = third;
    }
    return third;

}
//Driver code
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num); //Input from user
    int result=iFib(num); //Function call
    printf("Fibonacci Series of %d Using Iteration is : %d \n",num,result);
    return 0;
}

