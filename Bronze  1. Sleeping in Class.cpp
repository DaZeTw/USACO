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
	int t,n;
	cin>>t;
	int a[1000];

	for (int p=0;p<t;p++){
		cin>>n;
		int sum{0};
		for (int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		vector<int> factor;
		if (sum==0){
			factor = {0};
		} else {
			for (int i=1;i<=sum;i++){
				if (sum%i==0) factor.push_back(i);
			}
		}

		int ans = 10000;
		for (int f:factor){

			if (f==0) {
				ans = 0;
				break;
			}
			int curSum{0};
			int count{0};

			for (int i=0;i<n;i++){
				curSum+=a[i];
				if (curSum==f){
					count++;
					curSum=0;
				} else if (curSum>f){
					break;
				}
			}
			if (count == sum/f){
				ans = min(ans,n-count);
			}

		}
		cout<<ans<<endl;
	}
}

int main() {
	helper();

	return 0;
}
