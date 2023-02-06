#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
bool isSorted(int *a , int n){
    if(n==0 or n==1)return true;
    if(a[0] < a[1] and isSorted(a+1,n-1))return true;
    return false;
}
int FirstOccrence(int *a , int n , int key){
    if(n==0)return -1;
    if(a[0]==key){
        return 0;
    }
    int ind = FirstOccrence(a+1,n-1,key);
        if(ind==-1)return -1;
    
    return ind+1;
}
int LastOccrence(int *a , int n , int key){
    if(n==0)return -1;
    int ind = LastOccrence(a+1,n-1,key);
    if(ind == -1){
        if(a[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    return ind+1;
}
void allOccurence(int *a , int n , int key,int i){
    if(i == n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ";
    }
    allOccurence(a,n,key,i+1);
}
int AllOcurance(int *a,int i, int n, int key, int *out,int j){
    if(i==n){
        return j;
    }
    if(a[i]==key){
        out[j]=i;
        return AllOcurance(a,i+1,n,key,out,j+1);
    }
    return AllOcurance(a,i+1,n,key,out,j);
}
int main(){
    TakeInput();
    int arr[]={1,2,7,4,5,7,6};
    int n = sizeof(arr)/sizeof(int);
    int key=7;
    allOccurence(arr,n,key,0);


}






