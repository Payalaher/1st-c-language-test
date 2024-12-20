//Take a number (N) as a input form the user. write a program to find the sum of 
//the odd numbers from 0 to N
#include<stdio.h>
 int main(){

int n;

int sum=0;

printf("enter the number:");

scanf("%d",&n);

for(int i=1;i<=n;i++){

if(i%2!=0){
    sum = sum +i;
  
}

}

  printf("the sum is %d",sum);

return 0;

 }