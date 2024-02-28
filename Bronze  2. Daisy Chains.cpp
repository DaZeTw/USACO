// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen((s+".in").c_str(), "r", stdin);
    freopen((s+".out").c_str(), "w", stdout); 
}

void helper(){
	int n{0},ans{0};
	cin>>n;

	vector<int>temp(n);
	for (int i=0;i<n;i++){
		int petals ;
		cin>>petals;
		temp[i] = petals;
	}
	ans=n;
	for (int i=0;i<n-1;i++){
		int sum = temp[i];
		set<int> s;
		s.insert(temp[i]);
		for (int j=i+1;j<n;j++){
			sum+=temp[j];
			s.insert(temp[j]);
			if (sum%(j-i+1)==0 && s.count(sum/(j-i+1))) ans++;
		}
	}

	cout<<ans<<endl;
}

int main() {
	helper();

	return 0;
}
