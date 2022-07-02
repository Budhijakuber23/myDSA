#include<stdio.h>

int len(char* arr){
    int i;
    while(arr[i]!='\0'){
        i++;
    }
    return i;
}
int power(int a, int b){
    int sol=1;
    for(int i=0; i<b; i++){
        sol*=a;
    }
    return sol;
}

void printer(char* arr, int n){
    for(int i=0; i<n; i++){
        printf("%c", arr[i]);
    }
}


int main(){
    char arr[20];
    gets(arr);
    int ans=0;
    int n=len(arr);
    int mid=n/2;
    for(int i=0; i<mid; i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    for(int i=0; i<n ; i++){
        if (arr[i]=='1'){
            ans+=power(2,n-i-1);
        }
    }
    printf("%d ", ans);
}