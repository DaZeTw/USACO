#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rz(a) resize(a)

vector<int> a;
int n;

int r(int i, int t){
	int j, cnt = 0;
	for(j = i+1; j < n; j++){
		if(abs(a[i]-a[j]) > t) break;
		cnt++;
	}
	if(j == n) return cnt;
	if(i == j-1) return 0;
	return cnt + r(j-1, t+1);
}

int l(int i, int t){
	int j, cnt = 0;
	for(j = i-1; j >= 0; j--){
		if(abs(a[i]-a[j]) > t) break;
		cnt++;
	}
	
	if(j < 0) return cnt;
	if(j+1 == i) return 0;
	return cnt + l(j+1, t+1);
}

int main() {
	freopen("angry.in", "r", stdin);
	freopen("angry.out", "w", stdout);
	int  i, res = 0;
	cin >> n;
	a.rz(n);
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(all(a));
	for(i = 0; i < n; i++){
		
		res = max(res, r(i, 1)+l(i, 1) + 1);
	}
	cout << res << endl;
	return 0;
}
