#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n>3 and (n%6==0||n%4==0||n%6==2||n%6==4||n%4==2)){
            ll resmin=0;
            resmin+=n/6;
            if(n%6==2||n%6==4) resmin+=1;
            ll resmax=0;
            resmax=n/4;
            cout<<resmin<<" "<<resmax<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
