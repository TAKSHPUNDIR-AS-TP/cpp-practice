#include<iostream>
using namespace std;
int main()
{ 
   int n,sum=0;
   cout << " the first n numbers are:" ; cin>>n;
   for ( int i=0 ; i<=n ; i++){
     sum=sum+i;
    }
    cout<<"the sum of first" <<' ' << n <<' ' <<"numbers is" <<' ' <<sum <<endl;
}
