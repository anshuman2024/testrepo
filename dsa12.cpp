#include<bits/stdc++.h>
using namespace std;
#define ll long long  
void solve(){

}

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
         int t; cin>> t; string s ;getline(cin ,s);while (t--){
             string s; getline(cin ,s);
             int n=s.size();
             for (int i =0;i<n;i++){
                 if (s[i]>='a'&&s[i]<='z')
                 s[i]=toupper(s[i]);
                 else if (s[i]>='A'&&s[i]<='Z')
                 s[i]=tolower(s[i]);
             }
             cout << s<<"\n";

         }

    }
