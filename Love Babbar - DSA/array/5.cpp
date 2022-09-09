//  taking all negative elements to the left side of arr
// done using two methods 
// method 1: using different vectors to storre neg and pos and then combine them\
//  method 2: two pointer approach

#include<bits/stdc++.h>
using namespace std;

void solve(int *arr, int n){
    vector<int>neg;
    vector<int>pos;
    vector<int>all;

    for(int i = 0; i<n; i++){
        if(arr[i] >= 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    for (auto elem : neg) {
        all.push_back(elem);
    }
    for (auto elem : pos) {
        all.push_back(elem);
    }
    for (auto elem : all) {
        cout << elem << " ";
    }
}

void solve_2p(int* arr, int n){
    int i = 0, temp;
    int j = n-1;

    while(i <= j){
        if (arr[i] < 0){
            i++;
        }
        else if (arr[i] > 0){
            if (arr[j] >= 0){
                j--;
            }
            else{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;

            }
        }
    }
    for(int i =0; i<n ;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    solve_2p(arr, n);
}