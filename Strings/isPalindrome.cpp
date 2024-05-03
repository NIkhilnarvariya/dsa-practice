#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){

  int n = str.size();
  int l = 0;
  int r = n-1;
  while(l < r){
    while(!isalnum(str[l]) && l < r){
      l++;
    }
    while(!isalnum(str[r]) && l < r){
      r--;
    }
    if(tolower(str[l]) == tolower(str[r])){
      l++;
      r--;
    }else{

      cout<<"not a plindrome string"<<endl;
      return false;
    }
  }
  cout<<"is plindrome"<<endl;
  // int nam = stoi(str);
  // cout<<nam-1 <<endl;
  return true;
}
  

int main()
{
  string str = "   Nitin ";
  isPalindrome(str);
}