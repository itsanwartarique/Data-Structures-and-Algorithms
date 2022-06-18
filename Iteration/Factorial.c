#include<Stdio.h>

//Factorial using Iteration
int Fact(int num){
    int fac = 1;
    for(int i=num; i>0;i--){
        fac*=i;
    }
    return fac;
}

//Driver code
int main(){
 int num;
 printf("Enter any no: ");
 scanf("%d",&num); //Input from user
 int result = Fact(num); //Function call
 printf("Factorial of %d is: %d \n",num,result);
 return 0;
}
