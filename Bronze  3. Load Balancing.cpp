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

	int X[n];
	int Y[n];
	for (int i=0;i<n;i++){
		cin>>X[i]>>Y[i];
	}

	int ans = 101;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			int currX = X[i]+1,currY=Y[j]+1;
			int nw =0,ne=0,sw=0,se=0;
			int maxCount =0;
			for (int k=0;k<n;k++){
				if (currX>X[k]&&currY>Y[k]) {
					nw++;
				} else if (currX>X[k]&&currY<Y[k]){
					sw++;
				} else if (currX<X[k]&&currY>Y[k]){
					ne++;
				} else  {
					se++;
				}
			}
			maxCount = max(nw,max(ne,max(sw,se)));
			ans = min(ans,maxCount);
		}
	}
	cout<<ans<<endl;
}

int main() {
	setIO("balancing");
	helper();

	return 0;
}
