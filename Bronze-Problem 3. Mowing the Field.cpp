// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdio>
#include<iostream>
#include<string>
#include <vector>
using namespace std;

void setIO(string s){
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

void helper(){
	int n;
    cin >> n;
    int x = 0, y = 0, t = 0;
    map<pair<int, int>, int> a;
    int ans = 1e9;
    for (int i = 0; i < n; i++) {
        string dir;
        int val;
        cin >> dir >> val;
        for (int j = 0; j < val; j++) {
            t++;
            if (dir == "N") y++;
            else if (dir == "S") y--;
            else if (dir == "E") x++;
            else x--;
            if (a.count({x, y}) == 1)
                ans = min(ans, t - a[{x, y}]);
            a[{x, y}] = t;
        }
    }
    cout << (ans == 1e9 ? -1 : ans);
}



int main() {
	setIO("mowing");

	helper();

	return 0;
}
