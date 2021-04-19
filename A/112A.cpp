#include<bits/stdc++.h>

using namespace std;

int main(){

    string s1,s2;
    int ans = 0;
    getline(cin,s1);
    getline(cin,s2);

    for (int i=0;i<s2.length();i++){
        if (tolower(s1[i])<tolower(s2[i])){ans = -1; break;}
        if (tolower(s1[i])>tolower(s2[i])){ans = 1; break;}
    }
    cout<<ans;
}