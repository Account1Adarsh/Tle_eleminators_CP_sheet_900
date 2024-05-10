#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll m=(n+1)*n/2;
        ll p=k*(k+1)/2;
        k=n-k;
        m-=k*(k+1)/2;
        if(k>n||x<p||x>m){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;  
    }
    return 0;
}