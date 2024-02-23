// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

void setIO(string s){
	freopen((s+".in").c_str(), "r", stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

void helper(){
	int n{0};
	cin>>n;

	vector<int> ans (26,0);

	for (int i=0;i<n;i++){
		vector<int>count1(26,0);
		vector<int>count2(26,0);

		string a,b;
		cin>>a>>b;

		for (int j=0;j<a.length();j++){
			count1[a[j]-'a']+=1;
		}
		for (int j=0;j<b.length();j++){
			count2[b[j]-'a']+=1;
		}

		for (int j=0;j<26;j++){
			ans[j]+=max(count1[j],count2[j]);
		}
	}

	for (int i=0;i<26;i++){
		cout<<ans[i]<<endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	setIO("blocks");
	helper();




	return 0;
}
