#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  int no_0 = 0, no_1=0, no_2=0;
  for(int i=0;i<n;i++){
    int temp;
    cin >> temp;
    if(temp == 0){
      no_0++;
    }
    else if(temp == 1){
      no_1++;
    }
    else{
      no_2++;
    }
  }
  
  int i=0;
  while(no_0>0){
    arr[i] = 0;
    i++;
    no_0--;
  }

  while(no_1>0){
    arr[i] = 1;
    i++;
    no_1--;
  }

  while(no_2>0){
    arr[i] = 2;
    i++;
    no_2--;
  }

  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
