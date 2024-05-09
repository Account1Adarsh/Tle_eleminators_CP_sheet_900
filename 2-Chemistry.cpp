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
        string s;
        cin>>s;
        int arr[26];
        for(int i=0;i<26;i++) arr[i]=0;
        int a=int('a');
        for(int i=0;i<n;i++){
            arr[int(s[i]-a)]++;
        }
        int c=0;
        for(int i=0;i<26;i++) if(arr[i]%2!=0) c++;
        if(k>n){
            cout<<"No"<<endl;
        }
        else{
            if(k>=c){
                k-=c;
                c=0;
            }
            else{
                c=c-k;
                k=0;
            }
            
            if(c==0||c==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            
        }

    }
    return 0;
}
