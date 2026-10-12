#include<iostream>
using namespace std;
int main()
{
  int n; cout<<"please enter the value of n:" << ' ';cin>>n;
  for (int i=n ; i>=1 ; i--){
     for (int j=1 ; j<=i ; j++){
        cout<<"*";
     }
     cout<<endl;
  } 
  for (int i=2 ; i<=n ; i++){
    for (int j=1; j<=i ; j++){
        cout<<"*";
    }
    cout<<endl;
  }
}
      
