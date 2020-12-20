#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int max_profit = 0;
  int temp_profit = 0;
  int min_no = INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<min_no){
      min_no = arr[i];
    }
    else{
      temp_profit = arr[i] - min_no;
      max_profit = max(temp_profit,max_profit);
    }
  }
  cout << max_profit << endl;
  return 0;
}
