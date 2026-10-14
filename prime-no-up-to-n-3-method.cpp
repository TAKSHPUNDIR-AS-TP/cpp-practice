#include<bits/stdc++.h>
using namespace std;
bool function_of_checking_prime_no_or_not(int x){
   for(int i=2 ; i<=x/2 ; i++){
      if(x%i==0){
          return false;
      }
   }
   return true;
}

void function_of_printing_prime_numbers(int n){
   for(int i=2;i<=n;i++){
     if(function_of_checking_prime_no_or_not(i)==true){
        cout<<i <<' ';
     }
   }
}
int main(){
   int n;
   cout<<"enter the value up to which you want to find the prime numbers:" << ' ' ; cin>>n;
   function_of_printing_prime_numbers(n);
}
