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
	int n,m;
	cin>>n>>m;

	vector<vector<char>> temp(2*n,vector<char>(m));
	int ans{0};

	for (int i=0;i<2*n;i++){
		for (int j=0;j<m;j++){
			cin>>temp[i][j];
		}
	}

	for (int i=0;i<m;i++){
		for (int j=i+1;j<m;j++){
			for (int k=j+1;k<m;k++){
				bool work = true;
				for (int a=0;(a<n && work);a++){
					for (int b=n;(b<2*n && work);b++){
						if (temp[a][i]==temp[b][i] && temp[a][j]==temp[b][j] && temp[a][k]==temp[b][k]) work = false;
					}
				}
				if (work) ans++;
			}
		}
	}

	cout<<ans<<endl;
}

int main() {
	setIO("cownomics");
	helper();

	return 0;
}
