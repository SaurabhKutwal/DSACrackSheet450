#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int r = s.size()-1;
	int l = 0;
	int flag = 1;
	while(l<r){
    if(s[l] != s[r]){
      flag = 0;
	    break;
	  }
	  l++;
	  r--;
	}
  cout << flag << endl;
  return 0;
}
