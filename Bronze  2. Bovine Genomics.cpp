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
	int n,k;
	cin>>n>>k;
	int ans{0};
	vector<string>temp(2*n);

	for (int i=0;i<2*n;i++){
		cin>>temp[i];
	}

	for (int i=0;i<k;i++){
		set<char> compare;
		bool flag = true; 
		for (int j=0;j<2*n;j++){
			if (j<n){
				compare.insert(temp[j][i]);
			} else {
				if (compare.count(temp[j][i])){
					flag = false;
					break;
				}
			}
		}
		if (flag) ans++;
	}

	cout<<ans<<endl;
}

int main() {
	setIO("cownomics");
	helper();
	return 0;
}
