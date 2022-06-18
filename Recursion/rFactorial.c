#include<Stdio.h>

//Factorial using recursion
int Fact(int num){
    //base case
    if(num == 0){
        return 1;
    }
    return num * Fact(num-1); //Recursive call
}

//Driver code
int main(){
 int num;
 printf("Enter any no: ");
 scanf("%d",&num); //Input from user
 int result= Fact(num); //Function call
 printf("Factorial of %d is: %d \n",num,result);
 return 0;
}
