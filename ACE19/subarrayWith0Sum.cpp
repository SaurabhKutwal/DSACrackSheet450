#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  unordered_map<int,int> mp;
  int sum = 0;
  int flag = 0;
  for(int i=0;i<n;i++){
    sum = sum + arr[i];
    if(mp[sum]>0 || sum == 0){
      flag = 1;
      break;
    }
    else{
      mp[sum] = 1;
    }
  }
  if(flag == 1){
    cout << "yes" << endl;
  }
  else{
    cout << "no" << endl;
  }
  return 0;
}
