#include<bits/stdc++.h>
using namespace std;
long long maximumProduct(int arr[],int size){
  long long max_so_far = 0;
  long long max_pos = 1;
  long long min_neg = 1;
  long long t = 1;
  int flag = 0;
  for(int i=0;i<size;i++){
    if(arr[i]>0){
      max_pos = max_pos * arr[i];
      min_neg = min(min_neg*arr[i],t);
      flag = 1;
    }
    else if(arr[i] == 0){
      max_pos = 1;
      min_neg = 1;
    }
    else{
      long long temp = max_pos;
      max_pos = max(min_neg*arr[i],t);
      min_neg = temp*arr[i];
    }

    max_so_far = max(max_so_far,max_pos);
  }
  if(flag == 0 && max_so_far == 0){
    return 0;
  }
  return max_so_far;
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  cout << maximumProduct(arr,n) << endl;
  return 0;
}
