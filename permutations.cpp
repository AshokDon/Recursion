#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
string s="abc";
int n=s.size();
void printPermituations(string ss,int frq[])
{

    if(s.size()==ss.size())
    {
        cout<<ss<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(frq[i]==0)
        {
            frq[i]=1;
            printPermituations(ss+s[i],frq);
            frq[i]=0;
        }
    }
}
int main() {
	string ss="";
	int ans[n]={0};

	printPermituations(ss,ans);
	return 0;
}
