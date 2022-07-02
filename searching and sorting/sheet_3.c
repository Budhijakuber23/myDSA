// Mmergesort
# include<stdio.h>

int bSearch(int* arr, int s, int e, int key){
    if(s>=e){
        return -1;
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

int merge(int *arr, int *narr, int s, int e ){
    int mid=(s+e)/2;
    int m=mid-s+1;
    int n=e-mid;

    int M[m],A[m], N[n], B[n];

    int x=s;
    for(int i=0; i<m; i++){
        M[i]=arr[x];
        A[i]=narr[x];
        x++;
    }
    x=mid+1;
    for(int i=0; i<n; i++){
        N[i]=arr[x];
        B[i]=narr[x];
        x++;
    }
    int i=0;
    int j=0;
    x=s;
    while(i<m && j<n){
        if(M[i]<N[j]){
            arr[x]=M[i];
            narr[x]=A[i];
            x++;
            i++;
        }
        else{
            arr[x]=N[j];
            narr[x]=B[j];
            x++;
            j++;
        }
    }
    while(i<m){
        arr[x]=M[i];
        narr[x]=A[i];
        x++;
        i++;
    }
    while(j<n){
        arr[x]=N[j];
        narr[x]=B[j];
        x++;
        j++;
    }
}
void mergesort(int *arr, int *narr, int s, int e){
    int mid=(s+e)/2;
    if(s>=e){
        return;
    }
    mergesort(arr, narr, 0, mid);
    mergesort(arr, narr, mid+1,e);
    
    merge(arr, narr, s, e);
}

int main(){
    int n, key;
    scanf("%d", &n);
    int arr[n];
    int narr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        narr[i]=i;
    }
    scanf("%d", &key);
    mergesort(arr,narr,0,n-1);
    int k=bSearch(arr,0,n-1, key);
    if(k!=-1){
        printf("%d", narr[k]);
    }
    else{
        print("%d", -1);
    }
}