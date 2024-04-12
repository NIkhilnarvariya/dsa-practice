#include <bits/stdc++.h>
using namespace std;

  void maximumSubarray(int arr[], int n){
      int maximum = INT_MIN;
      int sum = 0;
      for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > maximum){
            maximum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
      }
      cout<<maximum;
  }
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    maximumSubarray(arr,n);

}
