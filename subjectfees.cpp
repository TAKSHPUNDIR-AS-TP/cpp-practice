#include<iostream>
using namespace std;
int main()
{
   string subject;
   cout<<"the name of the subject is:" ; cin>>subject;
   if (subject=="maths"){
       cout << "the fees of the maths is 900" <<endl;
   }
   else if(subject=="chemistry"){
      cout<< "the fees of the chemistry is 1000" <<endl;
   }
   else if(subject=="physics"){
      cout<<"the fees of the physics is 1000" <<endl;
   }
}
