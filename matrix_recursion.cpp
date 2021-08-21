#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void FindPaths(int i,int j,int n,int m,int *mat,string s)

{
    if(i>=n || j>=m)
    {
        return;
    }
    if(i==n-1 && j==m-1)
    {
        cout<<s<<"\n";
        return;
    }
    s+="D";
    FindPaths(i+1,j,n,m,mat,s);
    s.pop_back();
    
    s+="R";
    FindPaths(i,j+1,n,m,mat,s);
    s.pop_back();
}

int main() {
	int n,m;
	cin>>n>>m;
	int mat[n][m];
	memset(mat,0,sizeof mat);
	string s="";
	FindPaths(0,0,n,m,*mat,s);
	return 0;
}