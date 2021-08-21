#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Printsubsets(int ind,int n,int a[],int sum,int k)
{
    if(ind==n)
    {
        if(sum%k==0)
        {
            return 1;
        }
        else{
            return 0;
        }
        
    }
    sum+=a[ind];
    int left=Printsubsets(ind+1,n,a,sum,k);
    sum-=a[ind];
    int right=Printsubsets(ind+1,n,a,sum,k);
    return left+right;
}

int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	//vector<int>ans;
	cout<<Printsubsets(0,n,a,0,k);
	return 0;
}