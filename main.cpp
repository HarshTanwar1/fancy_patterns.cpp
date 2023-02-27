#include<iostream>
#include "assert.h"
using namespace std;

int main(){
  // // FANCY PATTERN #1
  // int n;
  // cin>>n;
  // assert(n<=9);
  // for(int i = 0;i<n;i++){
  //     int start = 8-i;
  //     int num = i+1;
  //     int cnt = num;
  //   for(int j = 0;j<17;j++){
  //     if(j==start && cnt>0){
  //       cout<<num;
  //       cnt--;
  //       start += 2;
  //     }
  //     else{
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  // }


  // // FANCY PATTERN #2
  // int n;
  // cin>>n;
  // int cnt = 1;
  // for(int i = 1;i<=n;i++){
  //   for(int j = 1;j<=i;j++){
  //     cout<<(cnt++);
  //     if(j<i){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  // }
  // int st = cnt - n;
  // for(int i = 1;i<=n;i++){
  //   int k = st;
  //   for(int j = 1;j<=(n-i+1);j++){
  //     cout<<(k++);
  //     if(j<=(n-i)){
  //       cout<<"*";
  //     }
  //   }
  //   cout<<endl;
  //   st = st - (n-i);
  // }
  
  return 0;
}