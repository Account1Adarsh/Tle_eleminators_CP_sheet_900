#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
            int right=0;
            int left=0;
            int count=0;
            int i=0;
            while(i<n){
                int a=0;
                count=0;
                while(s[i]=='<' and i<n){
                    count++;
                    i++;
                    a=1;
                }
                
                if(count>right){
                    right=count;
                }
                if(a) {
                    i--;
                }
                i++;
            }
            i=0;
            count=0;
            while(i<n){
                int a=0;
                count=0;
                while(s[i]=='>' and i<n){
                    count++;
                    i++;
                    a=1;
                }
                if(count>left){
                    left=count;
                }
                if(a) i--;
                i++;
            }
            int k=0;
            k=1+max(right,left);
        cout<<k<<endl;
    }
    return 0;
}
