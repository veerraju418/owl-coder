#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=arr[i]+prefix[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    int q;
    cin>>q;
    for(int y=0;y<q;y++){
        int l,r;
        cin>>l>>r;
        if(l==0)
        {
            cout<<prefix[r]<<endl;
        }
        else{
            cout<<prefix[r]-prefix[l-1]<<endl;
        }
    }
    
}
