# include<bits/stdc++.h>

using namespace std;

int main(){

    int n,ans = 0;
    string s;

    cin>>n;
    cin.ignore();

    for (int i =0; i<n;i++){
        getline(cin,s);
        for (int j=0;j<s.length();j++){
            if (s[j] == '+'){ans++; break;}
            if (s[j] == '-'){ans--; break;} 
        }
        
    }
    cout<<ans;

}