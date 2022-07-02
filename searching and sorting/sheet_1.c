#include<stdio.h>

int bSearch(int* arr, int s, int e, int key){
    if(s>=e){
        return 0;
    }
    int mid=(s+e)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return bSearch(arr, 0, mid, key);
    }else{
        return bSearch(arr, mid+1, e, key);
    }
}

int main(){
    int n,x;
    int Fcount=0, Lcount=0;
    scanf("%d %d", &n, &x);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int y = bSearch(arr, 0, n-1, x);
    int i=1;
    while(arr[y]==arr[y-i]){
        Fcount+=1;
        i++;
    }
    int j=1;
    while(arr[y]==arr[y+j]){
        Lcount+=1;
        j++;
    }
    int fo=y-Fcount;
    int lo=y+Lcount;

    printf("%d %d", fo, lo);
    
}