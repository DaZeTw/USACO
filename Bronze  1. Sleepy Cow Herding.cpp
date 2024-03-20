// Source: https://usaco.guide/general/io

#include <iostream>
using namespace std;
int main(){
      int a, b, c; cin >> a >> b >> c;
      int l = (b - a - 1), r = (c - b - 1);
      if(l == 0 && r == 0){
          cout << "0" << '\n';
      }
      else if(l == 1 || r == 1){
          cout << "1" << '\n';
      }
      else cout << "2" << '\n';
      cout << max(l, r);
 return 0;
}
