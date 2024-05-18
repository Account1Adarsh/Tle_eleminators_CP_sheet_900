#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n*k];
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }
        if(n==1){
            ll sum=0;
            for(int i=0;i<n*k;i++) sum+=arr[i];
            cout<<sum<<endl;
        }
        else if(n==2){
            ll sum=0;
            for(int i=0;i<n*k;i+=2){
                sum+=arr[i];
            }
            cout<<sum<<endl;
        }
        else if(n>2){
            int p=n-(n-1)/2;
            int i=n*k;
            ll sum=0;
            while(i>p){
                i-=p;
                sum+=arr[i];
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}