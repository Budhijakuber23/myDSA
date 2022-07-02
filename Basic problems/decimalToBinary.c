#include<stdio.h>

void decimalToBinary(){
    int x;
    int arr[20];
    
    for(int i=0; i<20; i++){
        arr[i]=-1;
    }
    int count=0;
    int i=0;
    while(n>1){
        //
        x=n%2;
        n=n/2;
        arr[i]=x;
        i++;
    }
    if(n==1){
        arr[i]=1;
    }
    int j=0;
    while(arr[j]!=-1){
        count++;
        j++;
    }
    for(int k=0; k<count/2; k++){
        int temp = arr[k];
        arr[k]=arr[count-k-1];
        arr[count-k-1]=temp;
    }
    for(int i=0; i<count; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    decimalToBinary(n);
}