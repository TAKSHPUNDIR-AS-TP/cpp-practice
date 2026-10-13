#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b);
int main(){
   int a,b; cout<<"enter the value of a:" <<' ' ; cin>>a; cout<<"enter the value of b:"  <<' ' ; cin>>b;
   int c = sum(a,b);
   cout<<"sum is:"<<' ' <<c;
   return 0; 
} 
int sum(int c , int d)
{
  return c+d;
}
  
