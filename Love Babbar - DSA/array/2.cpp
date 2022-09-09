
// max and min of an array

#include<bits/stdc++.h>
using namespace std;

void solve(int *arr, int n){
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0 ; i<n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min ){
            min = arr[i];
        }
    }

    cout << "The max number is : " << max << endl ;
    cout << "The min number is : " << min << endl ;

}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i =0 ; i<n; i++){
        cin >> arr[i];
    }

    solve(arr, n);
}