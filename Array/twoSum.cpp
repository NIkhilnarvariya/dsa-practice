#include <bits/stdc++.h>
using namespace std;

void zeroToLast(int arr[], int n, int k){

vector<int> twosum;
unordered_map<int, int> map;
for(int i = 0; i < n; i++){
int complement = k - arr[i];
if(map.find(complement) != map.end()){
   twosum.push_back(map[complement]);
   twosum.push_back(i);
   break;
} else{
   map.insert({arr[i], i});
}
}
for(auto x : twosum){
   cout<<x<<" ";
}

 
}

int main(){
 int arr[] = {2,5,17,7,15};
   int n = sizeof(arr)/sizeof(arr[0]);
   int k = 9;
   zeroToLast(arr,n,k); 
 
}