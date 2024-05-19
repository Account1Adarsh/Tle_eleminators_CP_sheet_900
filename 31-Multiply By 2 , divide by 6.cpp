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
        int count=0;
        while(n>1){
            while(n%6==0){
                n/=6;
                count++;
            }
            if(n%6!=0){
                while(n%3==0){
                    n/=3;
                    count+=2;
                }
            }
            if(n%3!=0){
                break;
            }
        }
        if(n==1){
            cout<<count<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}
