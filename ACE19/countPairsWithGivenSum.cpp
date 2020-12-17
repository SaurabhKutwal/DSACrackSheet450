#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int count = 0;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(int i=0;i<n;i++){
    if(mp[k-arr[i]]>0){
      count = count + mp[k-arr[i]];
    }
    //if i == j then we can't consider that pair
    //because it is a single element.
    if(k - arr[i] == arr[i]){
      count--;
    }
  }
  cout << count/2 << endl;
  return 0;
}
