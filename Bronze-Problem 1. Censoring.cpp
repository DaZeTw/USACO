// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <set>
#include <iostream>
#include <string>
using namespace std;

void setIO(string s){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

void helper(){
	string s,t;
	cin>>s>>t;

	string ans="";
	set<char> st;

	for (int i=0;i<t.length();i++){
		st.insert(t[i]);
	}

	for (int i=0;i<s.length();i++){
		if (st.find(s[i])==st.end()){
			ans+=s[i];
		}
	}

	cout<<ans<<endl;
}

int main() {
	setIO("censor");

	helper();


	return 0;

}
