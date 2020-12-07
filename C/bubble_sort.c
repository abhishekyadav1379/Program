#include<stdio.h>
// #include<string.h>


void main(){
    int arr[] = {12, 11, 13, 5, 6,8,8,40,12};
    int pos=0,temp,temp2;
    int n = sizeof(arr)/sizeof(arr[0]);
    while(pos!=(n-1)){
        pos=0;
    for(int i=0;i<n-1;i++){
        temp = arr[i];
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        else
        {
            pos++;
        }
    }
    
    
    }
        
    for(int k=0;k<n;k++)
    {
        printf("%d \n",arr[k]);
    }
}
        
    