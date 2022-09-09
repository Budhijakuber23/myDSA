//finding kth max and kth min
// in this solution i have assumed that the array goiven as input is sorted 
// if the array wasn't sorted then we need to sort it....



#include<bits/stdc++.h>

using namespace std;



int solve_max(int *arr, int k, int n){
    int count = 0;
    for ( int i = n - 1 ; i > 0; i--){
        if (count == k-1){
            int ans = arr[i];
            return ans;
        }
        else{
            count++;
        }

    }
}

int solve_min(int *arr, int k, int n){
    int count = 0;
    for ( int i = 0 ; i < n; i++){
        if (count == k-1){
            int ans = arr[i];
            return ans;
        }
        else{
            count++;
        }

    }
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout << solve_min(arr, k, n) << endl;
    cout << solve_max(arr, k, n) << endl;
}