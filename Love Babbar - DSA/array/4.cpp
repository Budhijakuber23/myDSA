// sorting 0s 1s and 2s without using sorting

#include<bits/stdc++.h>
#include<vector>
using namespace std;


void solve(int *arr, int n){
    vector<int >zero;
    vector<int >one;
    vector<int >two;

    for(int i = 0 ; i < n; i++){
        if (arr[i] == 0){
            zero.push_back(arr[i]);
        }
        else if (arr[i] == 1){
            one.push_back(arr[i]);
        }
        else{
            two.push_back(arr[i]);
        }
    }

    for (auto elem : zero) {
        cout << elem << " ";
    }
    for (auto elem : one) {
        cout << elem << " ";
    }
    for (auto elem : two) {
        cout << elem << " ";
    }

    return;
}


int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    solve(arr, n);
}