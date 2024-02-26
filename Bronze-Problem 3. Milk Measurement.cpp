// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

void setIO(string s){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
	int n{0};
	cin>>n;
	vector<pair<char,int>> a[105];

	for (int i=0;i<n;i++){
		int day,ajt;
		string cow;
		cin>>day>>cow>>ajt;
		a[day].push_back({cow[0],ajt});
	}

	int ans{0};
	int cur[3] = {7,7,7};
	int mot_bo[3] = {1, 1, 1};
	for (int i=0;i<105;i++){
		if (a[i].size()==0) continue;

		for (auto P:a[i]){
			if (P.first == 'B') cur[0] += P.second;
			else if (P.first == 'E') cur[1] += P.second;
			else if (P.first == 'M') cur[2] += P.second;
		}

		int mx = max({cur[0], cur[1], cur[2]});
		int tmp_bo[3] = {0};
		for (int j = 0; j < 3; j++)
			if (cur[j] == mx) tmp_bo[j] = 1;
		for (int j = 0; j < 3; j++)
			if (tmp_bo[j] != mot_bo[j]) {ans++; break;}
		for (int j = 0; j < 3; j++)
			mot_bo[j] = tmp_bo[j];
	}
	cout << ans << endl;
}

int main() {
	setIO("measurement");
	solve();
	return 0;
}
