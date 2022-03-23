#include<bits/stdc++.h>
using namespace std;
int main(){
	std::stack<pair<int,int>>st;
        int n=temperatures.size();
        vector<int>v;
        st.push({temperatures[n-1],n-1});
        v.push_back(0);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && temperatures[i]>=st.top().first){
                st.pop();
            }
            if(!st.empty() && temperatures[i]<st.top().first){
                int ind=st.top().second;
                int res=ind-i;
                st.push({temperatures[i],i});
                v.push_back(res);
            }
            else{
                st.push({temperatures[i],i});
                v.push_back(0);
            }
        }
        reverse(v.begin(),v.end());
        return v;
}
