// mergesort

# include<stdio.h>

int merge(int *arr, int s, int e ){
    int mid=(s+e)/2;
    int m=mid-s+1;
    int n=e-mid;

    int M[m], N[n];

    int x=s;
    for(int i=0; i<m; i++){
        M[i]=arr[x++];
    }
    x=mid+1;
    for(int i=0; i<n; i++){
        N[i]=arr[x++];
    }
    int i=0;
    int j=0;
    x=s;
    while(i<m && j<n){
        if(M[i]<N[j]){
            arr[x++]=M[i++];
        }
        else{
            arr[x++]=N[j++];
        }
    }
    while(i<m){
        arr[x++]=M[i++];
    }
    while(j<n){
        arr[x++]=N[j++];
    }
}
void mergesort(int *arr, int s, int e){
    int mid=(s+e)/2;
    if(s>=e){
        return;
    }
    mergesort(arr, 0, mid);
    mergesort(arr,mid+1,e);
    
    merge(arr, s, e);
}

int main(){
    int n=5;
    int arr[]={21,34,12,54,21};

    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}