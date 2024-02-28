#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen((s+".in").c_str(), "r", stdin);
    freopen((s+".out").c_str(), "w", stdout); 
}

void helper() {
    int n{0}, k{0}, ans{0};
    cin >> n >> k;

    vector <int> d(n);
	for(int i =0; i < n; i++)
		cin>>d[i];
	sort(d.begin(), d.end());
	
	int mx = 1;
	int tmp = 1;
	for(int i = 0; i < n - 1; i++)
	{
		tmp = 1;
		for(int j = i + 1; j < n; j++)
			if(abs(d[j] - d[i]) <= k)
				tmp++;
		mx = max(mx, tmp);
	}
	cout<<mx<<endl;
}

int main() {
    setIO("diamond");

    helper();

    return 0;
}
