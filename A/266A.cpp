# include<bits/stdc++.h>

using namespace std;

int main(){
    int n,cnt=0;
    string s;
    char back;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    back = (char) s[0];
    for (int i=1;i<s.length();i++){
        if(s[i] == back){cnt+=1;}
        else{back=s[i];}
    }
    cout<<cnt;
}