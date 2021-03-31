//binary search in recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int low,int high,int x,int arr[])
{
    if(low>high)
    {
        return -1;
    }
    //to find mid 
    int mid=(low+high)>>1;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return BinarySearch(mid+1,high,x,arr);
    }
    else
    {
        return BinarySearch(low,mid-1,x,arr);
    }
}
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<BinarySearch(0,n-1,x,arr);
}
