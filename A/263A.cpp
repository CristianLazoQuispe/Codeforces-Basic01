#include<bits/stdc++.h>

using namespace std;

int main(){

    int x,y,num;
    for (int i =0;i<5;i++){
        for (int j =0;j<5;j++){
            cin>>num;
            if (num==1){x=i;y=j;break;}
        }    
    }
    cout<<(abs(x-2)+abs(y-2));
}