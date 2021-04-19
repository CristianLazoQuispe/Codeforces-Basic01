#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt = 0,n,k,a,maxi=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        if (i+1 == k) maxi = a;
        if (a>=maxi && a>0) cnt+=1;
    }
    cout<<cnt<<endl;

}