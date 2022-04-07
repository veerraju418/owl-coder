#include<bits/stdc++.h>
using namespace std;
vector<int>dp(3,-1);
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fibo(n-1)+fibo(n-2);
    return dp[n];
    
}
int main(){
    
    
   cout<<fibo(2);
    
}
