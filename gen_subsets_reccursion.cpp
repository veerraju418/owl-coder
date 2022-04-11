//generate subsequences or subsets using reccursion
#include<bits/stdc++.h>
using namespace std;
void gen_subsets(int ind,int n,vector<int>&v,int arr[]){
    if(ind==n){
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[ind]);
    gen_subsets(ind+1,n,v,arr);
    v.pop_back();
    
    gen_subsets(ind+1,n,v,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    gen_subsets(0,n,v,arr);
    
}
