#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll d1,d2,d3;
        d1=b-a;
        d2=c-b;
        d3=c-a;
        if((b+d1)%c==0 and b+d1>0){
            cout<<"YES"<<endl;
        }
        else if((b-d2)%a==0 and b-d2>0){
            cout<<"YES"<<endl;
        }
        else if(d3%2==0){
            d3/=2;
            if(((a+d3)%b==0 and a+d3>0)||((c-d3)%b==0 and c-d3>0)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}