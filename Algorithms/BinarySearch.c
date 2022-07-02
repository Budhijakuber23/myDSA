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