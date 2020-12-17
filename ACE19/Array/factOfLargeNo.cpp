#include<bits/stdc++.h>
using namespace std;
#define Max_size 500
int arr[Max_size];
int limit = 0;
void multiply(int x){
  int carry = 0;
  for(int i=0;i<Max_size;i++){
    if(arr[i] == 0 && carry == 0 && i>=limit){
      limit = i;
      break;
    }
    int no = arr[i]*x + carry;
    arr[i] = no%10;
    carry = no/10;
  }
}
int main(){
  int no;
  cin >> no;
  arr[0] = 1;
  for(int i=2;i<=no;i++){
    multiply(i);
  }
  for(int i=limit-1;i>=0;i--){
    cout << arr[i];
  }
  return 0;
}
