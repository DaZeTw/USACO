// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

set<set<char>> S[4];



void setIO(string s){
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}

void test(char a, char b, char c) {
   set<char> s;
   s.insert(a);
   s.insert(b);
   s.insert(c);
   S[s.size()].insert(s);
}

void helper(){
	char a,b,c,d,e,f,g,h,i;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	test(a,b,c);
   	test(d,e,f);
   	test(g,h,i);
 	test(a,d,g);
   	test(b,e,h);
   	test(c,f,i);
   	test(a,e,i);
   	test(g,e,c);
   	cout << S[1].size() << endl << S[2].size() << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	setIO("tttt");

	helper();
	
	return 0;
}
