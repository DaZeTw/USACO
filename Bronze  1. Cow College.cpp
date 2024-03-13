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
	int n;
	cin>>n;

	vector<int>tuition(n);
	for (int i=0;i<n;i++){
		cin>>tuition[i];
	}
	sort(tuition.begin(),tuition.end());
	int maxProfit{0};
	int price{0};
	for (int i=n-1;i>=0;i--){
		if ((n-i)*tuition[i]>=maxProfit){
			maxProfit = (n-i)*tuition[i];
			price = tuition[i];
		}
	}
	cout<<maxProfit<<" "<<price<<endl;
}

int main() {
	helper();
	return 0;
}
