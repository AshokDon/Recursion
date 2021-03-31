//recursion concept
//factorial of n
#include<iostream>
#include<bits/stdc++.h>
int n;
using namespace std;
int factorial(int i)
{
    if(i>=n)
    {
        return n;
    }
    else
    {
        return i*factorial(i+1);
    }
}
//reverse the array[2,3,1,4]
void ArrayReverse(int l,int r,int a[])
{
    if(l>=r)
    {
        return;
    }
    swap(a[l],a[r]);
    return ArrayReverse(l+1,r-1,a);
}
//check the given string is palindrome or not
bool CheckPalindrome(int i,int n,string s)
{
    if(i>=n/2)
    {
        return true;
    }
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return CheckPalindrome(i+1,n,s);
}
int main()
{
    //int n=4;
    //int i=1;
    //int a[n]={2,3,1,4};
    //ArrayReverse(0,n-1,a);
    /*for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<factorial(i);*/
    string s="MADAM";
    int n=5;
    cout<<CheckPalindrome(0,n,s);
}
