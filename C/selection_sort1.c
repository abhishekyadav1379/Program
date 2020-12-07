#include<stdio.h>

void main(){
    int arr[] = {64, 25, 12, 22, 11};
    int temp;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        temp = arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                arr[i]=arr[j];
                arr[j]=temp;
                // temp=arr[j];
            }
        }

    }
    for(int m=0;m<n;m++){
        printf("%d \t",arr[m]);
    }
}   