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
	int n{0};
	cin>>n;

	int ans{0};
	unordered_map<string,int>temp;
	for (int i=0;i<n;i++){
		string name;
		int k;
		cin>>name;
		cin>>k;
		for (int j=0;j<k;j++){
			string s;
			cin>>s;
			temp[s]++;
			ans = max(ans,temp[s]);
		}
	}
	cout<<ans<<endl;
}

int main() {
	setIO("guess");

	helper();

	return 0;
}
