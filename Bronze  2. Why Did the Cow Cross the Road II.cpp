// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void setIO(string s){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

void helper(){
	string s;
	cin>> s;
	vector<vector<int>> ar(26,vector<int>());
	for (int i=0;i<52;i++){
		ar[s[i]-'A'].push_back(i);
	}

	int ans{0};
	for (int i=0;i<26;i++){
		for (int j=0;j<26;j++){
			if (ar[i][0] < ar[j][0] && ar[j][0] < ar[i][1] && ar[i][1] < ar[j][1]) {
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}

int main() {
	setIO("circlecross");
	helper();
	return 0;
}
