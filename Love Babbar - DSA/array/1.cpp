
// Reversing an array

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, temp;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;

    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main(){
    solve();
}