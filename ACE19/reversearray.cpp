#include<bits/stdc++.h>
using namespace std;

//Recursive Approach
void reverseArray(int arr[], int start, int end){
  if(start<=end){
    swap(arr[start],arr[end]);
    reverseArray(arr,start+1,end-1);
  }
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int i=0,j=n-1;
  // while(i<=j){
  //   swap(arr[i],arr[j]);
  //   i++;
  //   j--;
  // }

  reverseArray(arr,0,n-1);

  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
