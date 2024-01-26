#include<bits/stdc++.h>
using namespace std;
#define ll long long
void CombinationSum(int idx, int arr[], int n, int k, vector<int>&ds){
    //base case
    if(idx == n){
        if(k==0){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
            
        }
        return;

    }
    //recursive case
    //pick
    if(arr[idx] <= k){
        ds.push_back(arr[idx]);
        k = k - arr[idx];
        CombinationSum(idx,arr,n,k,ds);
        k = k + arr[idx];
        ds.pop_back();
    }
    //non pick
    CombinationSum(idx+1,arr,n,k,ds);

}
int main(){
    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    vector<int>ds;
    CombinationSum(0,arr,n,k,ds);
}
