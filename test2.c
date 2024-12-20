//Take a single dimensional array as a input from the user.
//write a c program to find third largest element in the array.
#include<stdio.h>

void thrirdlargest(){
int n;

printf("enter the size of the array:");
scanf("%d",&n);

int arr[n];

printf("enter the element in the array:\n");

for(int i=0; i<n ; i++){
    scanf("%d",&arr[i]);
}

for(int i=0 ; i<n; i++){
    for(int j=i+1; j<n;j++){
        if(arr[i]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
}
    }

}

for(int i=0; i<n ; i++){

    printf("the element is %d\n",arr[i]);

}

printf("\n the3rd largest element in the arrays is %d\n", arr[n-3]);

}

int main(){

    thrirdlargest();

    return 0;
}