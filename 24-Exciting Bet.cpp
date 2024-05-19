#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll d=abs(a-b);
        ll k=min(a,b);
        ll p=max(a,b);
        
        if(a==b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll c=k%d;
        cout<<d<<" "<<min(c,d-c)<<endl;


    }
    return 0;
}   
