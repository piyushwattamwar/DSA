#include<bits/stdc++.h>
using namespace std;
int slargest(int arr[],int n){
    int large = INT_MIN;
    int slarge = INT_MIN;
    for (int i = 0; i < n;i++){
        if(arr[i]>large){
            slarge = large;
            large = arr[i];
        }
        if(arr[i]>slarge && arr[i]!=large){
            slarge = arr[i];
        }
    }
    return slarge;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << slargest(arr, n);
    return 0;
}