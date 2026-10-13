#include<bits/stdc++.h>
using namespace std;
int fun(int &a, int&b){ //pass by reference
  a++;
  b++;
  return a+b;
}
int main(){
  int c=5,d=6;
  int x=fun(c,d);
  cout<<"this is the final value of c:"<<' ' <<c; cout<<"this is the final value of d:"<<' ' <<d;
}
  
