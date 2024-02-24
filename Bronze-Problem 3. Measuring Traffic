// Source: https://usaco.guide/general/io

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void setIO(string s){
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

void helper(){
    int n{0};
    cin>>n;

    string type[100];
    int low[100];
    int high[100];
    int low_ans=-10000,high_ans=10000;
    
    for (int i=0;i<n;i++){
        string t;
        int l,h;
        cin>>t>>l>>h;
        type[i]=t;
        low[i]=l;
        high[i]=h;
    }

    for (int i=n-1;i>=0;i--){
        if (type[i]=="none"){
            low_ans = max(low_ans,low[i]);
            high_ans = min(high_ans,high[i]);
        } else if (type[i]=="off"){
            low_ans+=low[i];
            high_ans+=high[i];
        } else if (type[i]=="on"){
            low_ans-=high[i];
            high_ans-=low[i];
        }
    }
    cout<<max(0,low_ans)<<" "<<high_ans<<endl;

    low_ans=-10000;
    high_ans=10000;
    for (int i=0;i<n;i++){
        if (type[i]=="none"){
            low_ans = max(low_ans,low[i]);
            high_ans = min(high_ans,high[i]);
        } else if (type[i]=="on"){
            low_ans+=low[i];
            high_ans+=high[i];
        } else if (type[i]=="off"){
            low_ans-=high[i];
            high_ans-=low[i];
        }
    }
    cout<<max(0,low_ans)<<" "<<high_ans<<endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO("traffic");

    helper();

    return 0;
}
