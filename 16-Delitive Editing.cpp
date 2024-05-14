#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        int n1=s.size();
        int n2=t.size();
        if(n1<n2){
            cout<<"No"<<endl;
            continue; 
        }
        else{
            int i=n1-1;
            int j=n2-1;
            int arr[26];
            for(int i=0;i<26;i++) arr[i]=0;
            for(int i=0;i<n2;i++){
                arr[t[i]-'A']++;
            }
            int end=n1-1;
            int start=-1;
            for(int i=n1-1;i>=0 and j>=0;i--){
                    if(s[i]==t[j]){
                        if(j==n2-1){
                            end=i;
                        }
                        if(j==0) start=i;
                        j--;
                    }
            }
            if(start==-1){
                cout<<"No"<<endl;
            }
            else{
                bool flag=false;
                for(int i=end+1;i<n1;i++){
                    if(arr[s[i]-'A']>0){
                        flag=true;
                        break;
                    }
                }
                if(flag){
                    cout<<"No"<<endl;
                }
                else{
                    bool jhanda=0;
                    set<char> set1;
                    int u=n2-1;
                    for(int i=end;i>=start;i--){
                        if(t[u]==s[i]){
                            if(set1.find(s[i])==set1.end()){
                                u--;
                            }
                            else{
                                jhanda=true;
                                break;
                            }
                        }
                        else{
                            set1.insert(s[i]);
                        }
                    }
                    if(jhanda==false){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}
