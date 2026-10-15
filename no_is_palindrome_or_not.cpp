#include<bits/stdc++.h>
using namespace std;
int reverse_of_no(int y){
  int reverse=0;
  while(y>0){
     int r=y%10;
     y=y/10;
     reverse=reverse*10+r;
  } 
  return reverse;
}
string function_check_is_palindrome_or_not(int x){
  if(x == reverse_of_no(x)){
      return "this is a palindrome no";
  }
  return "this is not a palindrome no";
} 
int main(){
 int n;
 cout<<"enter the value of n:" << ' ' ; cin>>n;
 cout<<function_check_is_palindrome_or_not(n);
}
