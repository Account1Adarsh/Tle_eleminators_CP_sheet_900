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
        int k=0;
        int j=n-1;
        int a=0,b=0,c=0,d=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                j=i;
                break;
            }
            k++;
        }
        a=k;
        b=k;
        for(int i=j-1;i>=0;i--){
            if(s[i]=='0'){
                break;
            }
            a++;
        }
        for(int i=j-1;i>=0;i--){
            if(s[i]=='5'){
                break;
            }
            b++;
        }
        j=n-1;
        k=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='5'){
                j=i;
                break;
            }
            k++;
        }
        //25 c
        c=k;
        for(int i=j-1;i>=0;i--){
            if(s[i]=='2'){
                break;
            }
            c++;
        }
        d=k;
        for(int i=j-1;i>=0;i--){
            if(s[i]=='7'){
                break;
            }
            d++;
        }
        int res=min(a,b);
        res=min(res,c);
        res=min(res,d);
        cout<<res<<endl; 

    }
    return 0;
}
