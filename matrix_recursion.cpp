#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int n=3;
int m=3;
int arr[3][3]={{1,1,0},{1,1,1},{1,0,1}};
void printpaths(int i,int j,vector<pair<int,int>>&paths)
{
    //check for invalid paths and stop going
    if(i>=n || j>=m || arr[i][j]==0)
    {
        return;
    }
    if(i==n-1 && j==m-1)
    {
        cout<<"0 0->";
        for(auto it:paths)
        {
            cout<<it.first<<" "<<it.second<<"->";
        }
        cout<<n-1<<" "<<m-1<<endl;
    }
    //move down
    paths.push_back({i+1,j});
    printpaths(i+1,j,paths);
    paths.pop_back();

    //move right
    paths.push_back({i,j+1});
    printpaths(i,j+1,paths);
    paths.pop_back();
}

int main() {
    vector<pair<int,int>>paths;
    printpaths(0,0,paths);
	return 0;
}
