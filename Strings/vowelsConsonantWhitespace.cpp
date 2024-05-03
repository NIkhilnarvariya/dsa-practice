#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
int n = str.size();

for(int i = 0; i < n; i++){
  str[i] = tolower(str[i]);
}

int whitespaceCount = 0;
int vowelscount = 0;
int consonantCount = 0;

for(int i = 0; i < n; i++){
  if(str[i] == ' '){
    whitespaceCount++;
  }else if(tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
    vowelscount++;
  } else if (str[i] >= 'a' && str[i] <= 'z'){
    consonantCount++;
  }
}
cout<<whitespaceCount<<endl;
cout<<vowelscount<<endl;
cout<<consonantCount<<endl;
  
}
  

int main()
{
  string str = "my name is likhaA235AAAAaKkhdn ";
  isPalindrome(str);
}