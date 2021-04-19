# include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt1=0,cnt2=0,cnt3=0;
    string s1;
    getline(cin,s1);
    for (int i=0;i<(s1.length()+1)/2;i++){
        if (s1[2*i] == '1'){cnt1+=1;}
        else if (s1[2*i] == '2'){cnt2+=1;}
        else {cnt3+=1;}
    }
    for (int i=0;i<cnt1;i++) { (i !=cnt1-1) ? cout<<1<<"+" : cout<<1;}
    if (cnt1>0 && cnt2>0){cout<<"+";}
    for (int i=0;i<cnt2;i++) { (i !=cnt2-1) ? cout<<2<<"+" : cout<<2;}
    if ((cnt1>0 || cnt2>0) && cnt3>0){cout<<"+";}
    for (int i=0;i<cnt3;i++) { (i !=cnt3-1) ? cout<<3<<"+" : cout<<3;}    
}