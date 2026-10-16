#include<bits/stdc++.h>
using namespace std;
int main(){
   int a=5;
   int *p = &a;
   int **q = &p;
   cout <<p << ' ';
   cout << *p <<' ';
   cout << q <<' ';
   cout << *q <<' ';
}
