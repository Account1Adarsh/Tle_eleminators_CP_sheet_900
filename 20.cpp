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
        int n=s.size();
        if(s[0]=='a'){
            if(s[0]!=s[n-1]){
                s[0]='b';
            }
        }
        else{
            if(s[0]!=s[n-1]){
                s[0]='a';
            }
        }
        cout<<s<<endl;

    }
    return 0;
}