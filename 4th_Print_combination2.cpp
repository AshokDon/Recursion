//given an array a={1,2,4,6} and N=6 print all the combinations
//that gives sum as N, you can pick the index only one number of times
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n=5;
int a[5]={1,2,1,4,2};
int N=4;
void printcombinationsArray(int ind,int N,vector<int>&ds)
{
    if(n==ind)
    {
        if(N==0)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //implement logic
    //pick up the element
    if(a[ind]<=N)
    {
        ds.push_back(a[ind]);
        printcombinationsArray(ind+1,N-a[ind],ds);
        ds.pop_back();
    }
    printcombinationsArray(ind+1,N,ds);
}
int main() {
    vector<int>ans;
	printcombinationsArray(0,N,ans);
	return 0;
}
