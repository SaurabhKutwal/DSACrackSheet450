#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n+1];
  for(int i=1;i<=n;i++){
    cin >> arr[i];
  }

  int i=1;
  while(i<=n){
    if(arr[abs(arr[i])]<0){
      cout << abs(arr[i]) << endl;
      break;
    }
    arr[arr[i]] = 0 - arr[arr[i]];
    i++;
  }
  return 0;
}
