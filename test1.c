//Take a number (N) as a input form the user. write a program to find 
//the power of the number(N). Take another input form the user to find the power
#include<stdio.h>

int main(){

int n,res=1, power;
 
 printf("enter the number:");

scanf("%d",&n);

printf("enter the power:");
scanf("%d",&power);

for(int i=1; i<=power;i++){
    res=res*n;
}

printf("power is: %d \n",res);

    return 0;
}