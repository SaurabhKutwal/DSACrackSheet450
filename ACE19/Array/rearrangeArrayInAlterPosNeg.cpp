#include<bits/stdc++.h>
using namespace std;

void rightShift(int arr[],int leftL,int rightL,int n){
  for(int i=rightL;i>leftL;i--){
    swap(arr[i],arr[i-1]);
  }
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int flag = 0;
  for(int i=0;i<n;i++){
    flag = 0;
    if(arr[i]>0 && i%2 == 0){
      int rightL = 0;
      for(int j=i+1;j<n;j++){
        if(arr[j]<0){
          rightL = j;
          flag = 1;
          break;
        }
      }
      if(flag == 0){
        break;
      }
      rightShift(arr,i,rightL,n);
    }
    else if(arr[i]<0 && i%2 == 1){
      int rightL = 0;
      for(int j=i+1;j<n;j++){
        if(arr[j]>0){
          rightL = j;
          flag = 1;
          break;
        }
      }
      if(flag == 0){
        break;
      }
      rightShift(arr,i,rightL,n);
    }

  }
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
