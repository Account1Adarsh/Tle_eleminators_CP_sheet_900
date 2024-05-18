#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') z++;
            else o++;
        }
        int k=min(z,o);
        if(k%2==1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
    return 0;
}