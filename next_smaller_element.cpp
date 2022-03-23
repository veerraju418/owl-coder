#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>st;
        vector<int>v;
        st.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && arr[i]<=st.top()){
                st.pop();
            }
            if(!st.empty() && arr[i]>st.top()){
                v.push_back(st.top());
                st.push(arr[i]);
            }
            else{
                st.push(arr[i]);
                v.push_back(-1);
            }
        }
        reverse(v.begin(),v.end());
        return v;
}
