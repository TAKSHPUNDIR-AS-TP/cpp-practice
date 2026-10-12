#include<iostream>
using namespace std;
int main()
{
  int a=0;
  int b=1;
  int n;
  cout<<"up to this we run the fibbonic series"; cin>>n;
  for(int i=1 ; i<=n ; i++){
     cout<<a<<' ';
     int c=a+b;
     a=b;
     b=c;
  }
}
